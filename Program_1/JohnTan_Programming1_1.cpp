/*Name: John Tan 
Date: 2/10/13
Programming Assignment 1
#1 - Write a program that asks the user for a number n and prints out a triangle of size n, like in the
example below.  Your program should verify that the number the user enters is greater or equal
to 2.
*/

#include <iostream> 
using namespace std; 

int main()
{
    int n;
    cout << "Enter a number: " << endl; 
    cin >> n;
    while(n<2){
    if (n<2){
    cout << "The number must be at least 2 " << endl; 
    cout << endl;
    cout << "Enter a number: " << endl; 
    }
    cin >> n;
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 1; j <= n; j++){
            if (j<=i) 
            cout << " ";
            else 
            cout << "*";
            }
            cout << endl;
        }
    
    system("pause");
    return 0;      
}
