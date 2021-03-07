#ifndef ENTRY_NODE_H
#define ENTRY_NODE_H
#include <string>
#include <iostream>
#include "Entry.h"

using namespace std;

class EntryNode{

friend ostream & operator<<(ostream& out, const EntryNode& en);

public:
	// constructors
	EntryNode();
	explicit EntryNode(const Entry &e);
	explicit EntryNode(const EntryNode &en);
	EntryNode(const Entry &e, EntryNode * next); 

	// destructor
	~EntryNode();

	// accessors 
	const string& getKey() const;
	const Entry& getEntry() const;
	EntryNode * getNext() const;

	// mutators 
	void setEntry(const Entry &e);
	void setNext(EntryNode *n);

private:
	Entry e;
	EntryNode *next;
};


#endif
