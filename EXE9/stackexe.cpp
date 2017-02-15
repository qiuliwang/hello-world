#include <iostream>
#include <stack>
using namespace std;

int main()
{
	const stack<int>::size_type stk_size = 10;
	stack<int> intStack; //empty stack
	//fill up the stack
	int ix = 0;
	while(intStack.size() != stk_size)
	{
		//use postfix increment; want to push old value onto intStack
		intStack.push(ix ++);
	}
	int error_cnt = 0;
	//look at each value and pop it off the stack
	while(intStack.empty() == false)
	{
		int value = intStack.top();
		if(value != --ix)
		{
			cerr << "opps! expected " << ix << " received " << value << endl;
			++ error_cnt;
		}
		intStack.pop();
	}
	cout << "our program ran with " << error_cnt << " errors !" << endl;
	
	return 0;
}