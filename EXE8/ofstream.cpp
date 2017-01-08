#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream outfile("test2.txt");
	outfile << "this is test2\nand hello again";
	//return 0;
	outfile.close();
	fstream file("test2.txt", ofstream::out | ofstream::app);
	file << "append";
	file.close();
}