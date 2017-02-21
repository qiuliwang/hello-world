#include <iostream>
#include <vector>

using namespace std;

class Foo
{
public:
	int &operator[] (const size_t);
	const int &operator[] (const size_t) const;
	Foo()
	{
		for(int i = 0; i < 10; i ++)
		{
			data.push_back(i);
		}
	}
	
	void print()
	{
		vector<int>::iterator itea = data.begin();
		for( ; itea != data.end(); itea ++)
		{
			cout << *itea << " ";
		}
		cout << endl;
	}
	
private:
	vector<int> data;
};

int& Foo::operator[] (const size_t index)
{
	return data[index];
}

const int& Foo::operator[] (const size_t index) const
{
	return data[index];
}

int main()
{
	Foo A;
	A.print();
	cout << A[4];
}