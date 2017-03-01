#include <iostream>
#include <string>

using namespace std;

// int main()
// {
// 	unsigned char bits = 1;
// 	cout << bits << endl;

// 	//bits = -bits;
// 	//cout << bits << endl;

// 	unsigned bits1 = bits << 1;
// 	cout << bits1 << endl;

// 	unsigned bits2 = bits1 << 2;
// 	cout << bits2 << endl;

// 	unsigned bits3 = bits2 >> 3;
// 	cout << bits3 << endl;

// 	return 0;
// }


	// int x = 0, y = 0, z = 0;
	// if(x=y+z)
	// {
	// 	printf("***\n");
	// }
	// else
	// {
	// 	printf("###\n");
	// }

	//char str[12]={'a','b','c','d','e','f'};
	//cout<<strlen(str);
	int f(int b[],int m,int n)
	{
		int i, s = 0;
		for(i = m; i < n; i+=2)
			s = s + b[i];
		return s;
	}

	int main()
	{
		int x, a[]={1,2,3,4,5,6,7,8,9};
		x = f(a, 3 ,7);
		cout<<x<<endl;
	}

