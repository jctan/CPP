#include <iostream> 
#include "Rational.h"
using namespace std; 

int main(){ 
    Rational r1(4,2);
    Ratioanl r2(2,3); 
    

cout << r1.toString() << " + " << r2.toString << " = " << r1.add(r2).toString() << endl; 
cout << r1.toString() << " - " << r2.toString << " = " << r1.subtract(r2).toString() << endl; 
cout << r1.toString() << " * " << r2.toString << " = " << r1.multiply(r2).toString() << endl; 
cout << r1.toString() << " / " << r2.toString << " = " << r1.divide(r2).toString() << endl; 

//Test intValue and double
cout << "r2.intValue() " << " is " << r2.intvalue() << endl; 
cout << "r2.doubleValue() " << " is " << r2.doublevalue() << endl; 

//Test compareTo and equal 
cout << "r1.compareTo(r2) is "<< r1.compareTo(r2) << endl;
cout << "r2.compareTo(r1) is "<< r2.compareTo(r1) << endl;
cout << "r1.compareTo(r1) is "<< r1.compareTo(r1) << endl;
cout << "r1.equals(r1) is "<< (r1.equals(r1) ? "ture" : "false") << endl;
cout << "r1.equals(r2) is "<< (r1.equals(r2) ? "ture" : "false") << endl;

system("pause");
return 0; 
}
