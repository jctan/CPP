#include "SocialSecurityNumber.h"
#include <iostream>
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

bool assertEqual(string expected, string actual) {
        return assertEqual(expected, actual, "");
}

bool TestGetSsn() {
	SocialSecurityNumber ssn("123456789");
	return assertEqual("123456789", ssn.getSsn(), "TestGetSsn");
}

bool TestFormatSsn() {
	SocialSecurityNumber ssn("123456789");
	return assertEqual("123-45-6789", ssn.formatSsn(), "TestFormatSsn");
}

bool TestSsnHasOnlyDigits() {
	SocialSecurityNumber ssn("12345678a");
	return assertEqual("000000000", ssn.getSsn(), "TestSsnHasOnlyDigits");
}

bool TestSsnHasLength9(){
	SocialSecurityNumber ssn("1234567890");
	return assertEqual("000000000", ssn.getSsn(), "TestSsnHasLength9");
}

bool TestConstructorFromInteger(){
	SocialSecurityNumber ssn(123456789);
	return assertEqual("123456789", ssn.getSsn(), "TestConstructorFromInteger");
}

bool TestConstructorFromIntegerDoesNotHave9Digits() {
	SocialSecurityNumber ssn(12345678);
	return assertEqual("000000000", ssn.getSsn(), "TestConstructorFromInteger");
}

int main() {
	bool ok = true;
	ok = ok && TestGetSsn();
	ok = ok && TestFormatSsn();
	ok = ok && TestSsnHasOnlyDigits();
	ok = ok && TestSsnHasLength9();
	ok = ok && TestConstructorFromInteger();
	ok = ok && TestConstructorFromIntegerDoesNotHave9Digits();
	if (ok) 
		cout<<"All tests passed"<<endl;
	else 
		cout<<"There were some errors"<<endl;
		
system("pause");
return 0;
}
