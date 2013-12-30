#include <iostream> 
#include <string> 
using namespace std; 

//function swap of 2 variables of same type 
template <typename T>
void swap(T a[],int size){
     
     T temp;
     for(int i=0;i<size;i++){
               temp=a[4];
               a[4]=a[3];
               a[3]=temp;          
       }

       for(int i=0;i<size;i++){   
        cout << a[i] << endl;  
        }    
}
     

int main(){
    
    int a[5]={1,2,3,4,5};
    int size=5; 
    
 
    swap(a,size);
    
    cin.get();
    return 0; 
    
}
