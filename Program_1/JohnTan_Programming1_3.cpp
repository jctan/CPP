/*Name: John Tan 
Date: 2/10/13
Programming Assignment 1
#3 - Write a program that calculates the greatest common divisor of 2 numbers.  Your program
should verify that both integers are greater than 0.
*/

#include <iostream> 
using namespace std; 

int gcd(int a, int b)
{
  if(a%b!=0)
    return b;
  else
  if(a%b==0)
    return gcd(b,a%b);
}

int main()
{
    int a=0;
    int b=0;
    
    while(a<=0){
    cout << "Enter the first number \n";
    cin >> a; 
    
    if(a<0){
    cout << "Cannot input negative Numbers \n";
    }
    else{
         cout << "\nYou entered: \n"; 
         cout << a << endl;
         }
    }
    
    while(b<=0){
    cout << "\nEnter the second number \n"; 
    cin >> b;
    
    if(b<0){
    cout << "Cannot input negative Numbers \n";
    }
    else{
         cout << "\nYou Entered: \n";
         cout << b << endl; 
         }
    }
    
    
    cout << "\nThe Greatest Common Divisor of " << a << " and " << b << " is " << a%b << endl;
    
    system ("pause");
    return 0;
}

