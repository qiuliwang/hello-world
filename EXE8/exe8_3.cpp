#include <string>
#include <iostream>
#include <fstream>
using namespace std;

istream& getAndput(istream&);

int main()
{
	ifstream myfile;
	myfile.open("test.txt");
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
		cout << "read line: " << buff << endl;
	}
	myfile.close();

	return 0;
}