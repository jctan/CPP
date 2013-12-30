#include <iostream> 
using namespace std; 

int fib(int n); 

int main(){ 
    
    for(int n=0;n<10;n++){
    cout << fib(n) << endl; 
    } 
    
    system("pause"); 
    return 0; 
}

int fib(int n){
    
    if(n<=2){
    return 1;
    } 
    else
    {
    return fib(n-1)+fib(n-2); 
    }
} 
