/*Name: John Tan 
Programing assignment 4
Name Class - Implementation (.cpp)
*/

/*Think of two more methods or constructors you could add to the class. Don't implement
them, but explain how they would be used and what the output would be.

Answer: 
        1. I would have a constructor that would have the string of the initials of first and last name of "G.R." (George Rabanca). 
           I would create a string to hold the initial of the first name and nother string hold the initial of the last name, and 
           another string to hold both first and last name initial. For example: 
                                                                                 Constructor: string Name::bothInitial();
                                                                                              string Name::getbothInitial(); 
                                                                                 
                                                                                 Implementation: 
                                                                                 string bothInitial,firstInitial,lastInitial; 
                                                                                 firstInitial = firstName.substr(0,1);
                                                                                 lastInitial = lastName.substr(0,1);
                                                                                 bothInitial=firstInital+ ". " + lastInitial + ". ";
          
       2. For the constructor firstAndLastNameOnly(), I could add the middle name by appending the string. It appends the position of index into the right place. 
          For example, firstName.append(middleName,8). 
*/

#include <string>
#include "name.h"

Name::Name(string first, string last)
{
	firstName = first;
	lastName = last;
}

Name::Name(string first, string middle, string last)
{
	firstName = first;
	middleName = middle;
	lastName = last; 
}

string Name::fullName()
{
    string fullName;
    if(middleName.empty())
    {
    fullName=firstName + " " + lastName;
    }
    else
    {
	fullName=firstName + " " + middleName + " " + lastName; 
    }
    return fullName; 
}

string Name::firstAndLastNameOnly() 
{
	string firstAndLastName; 
	firstAndLastName=firstName+ " " +lastName;
    return firstAndLastName;
}

string Name::lastNameFirst()
{
	string lastFirstName;
	if(middleName.empty())
	{
    lastFirstName = lastName + ", " + firstName; 
    }
    else
    {
    lastFirstName = lastName + ", " + firstName + " " + middleName;
    }
    return lastFirstName; 
}

string Name::withMiddleInitial()
{
       string withMiddleName,middleInitial; 
       middleInitial = middleName.substr(0,1);
       withMiddleName=firstName+ " " + middleInitial + ". " + lastName; 
       return withMiddleName;
}

string Name::getFirstName()
{
	return firstName; 
}

string Name::getMiddleName()
{
	return middleName; 
}


string Name::getLastName()
{
	return lastName;
}
