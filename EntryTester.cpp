#include <iostream>
#include "Entry.h"


int main(){

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

	// test operator==
	cout << "Does the Entry class  == operator consider c and d the same?" << endl;
	if (c == d)
		cout << "Yes, it does." << endl;
	else
		cout << "No, it does not." << endl;
	cout << endl;


	// test the copy constructor
	Entry e(a);
	cout << "e is " <<  e << endl;

	// compare all fields using the fullCompare method
	if (e.fullCompare(a) )
		cout << "all fields of a and e are equal" << endl;
	else
		cout << "not all fields of a and e are equal" << endl;
	cout << endl;

	if (e.fullCompare(d) )
		cout << "all fields of e and d are equal" << endl;
	else
		cout << "not all fields of e and d are equal" << endl;
	cout << endl;

	// test remaining relational operators

	//operator<
	if (b < c) 
		cout << b.getTerm() << " is less than " << c.getTerm() << endl;
	else
		cout << b.getTerm() << " is not less than " << c.getTerm() << endl;

	//operator<=
	if (b <= c) 
		cout << b.getTerm() << " is less than or equal to " << c.getTerm() << endl;
	else
		cout << b.getTerm() << " is not less than or equal to " << c.getTerm() << endl;

	//operator>
	if (b > c) 
		cout << b.getTerm() << " is greater than " << c.getTerm() << endl;
	else
		cout << b.getTerm() << " is not greater than " << c.getTerm() << endl;

	//operator>=
	if (b >= c) 
		cout << b.getTerm() << " is greater than or equal to " << c.getTerm() << endl;
	else
		cout << b.getTerm() << " is not greater than or equal to " << c.getTerm() << endl;

	

}




