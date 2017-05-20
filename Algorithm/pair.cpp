/*
* Created by WangQL May 20 2017
*/

#include <iostream>
#include <string>
//using namespace std;

using namespace std;

int main()
{
    pair<int, string> pair1;
    int a = 0;
    string b = "hello pair";
    pair1 = make_pair(a, b);
    cout << pair1.first << " : " << pair1.second << endl;
    pair<int, string> pair3;
    pair3 = make_pair(a, b);
    cout << pair3.first << " : " << pair3.second << endl;

    pair<string, string> pair2("WangQL", "Jiangsu");
    cout << pair2.first << " : " << pair2.second << endl;
    return 0;
}