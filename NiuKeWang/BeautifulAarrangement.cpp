//
//  main.cpp
//  beautiful-arrangement
// 
//  Created by QL Wang on 4/1/17.
//  Copyright © 2017 QL Wang. All rights reserved.
//

#include <iostream>
#include <vector>
#define M 15
using namespace std;

class Solution {
public:
    int length;
    int count;
    int array[M];

    int countArrangement(int N) {
        count = 0;
        length = N;
        for(int i = 0; i < M; i ++)
        {
            array[i] = 0;
        }
        cal(array, 0);
        //cout << "count " << count << endl;
        return count;
    }

    void cal(int *vec, int index)
    {
        //cout << index << endl;
        //printArray(vec, M);
        //cout << index << " &&& " << length << endl;
        if(index == length)
        {
            //cout << "DONE!!!!" << endl;
            count ++;
        }
        else
        {
             for(int i = 0; i < length; i ++)
             {
                 int num = i + 1;
                 if(!numInVec(vec, num, index) && divNum(num, index + 1))// && divNum(num, index) numInVec(vec, num, index) && 
                 {
                      vec[index] = num;
                      cal(vec, index + 1);
                 }
             }
        }
    }

    void printArray(int *vec, int index)
    {
        int * in = vec;
        for(int i = 0; i < index; i ++, in ++)
        {
            cout << *in << " ";
        }
        cout << endl;
    }

    //if / == 0, return true, else return false
    bool divNum(int x, int y)
    {
        bool sign = false;
        if(x >= y && x % y == 0)
        {
            sign = true;
        }
        else if ( y > x && y % x == 0)
        {
            sign = true;
        }
        return sign;
    }
    
    //if num is in vec, return true, else return false
    bool numInVec(int *out, int num, int index)
    {
        bool sign = false;
        int *vec = out;
        for(int i = 0; i < index; i ++)
        {
            if(*vec == num)
                sign = true;
            else
                vec ++;
        }

        return sign;
    }
};

int main()
{
    int number = 0;
    cin >> number;
    Solution S;
    cout << S.countArrangement(number) << endl;
    
    return 0;
}
