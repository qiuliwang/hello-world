#ifndef MESSAGE_H
#define MESSAGE_H

#include <iostream>
#include <string>
#include <set>
#include "folder.h"

class Folder;

class Message
{
public:
	//folders is initialized to the empty set automatically
	Message(const std::string &str = ""):contents(str) {}
	//copy control: we must manage pointers to this Message
	//from the Folders pointed to by folders
	Message(const Message&);
	Message& operator=(const Message&);
	~Message();
	//add/remove this Message from specified Folder's set of message
	void save(Folder&);
	void remove(Folder&);
private:
	std::string contents;  //actual message text
	std::set<Folder*> folders;     //Folders that have this Message
	//Utility functions used by copy constructor, assignment, and destructor;
	//Add this Message to the Folders that point to the parameter
	void put_Msg_in_Folders(const std::set<Folder*>&);
	//remove this Message from every Folder in folders
	void remove_Msg_from_Folders();
	//Add/remove Folder to folders
	void addFldr(Folder&);
	void remFldr(Folder&);
};

Message::Message(const Message &m):contents(m.contents), folders(m.folders)
{
	//add this Message to each Folder that points to m;
	put_Msg_in_Folders(folders);
}

//add this Message to Folders that point to rhs
void Message::put_Msg_in_Folders(const std::set<Folder*> &rhs)
{
	for(std::set<Folder*>::const_iterator beg = rhs.begin(); 
		beg != rhs.end(); ++ beg)
		{
			(*beg) -> addMsg(this); //*beg points to a Folder
		}
}

Message& Message::operator=(const Message &rhs)
{
	if(&rhs != this)
	{
		remove_Msg_from_Folders(); //update existing Folders
		contents = rhs.contents; //copy contents form rhs
		folders = rhs.folders; //copy Folder pointers from rhs
		//add this Message to each Folder in rhs
		put_Msg_in_Folders(rhs.folders);
	}
	return *this;
}

//remove this Message from corresponding Folders
void Message::remove_Msg_from_Folders()
{
	//remove this message from corresponding Folders
	for(std::set<Folder*>::const_iterator beg = folders.begin();
		beg != folders.end(); ++ beg)
		{
			(*beg)->remMsg(this); //*beg points to a Folder
		}
}

Message::~Message()
{
	remove_Msg_from_Folders();
}

//add/remove this Message from specified Folder's set of message
void Message::save(Folder &rhs)
{
	//folders.insert(&rhs);
}
void Message::remove(Folder &rhs)
{
	//folders.remove(&rhs);
}

//Add/remove Folder to folders
void Message::addFldr(Folder&);
void Message::remFldr(Folder&);

#endif