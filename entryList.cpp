#include "EntryList.h"

using namespace std;

bool EntryList::insert(Entry * entryPtr){
    //linked list memes no idea what to even start with yet.
    //need a head if list empty not empty?
    //do we always inster at beginning since it doesn't take in a cursor?

    //data insertion
    string term;
    string part;
    string definition;

    //set term
    cout<<"Enter the term."<<endl;
    cin>>term;
    cout<<endl;
    entryPtr->Entry::setTerm(term);

    //set pos
    cout<<"Enter the part of speech"<<endl;
    cin>>part;
    cout<<endl;
    entryPtr->Entry::setPart(part);

    //set def
    cout<<"Enter the definition"<<endl;
    cin>>definition;
    cout<<endl;
    entryPtr->Entry::setDefinition(definition);

    return true;
}

bool EntryList::remove(const string & key){
    //do you just delink? and relink the others. delete?
    for(cursor=head;cursor!=nullptr;cursor=cursor->next){ //how to iniit cursor?
        if(cursor->term==key){
            //delink now
            //delete?
            //relink befor after/make after new head if no before
            cout<<"Term "<<key<<" has been removed."<<endl;
            return true;
        }
    }

    cout<<"This term was never inside this list."<<endl;
    return false;
}


// if you only want to know if it is in the list 
bool EntryList::find(const string & key){

    for(cursor=head;cursor!=nullptr;cursor=cursor->next){ //how to iniit cursor?
        if(cursor->term==key){
            cout<<"Term "<<key<<" is inside the list."<<endl;
            return true;
        }
    }
    cout<<"The term was not inside this list."<<endl;
    return false;
}

// if you want to get a copy of the Entry, if key found
bool EntryList::find(const string & key, Entry *retEntry){

    for(cursor=head;cursor!=nullptr;cursor=cursor->next){ //how to iniit cursor?
        if(cursor->term==key){
            //retEntry->set
            //how to access linked list entry with cursor?
            //there is a copy (=) operator overload inside entrylist.cpp
            cout<<"Term "<<key<<" is inside the list and a copy has been made."<<endl;
            return true;
        }
    }

    cout<<"The term was not inside this list."<<endl;
    return false;
}

int EntryList::size() const{
    unsigned int size=0;

    if(head==nullptr){
        //cout<<"This is an empty list."<<endl;
        return size;
    }

    for(cursor=head;cursor!=nullptr;cursor=cursor->next){ //how to iniit cursor?
        size++;
    }

    cout<<"The length is "<<size<<endl;
    return size;
}

bool EntryList::isEmpty() const{
    //if(head==nullptr){
    //cout<<"This is empty."<<endl;
    //return true;
    //}
    
    //is this what she's after?

    return false;
}

bool EntryList::operator==(const EntryList &) const{
    if(/*use the full = entry compare in entry class*/){
        return true;
    }

    return false;
}


