#include <string>
#include <iostream>

class CTextBlock
{
public:
	std::size_t length() const;
private:
	char *pText;
	mutable std::size_t textLength; //这些成员变量可能总是被修改，
	mutable bool lengthIsValid;     //即使在const成员函数内
};

std::size_t CTextBlock::length() const
{
	if(!lengthIsValid) 
	{
		textLength = strlen(pText);
		lengthIsValid = true;
	}
	return textLength;
}


int main()
{
	std::cout << "fff" << std::endl;
	system("pause");
	return 0;
}