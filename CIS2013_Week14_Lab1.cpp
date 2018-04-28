#include <iostream>
#include <cstring>
#include <string> 
#include "ToDo.h" // look for the file here (custom file header)

using namespace std;

int main () {
	char next = 'y';
	int len =0;
	string action;
	
	cout << "How long do you want your list: ";
	cin >> len;
	
	ToDo list (len);
	ToDo manylists [10];
	
	while (next != 'x') {
		
		cout << "Add to list (a) " << endl;
		cout << "Done list item (d) " << endl;
		cout << "Print list (p) " << endl;
		cout << "Exit list (x) " << endl;
		cout << "What do you want to do: " << endl;
		cin >> next;
		
		switch (next) {
			
			case 'a':
			cout << "Name a todo item: ";
			getline (cin, action);
			list.add (action);
			// add stuff to list;
			break;
			
			case 'd': 
			list.done ();
			// finish something in list;
			break;
			
			case 'p' :
			list.print ();
			// print list;
			break;
			
			case 'x' :
			// All done;
			break;
		}
		
		
		
		
	}
	
	
	
	
	
	return 0;
}