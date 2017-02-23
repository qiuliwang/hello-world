#include "sales.h"

class Sales_item
{
public:
    //default constructor: unbound handle
    Sales_item():p(0), use(new size_t(1)) {}
    //attaches a handle to a copy of the Item_base obj
    Sales_item(const Item_base&);
    //copy control members to manage the use count and pointers
    Sales_item(const Sales_item &i):p(i.p), use(i.use) { ++ *use; }

    ~Sales_item() { decr_use(); }
    Sales_item& operator=(const Sales_item&);
    //member access operators
    const Item_base *operator->() const
    {
        if(p) return p;
        else throw logic_error("unbound Sales_item");
    }

    const Item_base &operator*() const
    {
        if(p) return *p;
        else throw logic_error("unbound Sales_item");
    }

private:
    Item_base *p;   //pointer to share Sales_item
    size_t *use;   //pointer to shared use count
    //call by both destructor and assignment operator to free pointers
    void decr_use()
    {
        if( -- *use == 0)
        {
            delete p;
            delete use;
        }
    }
};

Sales_item::Sales_item(const Item_base &item):p(item.clone()), use(new size_t(1)) { }

Sales_item& Sales_item::operator=(const Sales_item &rhs)
{
    ++ *rhs.use;
    decr_use();
    p = rhs.p;
    use = rhs.use;
    return *this;
}

//exe 15.8.3
//compare defines item ordering for the multiset in Basket
inline bool compare(const Sales_item &lhs, const Sales_item &rhs)
{
    return lhs -> book() < rhs -> book();
}

int main()
{
    Item_base A;
    Bulk_item B;
    Sales_item S(A);
    Sales_item P(B);
    Sales_item X(P);
    S->printMsg();
    P->printMsg();
    X->printMsg();
    //A->p.printMsg();
    //S->p->printMsg();
    //S.operator->p->printMsg();
}