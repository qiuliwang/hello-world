#ifndef DIR_H
#define DIR_H
#include <iostream>

using namespace std;

class Direction
{
public:
	int GetDirection(const char);
};

int Direction::GetDirection(const char dir)
{
	int sign = 0;
	switch(dir)
	{
		case 'w': sign = 1; break;
		case 'a': sign = 2; break;
		case 's': sign = 3; break;
		case 'd': sign = 4; break;
		case 'q': sign = 5; break;
		default: sign = 0;
	}
	
	return sign;
}

#endif