#ifndef Random
#define Random

#include <stdio.h>
#include <time.h>

class RandNumber
{
public:
	RandNumber() 
	{
		srand( (unsigned)time( NULL ) );
		N = 4;
		Two = 2;
	}
	int getRandom();
	int getTwoRandom();
private:
	int N;
	int Two;
};

int RandNumber::getRandom()
{
	return rand() % N;
}

int RandNumber::getTwoRandom()
{
	return (rand() % 2 + 1) * 2;
}

#endif