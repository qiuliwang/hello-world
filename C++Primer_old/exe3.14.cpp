#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<string> file;

	string fileContent;
	cout << "Enter the English file:\n";
	getline(cin, fileContent);
	int head = 0;

	for(int i = 0; i < fileContent.size(); i ++)
	{
		if(fileContent[i] == ' ')
		{
			string temp = fileContent.substr(head, i);
			cout << temp << " " << head << " " << i << endl;

			for(int j = 0; j < temp.size(); j++)
			{
				temp [j] = toupper(temp[j]);
			}

			file.push_back(temp);
			head = i + 1;
		}
    }
   	file.push_back(fileContent.substr(head, fileContent.size()));

    cout << endl;

	return 0;
}