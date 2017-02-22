#include <iostream>
#include <string>

using namespace std;

//Item sold at an undiscounted price
//derived classes will define various discount strategies
class Item_base
{
    public:
        Item_base(const string &book = "X", double sales_price = 0):
            isbn(book), price(sales_price) {}

        string book() const { return isbn; }
        //return tatal sales price for a specified number of items
        //derived classes will override and apply different discount algorithms
        virtual double net_price(size_t n) const
        {
            return n * price;
        }
        virtual ~Item_base() {}
        
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
            min_qty(n), discount(dis) { price = pri; } 
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
    Item_base a("gone with wind", 20);
    cout << a.book() << endl;
    cout << a.net_price(2) << endl;

    // private:
    //     string isbn;
    // protected:
    //     double price;

    //private
    //double discount;
    Bulk_item b(2, 30, 0.2);
    cout << b.net_price(5) << endl;
    cout << b.book() << endl;
    return 0;
}