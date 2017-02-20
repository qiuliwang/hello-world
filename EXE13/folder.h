#ifndef FOLDER_H
#define FOLDER_H

#include "message.h"
class Message;

class Folder
{
public:
	Folder(const string &str = ""):folderName(str) {}
private:
	set<Message*> messages; 
	string folderName;
	
	void addMsg(Message&);
	void remMsg(Message&);
};

#endif