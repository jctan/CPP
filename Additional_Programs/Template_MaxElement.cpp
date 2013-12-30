#include <iostream> 
#include <string> 
using namespace std; 

template <typename T>
void twoMax(T a[],int size)
{
   T max;
   
   if(a[0]>a[1]){
      max=a[0];
      }
   else
   {
       max=a[1];
       }
       
   for(int i=0;i<size;i++){
           if(a[i]>max){
              max=a[i];
              }
           }
           cout << "The maximum element in an array is: " << max << endl; 
}

int main(){
    
    int a[]={4,10,13,2,1};
    int size=5; 
    
    twoMax(a,size); 
        
    system("pause");
    return 0; 
       
}
             
