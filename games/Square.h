#ifndef SQUARE_H
#define SQUARE_H


#include <iostream>
#include "direction.h"
#include "Random.h"
#define N 4
using namespace std;

//	int getRandom();
//	int getTwoRandom();

class Square
{
public:
	Square() 
	{
		int x1 = rand.getRandom();
		int y1 = rand.getRandom();
		int x2 = rand.getRandom();
		int y2 = rand.getRandom();

		while(x1 == x2 && y1 == y2)
		{
			x2 = rand.getRandom();
			y2 = rand.getRandom();
		}

		int number1 = rand.getTwoRandom();
		int number2 = rand.getTwoRandom();

		for(int i = 0; i < N; i ++)
		{
			for(int j = 0; j < N; j ++)
			{
				numbers[i][j] = 0;
			}
		}

		numbers[x1][y1] = number1;
		numbers[x2][y2] = number2;
		printSquare();
	}

	void printSquare();  //show all the numbers

	void move(const int); //move the small square


	int getSum();  //get sum
	int getMax();  

private:
	void generateNewNumber();  //generate new numbers 2 or 4
	void moveUp();
	void moveDown();
	void moveLeft();
	void moveRight();

	void swap(int *, int *);

	RandNumber rand;   //random number object
	int numbers[N][N]; //numbers in the square
};

void Square::printSquare()
{
	system("clear");
	for(int i = 0; i < N; i ++)
	{
		for(int j = 0; j < N; j ++)
		{
			//cout << numbers[i][j] << " ";
			printf("%6d", numbers[i][j]);
			printf("  ");
		}
		cout << endl;
	}
	cout << endl << endl;
}

void Square::generateNewNumber()
{
	int x = rand.getRandom();
	int y = rand.getRandom();
	int num = rand.getTwoRandom();
	while(numbers[x][y] != 0)
	{
		x = rand.getRandom();
		y = rand.getRandom();
	}
	numbers[x][y] = num;
}

void Square::move(const int dir)
{
	switch(dir)
	{
		case 1: moveUp(); break;
		case 2: moveLeft(); break;
		case 3: moveDown(); break;
		case 4: moveRight(); break;
		default: break;
	}
	//generateNewNumber();
	printSquare();
}

void Square::swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void Square::moveUp()
{
	int inner = 0;

	for(int x = 0; x < N - 1; x ++)
	{
		for(int i = 0; i < N - 1; i ++)
		{
			for(int j = 0; j < N; j ++)
			{
				if(numbers[i][j] == 0 && numbers[i + 1][j] != 0)
				{
					swap(&numbers[i][j], &numbers[i + 1][j]);
					inner = 1;
				}
			}
		}
	}

	for(int a = 0; a < N; a ++)
	{
		if(numbers[0][a] == numbers[1][a])
		{
			numbers[0][a] += numbers[1][a];
			numbers[1][a] = 0;
		}
	}
	for(int a = 0; a < N; a ++)
	{
		if(numbers[2][a] == numbers[3][a])
		{
			numbers[2][a] += numbers[3][a];
			numbers[3][a] = 0;
		}
	}
	for(int a = 0; a < N; a ++)
	{
		if(numbers[1][a] == numbers[2][a])
		{
			numbers[1][a] += numbers[2][a];
			numbers[2][a] = 0;
		}
	}

	for(int x = 0; x < N - 1; x ++)
	{
		for(int i = 0; i < N - 1; i ++)
		{
			for(int j = 0; j < N; j ++)
			{
				if(numbers[i][j] == 0 && numbers[i + 1][j] != 0)
				{
					inner = 1;
					swap(&numbers[i][j], &numbers[i + 1][j]);
				}
			}
		}
	}

	if(inner == 1)
	{
		generateNewNumber();
	}
}

