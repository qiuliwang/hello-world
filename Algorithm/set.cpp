/*
copy
http://www.cnblogs.com/omelet/p/6627667.html

WangQL May 21 2017
*/
#include<set>
#include<iostream>
using namespace std;
int main()
{
    int i;
    int arr[5] = {0,3,3,3,2};
    set<int> iset(arr,arr+5);

    iset.insert(5);
    //iset.insert(3);
    cout<<"size:"<<iset.size()<<endl;
    cout<<"3 count = "<<iset.count(3)<<endl;
    iset.erase(1);

    set<int>::iterator ite1 = iset.begin();
    set<int>::iterator ite2 = iset.end();
    for(;ite1!=ite2;ite1++)
    {
        cout<<*ite1;
    }
    cout<<endl;

    ite1 = iset.find(3);
    if(ite1!=iset.end())
        cout<<"3 found"<<endl;

    ite1 = iset.find(1);
    if(ite1!=iset.end())
        cout<<"1 not found"<<endl;
}