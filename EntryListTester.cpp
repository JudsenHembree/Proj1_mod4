#include <iostream>
#include "Entry.h"
#include "EntryNode.h"
#include "EntryList.h"

int main(){

	cout << "Entry List Test program " << endl;

	/* Creaet an EntryList */
	EntryList el;

	/* Create and insert the first entry */
	Entry *ePtr = new Entry();
	string term, pos, def;

	term = "apple";
	pos = "noun.";
	def = "red fruit ";

	ePtr->setTerm(term);
	ePtr->setPart(pos);
	ePtr->setDefinition(def);

	el.insert(ePtr);
	cout << "added apple, list now contains: " << endl << el;
	cout << endl;

	/* create and insert additional entries */
	ePtr = new Entry("banana", "noun", "yellow fruit");
	el.insert(ePtr);
	cout << "added banana, list now contains: " << endl << el;
	cout << endl;
	
	ePtr = new Entry("car", "noun", "automobile ");
	el.insert(ePtr);
	cout << "added car, list now contains: " << endl << el;
	cout << endl;
	
	ePtr = new Entry("aardvark", "noun", "anteater");
	el.insert(ePtr);
	cout << "added aardvark, list now contains: " << endl << el;
	cout << endl;
	
	ePtr = new Entry("avocado", "noun", "green vegetable");
	el.insert(ePtr);
	cout << "added avocado, list now contains: " << endl << el;
	cout << endl;

	ePtr = new Entry("bubble", "noun", "clear and round ");
	el.insert(ePtr);
	cout << "added bubble, list now contains: " << endl << el;
	cout << endl;
	
	ePtr = new Entry("aaahhhh", "noun", "a screaming noise");
	el.insert(ePtr);
	cout << "added aaahhhh, list now contains: " << endl << el;
	cout << endl;
	
	ePtr = new Entry("danger", "noun", " as in stranger danger ");
	el.insert(ePtr);
	cout << "added danger, list now contains: " << endl << el;
	cout << endl;
	cout << "List el contains " << el.size() << " nodes" << endl;
	cout << endl;


	// Test the copy constructor 
	// the destructor will be called on el2 when the block ends
	{
	cout << "Making a copy " << endl;
	EntryList el2(el);
	cout << "and the copy contains : " << endl << el2;
	cout << endl;

	// tester operator==
	if (el == el2) 
		cout << "lists el and el2 are equal" << endl;
	else
		cout << "lists el and el2 are not equal" << endl;
	cout << endl;
	}

	// test operator=
	EntryList el3 = el;
	cout << "el3 contains: " << endl << el3;
	cout << endl;	

	// test the single argument find method
	if (el.find("danger")){
		cout << "EntryList el contains danger" << endl;
	}
	else{
		cout << "EntryList el does not contain danger" << endl;
	}
	cout << endl;
	
	el.remove("danger");
	cout << "removed danger, list now contains: " << endl << el;
	cout << endl;
	cout << endl;

	// test the two argument find method, which fills in the content
   // of an "empty" Entry
	Entry returnEntry;
	if (el.find("avocado", &returnEntry)){
		cout << " avocado found at: " << returnEntry << endl;
	}
	else{
		cout << " avocado not found " << endl;
	}
	cout << endl;

	// finish removing elements from the list 
	el.remove("banana");
	cout << "removed banana, list now contains: " << endl << el;
	cout << endl;
	cout << endl;
		
	el.remove("aaahhhh");
	cout << "removed aaahhhh, list now contains: " << endl << el;
	cout << endl;

	el.remove("bubble");
	cout << "removed bubble, list now contains: " << endl << el;
	cout << endl;
	
	el.remove("avocado");
	cout << "removed avocado, list now contains: " << endl << el;
	cout << endl;

	el.remove("apple");
	cout << "removed apple, list now contains: " << endl << el;
	cout << endl;
	cout << "list el is " << (el.isEmpty() ? "empty" : "not empty") << endl;
	cout << "list el now contains " << el.size() << " nodes " << endl;
	cout << endl;	

	el.remove("aardvark");
	cout << "removed aardvark, list now contains: " << endl << el;
	cout << endl;
	
	el.remove("car");
	cout << "removed car, list now contains: " << endl << el;
	cout << endl;


	return 0;

}
