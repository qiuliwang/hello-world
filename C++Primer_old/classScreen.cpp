class Screen
{
	typedef std::string::size_type index;
	//implicitly inline when defined inside the class declaration
	char get() const {return contests[cursor]};
	//explicitly declared as inline; will be defined outside the class declaration
	inline char get(index ht, index wd) const;
	//inline not specified int class declaration, but can be defined inline later
	index get_cursor() const;

private:
	std::string contents;
	index cursor;
	index height, width;
};

// inline declared in the class declaration; no need to repeat on the definition
char Screen::get(index r, index c) const
{
	index row = r * width;
	return contents[row + c];
}

//not declared as inline in the class declearation, but ok to make inline in definition
inline Screen::index Screen ::get_cursor() const
{
	return cursor;
}