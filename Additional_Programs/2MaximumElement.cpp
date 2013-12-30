#include <iostream> 
using namespace std; 

void twoMax(int a[], int size); 

int main(){ 
    
    int a[5]={3,4,6,2,8}; 
    int size=5; 
    twoMax(a,size); 
    
    system("pause"); 
    return 0; 
}

void twoMax(int a[], int size){ 
    
    int max1; 
    int max2; 
    
    if(a[0]>a[1]){ 
        max1 = a[0]; 
        max2 = a[1]; 
        }
    else {
         max1=a[1]; 
         max2=a[0]; 
         }
         
    for(int i=0;i<size;i++){
            if(a[i]>max1){
               max2=max1;
               max1=a[i]; 
               }
            else if(a[i]>max2){ 
                 max2=a[i]; 
                 } 
            }
    cout << "The two largest element is: " << max1 << " and " << max2 << endl; 

} 
