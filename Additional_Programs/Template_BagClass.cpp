#include <iostream> 
#include <string> 
using namespace std; 

template<typename T> 
class Bag{ 
      public:
          Bag(); 
          bool has(T value);          
          void insert(T value);
          void remove(T value);  
              
      private:
          T a[100];
          int size; 
}; 

template<typename T>
Bag<T>::Bag()
{
 size=0;           
}

template<typename T>
bool Bag<T>::has(T value)
{
     int index; 
     for(int i=0;i<size;i++){
         if(a[i]==value){   //search for the value. 
      return true; 
      }
      else {
      return false;
      }
      }
}

template<typename T>
void Bag<T>::insert(T value)
{
   int index;  
   for(int i=size+1;i>=value;i--) 
   a[i+1]=a[i]; 
   a[index]=value; //inserting the value 

}

template<typename T>
void Bag<T>::remove(T value)
{
     int index; 
     for(int i=0;i<size;i++){
             if(a[i]==value){//search for the value.
                 index=i;
             
     cout << " Number Found: " << value << "at position: " << index << endl; 
     
     for(int i=index;i<size-1;i++){
             a[i]=a[i+1];
             }
             size--; //if value found delete it.
     cout << "The Number removed: " << value << " at position " << index << endl; 
          break; 
          }
     }
     if(index<0)
         cout << " Number is not found " << endl; 
}


int main(){
    
    Bag<int> b
    b.insert()
    b.remove()
    b.has()

    cin.get(); 
    
    return 0;
}
