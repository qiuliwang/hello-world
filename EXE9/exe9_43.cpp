#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	stack<char> stk;
	string equation = "";
	cin >> equation;
	//cout << equation.size() << endl;
	int length = equation.size();
	
	for(int i = 0; i < length; i ++)
	{
		if(equation[i] != ')')
		{
			//cout << equation[i] << endl;
			stk.push(equation[i]);
		}
		else
		{
			char inner = stk.top();
			//cout << inner << endl;
			while(inner != '(')
			{
				stk.pop();
				inner = stk.top();
				//cout << inner << endl;
			}
			stk.pop();
			stk.push('@');
		}
	}
	
	cout << stk.top();
	stk.pop();
	cout << stk.top();
	stk.pop();
	cout << stk.top();
	stk.pop();
	cout << stk.top();
	stk.pop();

	//cout << endl << stk.size();
	cout << endl;
	//cout << equation << endl;
}
	