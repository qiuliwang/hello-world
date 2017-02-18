#include <iostream>
#include <string>

using namespace std;

class Scream
{
public:
	typedef string::size_type index;
	char get() const {return contents[cursor];}
	inline char get(index ht, index wd) const;
	index get_cursor() const;
	
	Scream(string::size_type hei, string::size_type wid, string cont): height(hei), width(wid), contents(cont)
	{
		cout << contents << endl << height << " " << width << endl;
	}
private:
	string contents;
	index cursor;
	index height, width;
};

int main()
{
	Scream A(2, 4, "hello world");
}