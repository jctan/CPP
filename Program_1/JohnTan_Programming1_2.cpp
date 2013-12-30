/*Name: John Tan 
Date: 2/10/13
Programming Assignment 1
#2 - Write a program that asks the user for a number n and prints out a large X of size n, like in the
example below.  Your program should verify that the number the user enters is greater or equal
to 2 and is odd.
*/

#include <iostream> 
using namespace std; 

int main()
{
    int n;
    cout << "Enter a number: " << endl; 
    cin >> n;
    while(n%2==0 || n<2){
    if(n%2==0 || n<2){
    cout << "\nThe number must be at least 2 and odd" << endl;
    cout << "\nEnter a number: " << endl; 
    }
    cin >> n;
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i==j || n-j-1==i) 
            cout << "*";
            else 
            cout << " ";
            }
            cout << endl;
        }
    
    system("pause");
    return 0;      
}
