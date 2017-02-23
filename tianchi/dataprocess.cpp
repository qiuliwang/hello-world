#include <string>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <vector>
#include <string.h>

using namespace std;

istream& getAndput(istream&);

class vocab
{
private:
    string oneLine;
    fstream city;
    fstream class1;
    fstream class2;
    fstream class3;
    fstream shop;

    vector<string> citylise;
    vector<string> classlist1;
    vector<string> classlist2;
    vector<string> classlist3;

public:
	//fstream file("test2.txt", ofstream::out | ofstream::app);
	//file << "append";
	//file.close();
    vocab(const string &str = ""):oneLine(str) 
    {
        city.open("/Users/WangQL/Desktop/city.txt", ofstream::out | ofstream::app);
        class1.open("/Users/WangQL/Desktop/class1.txt", ofstream::out | ofstream::app);
        class2.open("/Users/WangQL/Desktop/class2.txt", ofstream::out | ofstream::app);
        class3.open("/Users/WangQL/Desktop/class3.txt", ofstream::out | ofstream::app);
        class3.open("/Users/WangQL/Desktop/shop_info.txt", ofstream::out | ofstream::app);
    }
    void setString(string one)
    {
        oneLine = one;
        cout << one << endl;
        process();
    }
    void process()
    {
// 1,湖州,885,8,4,12,2,美食,休闲茶饮,饮品/甜点
// 2,哈尔滨,64,19,,,1,超市便利店,超市,
// 3,南昌,774,5,3,2,0,美食,休闲茶饮,奶茶
// 4,天津,380,18,,,1,超市便利店,超市,
// 5,杭州,263,2,2,2,0,美食,休闲食品,生鲜水果
// 6,大连,1139,13,3,1,0,美食,烘焙糕点,面包
// 7,绍兴,145,13,3,9,2,美食,快餐,西式快餐
// 8,杭州,234,16,3,1,0,美食,休闲食品,生鲜水果
// 9,杭州,1120,15,4,0,1,超市便利店,超市,
// 10,孝感,98,10,,,0,超市便利店,超市,
        string temp = oneLine;
        int length = temp.length();
        int dotIndex = 0;
        for(int i = 0; i < length; i ++)
        {
            if(temp[i] == ',')
            {
                dotIndex ++;
            }
        }
        cout << dotIndex << endl;
        // city << oneLine + "\n";
        // class1 << oneLine + "\n";   
        // class2 << oneLine + "\n";   
        // class3 << oneLine + "\n"; 
    }

    ~vocab()
    {
        city.close();
        class1.close();
        class2.close();
        class3.close();
    }
};



int main()
{
	ifstream myfile;
	myfile.open("/Users/WangQL/Desktop/shop_info.txt");
    vocab voc;
	//myfile.close();
	char buff[1024];
	if(!myfile)
	{
		cout << "unable to open myfile";
		exit(1);
	}
	while(!myfile.eof())
	{
		myfile.getline(buff,100,'\n');
		//cout << "read line: " << buff << endl; //" and " << strlen(buff) << endl;
        //cout << "read line: " << buff << " and " << strlen(buff) << endl;
        if(strlen(buff) != 0)
            voc.setString(buff);
	}
	myfile.close();

	return 0;
}

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main()
// {
// 	ofstream outfile("test2.txt");
// 	outfile << "this is test2\nand hello again";
// 	//return 0;
// 	outfile.close();
// 	fstream file("test2.txt", ofstream::out | ofstream::app);
// 	file << "append";
// 	file.close();
// }