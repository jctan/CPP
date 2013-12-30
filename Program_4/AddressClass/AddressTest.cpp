#include "Address.h"
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

bool testFullAddress() {
	Address a("123 North Street", "1", "Brooklyn", "NY", "12345");
	return assertEqual("123 North Street, Apt. 1, Brooklyn, NY 12345", a.fullAddress());
}

int main () {
	bool ok = true;
	ok = ok && testFullAddress();

	if (ok)
                cout<<"All tests passed"<<endl;
        else
                cout<<"There were some errors"<<endl;
                
 system("pause");                
 return 0;
}
