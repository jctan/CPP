#include <iostream> 
using namespace std; 

bool isPrime(int p, int i)
{
     if(i==p) 
     return 1; 
     if(p%i==0)
     return 0; 
     return isPrime(p,i+1);
     }

int main() {

int i=2;
int p=5;
cout << isPrime(p,i) << endl; 

system("pause");
return 0; 
}

