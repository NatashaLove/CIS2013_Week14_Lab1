#include <iostream>
#include <cstring>
#include <string> 
using namespace std;

class ToDo {
	private: 
	string *list; // will be array - list of strings (words);
	int length =0;
	int next=0;
	string item;
	
	public:
	
	// default constructor
	ToDo ();
	//create list of length len
	ToDo (int len);
	~ToDo (); // Destroy the list
	
	void add (getline (cin, item)); // add stuff to list
	void  done (); // finish/deletes the last thing in list
	void print ();
	
	
	
};