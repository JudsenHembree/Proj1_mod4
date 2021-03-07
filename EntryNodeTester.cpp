#include <iostream>
#include "Entry.h"
#include "EntryNode.h"


int main(){
	
	cout << "First, the entries: " << endl;

	// test the no argument constructor and the setter methods
	Entry a;
	a.setTerm("apple");
	a.setPart("noun");
	a.setDefinition("edible red fruit");
	cout << "a is " << a << endl;

	// test the 3 argument constructor and 
	// create a few Entry variables to compare
	Entry b("banana","noun", "edible yellow fruit");
	cout << "b is " << b << endl;

	Entry c("carrot","noun", "edible orange vegetable");
	cout << "c is " << c << endl;

	Entry d("carrot","noun", "enticement, as opposed to a stick ");
	cout << "d is " << d << endl;

	Entry *ePtr = new Entry{"eggplant","noun", "purple vegetable with seeds"};
	cout << "e is " << *ePtr << endl;
	cout << endl;

	EntryNode aNode;
	aNode.setEntry(a);

	EntryNode cNode(c, nullptr);

	EntryNode bNode(b, &cNode);

	EntryNode dNode(c);
	EntryNode *eNodePtr = new EntryNode{*ePtr, nullptr};
	EntryNode fNode(dNode);
	fNode.setNext(nullptr);
	
	cout << "Now, the nodes: " << endl;

	cout << "aNode has " << aNode.getEntry()  
		  << " and points to " << aNode.getNext() << endl;

	cout << "bNode has " << bNode.getEntry() 
		  << " and points to " << bNode.getNext() << endl;

	cout << "cNode has " << cNode.getEntry() 
		  << " and points to " << cNode.getNext() << endl;

	cout << "dNode has " << dNode.getEntry() 
		  << " and points to " << dNode.getNext() << endl;

	cout << "eNodePtr points to " << eNodePtr->getEntry() 
		  << " and points to " << eNodePtr->getNext() << endl;

	cout << "fNode has " << fNode.getEntry() 
		  << " and points to " << fNode.getNext() << endl;

	cout << endl;

	EntryNode *head = &aNode;
	EntryNode *cursor = head;
	aNode.setNext(&bNode);
	bNode.setNext(&cNode);
	cNode.setNext(&dNode);
	dNode.setNext(eNodePtr);
	eNodePtr->setNext(&fNode);

	int counter = 0;

	cout << "And now the linked list of nodes: " << endl;
	while (cursor != nullptr){
		cout << "node " << counter << ": " << cursor->getKey();
		cout << endl;
		cursor = cursor->getNext();
		counter++;
	}

}




