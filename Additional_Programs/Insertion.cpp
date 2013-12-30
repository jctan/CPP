#include <iostream> 
using namespace std; 

void insert(int a[], int size,int n, int index); 

int main(){ 
    
    int a[3]={2,5,7}; 
    int size=4;
    int n=4;
    int index=1; 
    insert(a,size,n,index); 
    
    system("pause"); 
    return 0; 
}

void insert(int a[], int size,int n, int index){
    
    for(int i=size+1; i>=n; i--)
         a[3]=a[2];
         a[2]=a[1]; 
         a[index]=n; 
         

      for(int i=0; i<size; i++)
      {
        cout << a[i] << endl;
        }
} 
