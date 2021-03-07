#ifndef ENTRY_LIST_H
#define ENTRY_LIST_H
#include "Entry.h"
#include "EntryNode.h"
#include <iostream>

class EntryList{

friend ostream & operator<<(ostream& out, const EntryList & el); 

public:
	EntryList();
	EntryList(const EntryList &e);
	~EntryList();
	bool insert(Entry * entryPtr);
	bool remove(const string & key);
	bool find(const string & key);						 // if you only want to know if it is in the list 
	bool find(const string & key, Entry *retEntry); // if you want to get a copy of the Entry, if key found
	int size() const;		
	bool isEmpty() const;
	EntryList & operator=(const EntryList &);
	bool operator==(const EntryList &) const;
private:
	EntryNode * head;
};

#endif
