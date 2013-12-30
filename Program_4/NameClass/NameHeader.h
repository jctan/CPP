/*Name: John Tan 
Programing assignment 4
Name Class - Header (.h)
*/

#ifndef Name_H
#define Name_H
#include <string>
using namespace std; 

class Name
{
public: 
    Name(string first, string last); 
	Name(string first, string middle, string last); 
	string fullName(); 
	string lastNameFirst();
	string firstAndLastNameOnly(); 
	string withMiddleInitial(); 
	string getFirstName();
	string getLastName(); 
	string getMiddleName(); 

private:
	string firstName;
	string lastName;
	string middleName; 
}; 

#endif
