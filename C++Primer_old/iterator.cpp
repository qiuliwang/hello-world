#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main()
{
	int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
	int length = sizeof(ia) / sizeof(ia[0]);
	list<int> test;
	vector<int> vectest;
	for(int i = 0; i < length; i ++)
	{
		test.push_back(ia[i]);
		vectest.push_back(ia[i]);
	}

	list<int>::iterator iter = test.begin();

	for( ; iter != test.end(); iter ++)
	{
		cout << *iter << " ";
	}
	cout << endl;

	vector<int>::iterator iter2 = vectest.begin();
	for( ; iter2 != vectest.end(); iter2 ++)
	{
		cout << *iter2 << " ";
	}
	cout << endl;

	iter = test.begin();
	iter2 = vectest.begin();
	for( ; iter != test.end(); iter ++)
	{
		if(*iter % 2 != 0)
		{
			iter = test.erase(iter);
			iter --;
		}
	}
	for( ; iter2 != vectest.end(); iter2 ++)
	{
		if(*iter2 % 2 == 0)
		{
			iter2 = vectest.erase(iter2);
			iter2 --;
		}
	}

	iter = test.begin();

	for( ; iter != test.end(); iter ++)
	{
		cout << *iter << " ";
	}
	cout << endl;

	iter2 = vectest.begin();
	for( ; iter2 != vectest.end(); iter2 ++)
	{
		cout << *iter2 << " ";
	}
	cout << endl;


	//list<int> ilist;
	//vector<int> ivector;
	//list<int>::iterator listiter = ilist.begin();
	//vector<int>::iterator vectoriter = ivector.begin();
	
	//int length = sizeof(ia)/sizeof(ia[0]);
	//for(int i = 0; i < length; i ++)
	//{
	//	ilist.push_back(i);
		//ivector.push_back(ia[i]);
	//}
	
	//for( ; listiter != ilist.end(); listiter ++)
	//{
	//	cout << *listiter << " ";
	//}
	//cout << "over" << endl;

	// for( ; vectoriter != ivector.end(); vectoriter ++)
	// {
		// cout << *vectoriter << " ";
	// }
	// cout << endl;
	
	// listiter = ilist.begin();
	// for( ; listiter != ilist.end(); listiter ++)
	// {
		// if(*listiter % 2 != 0)
		// {
			// ilist.erase(listiter);
		// }
	// }
	// listiter = ilist.begin();
	// for( ; listiter != ilist.end(); listiter ++)
	// {
		// cout << *listiter << " ";
	// }
	// cout << endl;
	
	// vectoriter = ivector.begin();
	// for( ; vectoriter != ivector.end(); vectoriter ++)
	// {
		// if(*vectoriter % 2 == 0)
		// {
			// ivector.erase(vectoriter);
		// }
	// }
	// vectoriter = ivector.begin();
	// for( ; vectoriter != ivector.end(); vectoriter ++)
	// {
		// cout << *vectoriter << " ";
	// }
	// cout << endl;
	// vector<int> ivector;
	
	// for(int i = 0; i < 10; i ++)
	// {
		// ivector.push_back(i);
	// }
	
	// vector<int>::iterator iter1 = ivector.begin();
	// for( ; iter1 != ivector.end(); iter1 ++)
	// {
		// cout << *iter1 << " ";
	// }
	// cout << endl;
	
	//  //vector没有pop_fornt()  ivector.pop_front();
	// ivector.pop_back();
	
	// iter1 = ivector.begin();
	// for( ; iter1 != ivector.end(); iter1 ++)
	// {
		// cout << *iter1 << " ";
	// }
	// cout << endl;
	
	// cout << "size: " << ivector.size() << endl;
	
	// ivector.clear();
	// cout << "size: " << ivector.size() << endl;

	return 0;
}