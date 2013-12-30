/*Name: John Tan 
Programing assignment 4
SocialSecurityNumber Class - Header (.h)
*/

#ifndef ssn_H
#define ssn_H
#include <string> 
using namespace std; 

class SocialSecurityNumber
{
      public:
          SocialSecurityNumber(int); 
          SocialSecurityNumber(string); 
          string getSsn();
          string formatSsn();
      private: 
          string ssn; 
};

#endif
