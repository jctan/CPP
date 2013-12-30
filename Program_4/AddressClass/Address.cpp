/*Name: John Tan 
Programing assignment 4
Address Class - Implementation (.cpp)
*/

#include <string>
#include "Address.h"

Address::Address(string street2, string apt2, string city2, string state2, string zip2)
{
  street=street2;
  Apt=apt2;
  city=city2;
  state=state2;
  zip=zip2; 
}

string Address::fullAddress()
{
      string fullAddressName;       
      fullAddressName=street + ", " + "Apt. " + Apt + ", " + city + ", " + state + " " + zip;
      return fullAddressName; 
}

string Address::getStreet()
{ 
 return street;      
}

string Address::getApt()
{
 return Apt; 
}

string Address::getCity()
{
 return city;       
}

string Address::getState()
{
 return state; 
}

string Address::getZip()
{
 return zip;       
}
