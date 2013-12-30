#include <iostream> 
using namespace std; 

int * f(int n);

int main(){ 
    
     int a[3]={1,2,3};
     int n=3; 
     int * p=f(n);
     for(int i=1; i<n; i++)
     cout << p[i];
     delete [] p; 
     cin.get();

    
    system("pause");
    return 0; 
    
} 

int * f(int n){ 
    int * p = new int[n]; 
    for(int i=0;i<n;i++)
      p[i]=i; 
      return p; 
      
}
