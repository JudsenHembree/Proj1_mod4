#ifndef ENTRY_H
#define ENTRY_H
#include <string>
#include <iostream>

using namespace std;

class Entry{

friend ostream & operator<<(ostream& out, Entry* e);
friend ostream & operator<<(ostream& out, const Entry& e);

public:
	// constructors
	Entry();
	Entry(const string &term, const string & partOfSpeech, const string & definition);

	// destructor
	~Entry();

	// accessors 
	const string& getTerm() const;
	const string& getPart() const;
	const string& getDefinition() const;

	// mutators 
	void setTerm(const string &term);
	void setPart(const string &part);
	void setDefinition(const string &definition);

	// assignment operator should copy all elements of the entry
	const Entry & operator=(const Entry& e);

	// relational operators (specialized to consider only the "term" portion of the entry)
	bool operator==(const Entry& e) const;
	bool operator<(const Entry& e) const;
	bool operator<=(const Entry& e) const;
	bool operator>(const Entry& e) const;
	bool operator>=(const Entry& e) const;

	// a comparison operator that considers all fields, not just the term
	bool fullCompare(const Entry& e) const;

private:
	string term;
	string partOfSpeech;
	string definition;
};


#endif
