#include<iostream>
#include<string>
#include "name.h"
using namespace std;

bool assertEqual(string expected, string actual, string message){
	if (expected != actual){
		cout<<"Test failed "<<message<<endl;
		cout<<"Expected "<<expected<<endl;
		cout<<"Got "<<actual<<endl;
		return false;
	}
	return true;
}

bool assertEqual(string expected, string actual){
	return assertEqual(expected, actual, "");
}

bool TestFullName() {
	Name name("George", "Octavian", "Rabanca");
	return assertEqual("George Octavian Rabanca", name.fullName());	
}

bool TestFirstAndLastNameOnly() {
	Name name("George", "Octavian", "Rabanca");
	return assertEqual("George Rabanca", name.firstAndLastNameOnly());	
}

bool TestLastNameFirst() {
	Name name("George", "Octavian", "Rabanca");
	return assertEqual("Rabanca, George Octavian", name.lastNameFirst());	
}

bool TestWithMiddleInitial() {
	Name name("George", "Octavian", "Rabanca");
	return assertEqual("George O. Rabanca", name.withMiddleInitial());	
}

int main() {
	bool ok = true;
	ok = ok && TestFullName();
	ok = ok && TestFirstAndLastNameOnly();
	ok = ok && TestLastNameFirst();
	ok = ok && TestWithMiddleInitial();
	if (ok)
		cout<<"All tests passed succesfully"<<endl;
	else 
		cout<<"Some tests failed"<<endl;
		
	system("pause");	
	return 0;
}