void Square::moveDown()
{
	int inner = 0;

	for(int x = 0; x < N - 1; x ++)
	{
		for(int i = 3; i > 0; i --)
		{
			for(int j = 0; j < N; j ++)
			{
				if(numbers[i][j] == 0 && numbers[i - 1][j] != 0)
				{
					swap(&numbers[i][j], &numbers[i - 1][j]);
					inner = 1;
				}
			}
		}
	}

	for(int a = 0; a < N; a ++)
	{
		if(numbers[3][a] == numbers[2][a])
		{
			numbers[3][a] += numbers[2][a];
			numbers[2][a] = 0;
		}
	}
	for(int a = 0; a < N; a ++)
	{
		if(numbers[1][a] == numbers[0][a])
		{
			numbers[1][a] += numbers[0][a];
			numbers[0][a] = 0;
		}
	}
	for(int a = 0; a < N; a ++)
	{
		if(numbers[2][a] == numbers[1][a])
		{
			numbers[2][a] += numbers[1][a];
			numbers[1][a] = 0;
		}
	}

	for(int x = 0; x < N - 1; x ++)
	{
		for(int i = 3; i > 0; i --)
		{
			for(int j = 0; j < N; j ++)
			{
				if(numbers[i][j] == 0 && numbers[i - 1][j] != 0)
				{
					swap(&numbers[i][j], &numbers[i - 1][j]);
					inner = 1;
				}
			}
		}
	}

	if(inner == 1)
	{
		generateNewNumber();
	}

}

void Square::moveLeft()
{
	int inner = 0;

	for(int x = 0; x < 3; x ++)
	{
		for(int i = 0; i < 3; i ++)
		{
			for(int j = 0; j < 4; j ++)
			{
				if(numbers[j][i] == 0 && numbers[j][i + 1] != 0)
				{
					inner = 1;
					swap(&numbers[j][i], &numbers[j][i + 1]);
				}
			}
		}
	}

	for(int i = 0; i < 4; i ++)
	{
		if(numbers[i][0] == numbers[i][1])
		{
			numbers[i][0] += numbers[i][1];
			numbers[i][1] = 0;
		}
	}
	for(int i = 0; i < 4; i ++)
	{
		if(numbers[i][2] == numbers[i][3])
		{
			numbers[i][2] += numbers[i][3];
			numbers[i][3] = 0;
		}
	}
	for(int i = 0; i < 4; i ++)
	{
		if(numbers[i][1] == numbers[i][2])
		{
			numbers[i][1] += numbers[i][2];
			numbers[i][2] = 0;
		}
	}

	for(int x = 0; x < 3; x ++)
	{
		for(int i = 0; i < 3; i ++)
		{
			for(int j = 0; j < 4; j ++)
			{
				if(numbers[j][i] == 0 && numbers[j][i + 1] != 0)
				{
					swap(&numbers[j][i], &numbers[j][i + 1]);
					inner = 1;
				}
			}
		}
	}

	if(inner == 1)
	{
		generateNewNumber();
	}
}

void Square::moveRight()
{
	int inner = 0;

	for(int x = 0; x < 3; x ++)
	{
		for(int i = 3; i > 0; i --)
		{
			for(int j = 0; j < 4; j ++)
			{
				if(numbers[j][i] == 0 && numbers[j][i - 1] != 0)
				{
					swap(&numbers[j][i], &numbers[j][i - 1]);
					inner = 1;
				}
			}
		}
	}

	for(int i = 0; i < 4; i ++)
	{
		if(numbers[i][3] == numbers[i][2])
		{
			numbers[i][3] += numbers[i][2];
			numbers[i][2] = 0;
		}
	}
	for(int i = 0; i < 4; i ++)
	{
		if(numbers[i][1] == numbers[i][0])
		{
			numbers[i][1] += numbers[i][0];
			numbers[i][0] = 0;
		}
	}
	for(int i = 0; i < 4; i ++)
	{
		if(numbers[i][2] == numbers[i][1])
		{
			numbers[i][2] += numbers[i][1];
			numbers[i][1] = 0;
		}
	}

	for(int x = 0; x < 3; x ++)
	{
		for(int i = 3; i > 0; i --)
		{
			for(int j = 0; j < 4; j ++)
			{
				if(numbers[j][i] == 0 && numbers[j][i - 1] != 0)
				{
					swap(&numbers[j][i], &numbers[j][i - 1]);
					inner = 1;
				}
			}
		}
	}

	if(inner == 1)
	{
		generateNewNumber();
	}

}

int Square::getSum()
{
	int res = 0;
	for(int i = 0; i < 4; i ++)
	{
		for(int j = 0; j < 4; j ++)
		{
			res += numbers[i][j];
		}
	}

	return res;
}

int Square::getMax()
{
	int res = 0;
	for(int i = 0; i < 4; i ++)
	{
		for(int j = 0; j < 4; j ++)
		{
			if(res < numbers[i][j])
			{
				res = numbers[i][j];
			}
		}
	}

	return res;
}


#endif