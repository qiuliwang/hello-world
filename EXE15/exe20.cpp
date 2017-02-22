#include <iostream>
#include <string>

using namespace std;

//Item sold at an undiscounted price
//derived classes will define various discount strategies
class Item_base
{
    public:
        Item_base(const string &book = "X", double sales_price = 0):
            isbn(book), price(sales_price) 
        {
            cout << "Item_base" << endl;
        }
        Item_base(const Item_base &cp)
        {
            cout << "Item_base copy" << endl;
            isbn = cp.isbn;
            price = cp.price;
        }
        Item_base &operator=(const Item_base &cp)
        {
            isbn = cp.isbn;
            price = cp.price;
            return *this;
        }

        string book() const { return isbn; }
        //return tatal sales price for a specified number of items
        //derived classes will override and apply different discount algorithms
        virtual double net_price(size_t n) const
        {
            return n * price;
        }

        virtual ~Item_base() 
        {
                 cout << "~Item_base" << endl;
        }
        
    private:
        string isbn;
    protected:
        double price;
};

//discount kicks when a specified number of copies of same book are sold
//the discount is expressed as a fraction used to reduce the normal price
class Bulk_item: public Item_base
{
    public:
        //redefines base version so as to implement bulk purchase discount policy
        Bulk_item(size_t n = 3, double pri = 30, double dis = 0.8):
            min_qty(n), discount(dis) 
        {
            price = pri; 
            cout << "Bulk_item" << endl;
        }

        Bulk_item(const Bulk_item &cp):Item_base(cp)
        {
            cout << "Bulk_item copy" << endl;
            min_qty = cp.min_qty;
            discount = cp.discount;
        }

        Bulk_item &operator=(const Bulk_item &cp)
        {
            if(this != &cp)
            {
                Item_base::operator=(cp);
                min_qty = cp.min_qty;
                discount = cp.discount;
            }
            return *this;
        }

        ~Bulk_item()
        {
            cout << "~Bulk_item" << endl;
        }
        double net_price(size_t t) const;
    private:
        size_t min_qty;    //minimum purchase for discount to apply
        double discount;
};

//if specified number of items are purchased, use discount price
double Bulk_item::net_price(size_t cnt) const
{
    if(cnt >= min_qty)
        return cnt * (1 - discount) * price;
    else
        return cnt * price;
}

int main()
{
    //Item_base a("gone with wind", 20);
    //Item_base b(a);
    //Item_base c = b;
    //cout << a.book() << endl;
    //cout << a.net_price(2) << endl;

    // private:
    //     string isbn;
    // protected:
    //     double price;

    //private
    //double discount;
    //Bulk_item aa(2, 30, 0.2);
    //Bulk_item bb(aa);
    //Bulk_item cc = bb;
    //cout << b.net_price(5) << endl;
    //cout << b.book() << endl;

    Item_base *pt = new Item_base;
    delete pt;
    pt = new Bulk_item;
    delete pt;
}