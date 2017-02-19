#include <iostream>
#include <string>
#include <set>

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
	std::set<Folder*>;     //Folders that have this Message
	//Utility functions used by copy constructor, assignment, and destructor;
	//Add this Message to the Folders that point to the parameter
	void put_Msg_in_Folders(const std::set<Folders*>&);
	//remove this Message from every Folder in folders
	void remove_Msg_from_Folders();
};

Message::Message(const Message &m):contents(m.contents), folders(m.folders)
{
	//add this Message to each Folder that points to m;
	put_Msg_in_Folders(folders);
}

//add this Message to Folders that point to rhs
void Message::put_Msg_in_Folders(const set<Folder*> &rhs)
{
	for(std::set<Folders*>::const_iterator beg = rhs.begin(); 
		beg != rhs.end(); ++ beg)
		{
			(*beg) -> addMsg(this); //*beg points to a Folder
		}
}