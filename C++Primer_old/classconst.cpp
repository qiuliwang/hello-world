#include <iostream>
#include <string>
//using namespace std;

class Screen
{
public:
	typedef std::string::size_type index;
	char get() const { return contents[cursor]; }
	inline char get(index ht, index wd) const;
	index get_cursor() const;
private:
	std::string contents;
	//std::string::size_type cursor;
	//std::string::size_type height, width;
	index cursor;
	index height, width;
};

char Screen::get(index r, index c) const
{
	index row = r * width;
	return contents[row + c];
}

inline Screen::index Screen::get_cursor() const
{
	return cursor;	
}

int main()
{
	return 0;
}