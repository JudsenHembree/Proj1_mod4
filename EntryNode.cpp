#include <string>
#include <iostream>
#include "Entry.h"
#include "EntryNode.h"

	// constructors
	EntryNode::EntryNode():next(nullptr){
		//cout << "no argument constructor " << endl;
	};

	EntryNode::EntryNode(const Entry &e):e(e), next(nullptr){
		//cout << "one argument constructor, with Entry " << endl;
	}; 

	EntryNode::EntryNode(const EntryNode &en):e(en.getEntry()), next(en.getNext()){
		//cout << "one argument constructor, with EntryNode " << endl;
	}; 

	EntryNode::EntryNode(const Entry &e2, EntryNode * next2):e(e2), next(next2){
		//cout << "two argument constructor, with Entry and next pointer " << endl;
	}; 

	// destructor -- only destroys this node
	EntryNode::~EntryNode(){
		// no dynamic allocation in constructor or other methods, so no action required here
		// list destructor will be responsible for deleting dynamically allocated nodes
		//cout << "do-nothing destructor " << endl;
	};

	// accessors 
	const Entry& EntryNode::getEntry() const{
		return e;
	};

	const string& EntryNode::getKey() const{
		return e.getTerm();
	};

	EntryNode * EntryNode::getNext() const{
		return next;
	};

	// mutators 
	void EntryNode::setEntry(const Entry &e){
		this->e = e ;
	}

	void EntryNode::setNext(EntryNode *next){
		this->next = next;
	}

	ostream & operator<<(ostream& out, const EntryNode& en){
		out << en.getEntry().getTerm() << " (" << en.getEntry().getPart() 
			 << ") " << en.getEntry().getDefinition();
		return out;
	};

