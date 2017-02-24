#include <iostream>

template <class Type> class Queue
{
public:
    Queue();  //default constructor
    Type &front();   //return element from head of Queue
    const Type &front () const;
    void push(const Type &);  //add element to back of Queue
    void pop();   //remove element from head of Queue
    bool empty() const; //true if no elements in the Queue
private:
    
};