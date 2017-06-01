// WangQL Jun 1 2017
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class ptr
{
public:
    int x;
    int y;
    //Bulk_item &operator=(const Bulk_item &cp)

};

struct PointFindByCoord : public binary_function<ptr, ptr, bool>
{
    bool operator () (const ptr &obj1, const ptr &obj2) const
    {
        return obj1.x == obj2.x && obj1.y == obj2.y;
    }
};

int main()
{
    vector<ptr> vec;
    for(int i = 0; i < 5; i ++)
    {
        ptr tmp;
        tmp.x = i;
        tmp.y = i;
        vec.push_back(tmp);
    }

    ptr needFind;
    needFind.x = 4;
    needFind.y = 4;

    ptr needFind2;
    needFind2.x = 4;
    needFind2.y = 5;

    vector<ptr>::iterator iter;
    iter = find_if(vec.begin(), vec.end(), bind2nd(PointFindByCoord(), needFind));

    if(iter == vec.end())
        cout << "not found." << endl;
    else
        cout << (*iter).x << " " << (*iter).y << endl;

    iter = find_if(vec.begin(), vec.end(), bind1st(PointFindByCoord(), needFind2));

    if(iter == vec.end())
        cout << "not found." << endl;
    else
        cout << (*iter).x << " " << (*iter).y << endl;
}