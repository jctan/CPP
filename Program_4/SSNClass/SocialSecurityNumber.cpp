/*Name: John Tan 
Programing assignment 4
SocialSecurityNumber Class - Implementation (.cpp)
*/

#include <string>
#include <sstream>
#include "SocialSecurityNumber.h"
using namespace std; 

SocialSecurityNumber::SocialSecurityNumber(int ssnNumber)
{   
                                                                                       
  stringstream ss; 
  ss << ssnNumber; 
  string convertedSSN=ss.str();
  ssn=convertedSSN;
  
  if(ssn.length()!=9)
  {
  ssn="000000000";
  }
  
}

SocialSecurityNumber::SocialSecurityNumber(string ssnNum)
{
   ssn=ssnNum;                                                                                                                                                                                                                          
  if(ssn.length()!=9)
  {
   ssn="000000000";
  }

  string letter;
  string a[]={"0","1","2","3","4","5","6","7","8","9"};
  int count=0;
  
  for(int i=0;i<9;i++)
  {
    letter=ssn.substr(i,1); 
   for(int j=0;j<10;j++)
   {
     count =count+(letter!=a[j]);
     }

  if(count==10)
  {
  ssn="000000000";
  }
  else
  {
  count=0;
  }

}
  
}


string SocialSecurityNumber::getSsn()
{
    return ssn;
}

string SocialSecurityNumber::formatSsn()
{

    ssn.insert(3,"-");
    ssn.insert(6,"-");
    return ssn;  
}
