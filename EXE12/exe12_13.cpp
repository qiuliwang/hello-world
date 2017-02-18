#include <iostream>
#include <string>

using namespace std;

class Screem
{
public:
	typedef string::size_type index;
	char get() const {return contents[cursor];}
	inline char get(index ht, index wd) const;
	index get_cursor() const
	{
		return cursor;
	}
	
	Screem(string::size_type hei, string::size_type wid, 
		string::size_type cur, string cont): height(hei), width(wid), cursor(cur), contents(cont)
	{
		//cout << contents << endl << height << " " << width << endl;
	}
	
	Screem& move(index x, index y);
	Screem& set(char);
	Screem& set(index, index, char);
	Screem& display(ostream &os)
	{
		do_display(os); return *this;
	}
	const Screem& display(ostream &os) const
	{
		do_display(os); return *this;
	}
	//typedef string::size_type index;
	
private:
	string contents;
	index cursor;
	index height, width;
	
	void do_display(ostream &os) const
	{
		os << contents << endl;
	}
};

Screem& Screem::set(char c)
{
	contents[cursor] = c;
	return *this;
}

Screem& Screem::move(index r, index c)
{
	index row = r * width;
	cursor = row + c;
	return *this;
}

int main()
{
	Screem A(2, 4, 1, "hello world");
	A.display(cout);
	A.move(4, 5).set('#').display(cout);
}