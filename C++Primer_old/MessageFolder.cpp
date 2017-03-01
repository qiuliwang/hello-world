#include <iostream>
#include <set>

class Message
{
public:
	//folders is initialized to the empty set automatically
	Message(const std::string &str = ""):contents(str) {}
	//copy control: we must manage pointers to this Message
	//from the Folders pointed to by folders
	Message(const Message&);
	Message& operator = (const Message&);
	~Message();
	//add/remove this Message form specified Folder's set of messages
	void save(Folder&);
	void remove(Folder&)
private:
	std::string contents;   //actual message text
	std::set<Folder *> folders; //Folders that havd this Message
	//Utility functions used by copy constructor, assinment, and destructor
	void put_Msg_in_Folders(const std::set<Folder *>&);
	//remove this message from every folder in folders
	void remove_Msg_from_Folders();
};

Message::Message(const Message &m):contents(m.contents), folders(m.folders)
{
	//add this Message to each Folder that points to m
	put_Msg_in_Folders(folders);
}