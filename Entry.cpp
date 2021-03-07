#include <string>
#include "Entry.h"

Entry::Entry(){};

Entry::Entry(const string &term, const string & partOfSpeech, const string & definition):
term(term), partOfSpeech(partOfSpeech), definition(definition) { };

Entry::~Entry(){ };

void Entry::setTerm(const string & term){
	this->term = term;
};

void Entry::setPart(const string & part){
	this->partOfSpeech = part;
};

void Entry::setDefinition(const string & definition){
	this->definition = definition;
};

const string & Entry::getTerm() const{
	return term;
};

const string & Entry::getPart() const{
	return partOfSpeech;
};

const string & Entry::getDefinition() const{
	return definition;
};

// should perform full copy of the Entry
const Entry & Entry::operator=(const Entry& e) {
	this->term = e.term;
	this->partOfSpeech = e.partOfSpeech;
	this->definition = e.definition;
	return *this;
};

// relational operators (specialized to consider only the "term" portion of the entry)
bool Entry::operator==(const Entry& e) const{
	return this->term == e.getTerm();
};

bool Entry::operator<(const Entry& e) const{
	return this->term < e.term;
};

bool Entry::operator<=(const Entry& e) const{
	return this->term <= e.term;
};

bool Entry::operator>(const Entry& e) const{
	return this->term > e.term;
};

bool Entry::operator>=(const Entry& e) const{
	return this->term >= e.term;
};

bool Entry::fullCompare(const Entry& e) const{
	if ((this->term == e.term) && (this->partOfSpeech == e.partOfSpeech) 
		&& (this->definition == e.definition))
		return true;
	else 
		return false;
}

ostream & operator<<(ostream& out, Entry* e){
	out << e->getTerm() << " (" << e->getPart() << ") " << e->getDefinition();
	return out;
};

ostream & operator<<(ostream& out, const Entry& e){
	out << e.getTerm() << " (" << e.getPart() << ") " << e.getDefinition();
	return out;
};

