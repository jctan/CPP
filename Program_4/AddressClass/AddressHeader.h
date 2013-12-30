/*Name: John Tan 
Programing assignment 4
Address Class - Header (.h)
*/

#ifndef Address_H
#define Address_H
#include <string>
using namespace std; 

class Address 
{
      public:
             Address(string street2, string apt2, string city2, string state2, string zip2);
             string fullAddress();
             string getStreet();
             string getApt();
             string getCity(); 
             string getState();
             string getZip();
      
      private: 
             string street; 
             string Apt;
             string city;
             string state;
             string zip;
};

#endif
