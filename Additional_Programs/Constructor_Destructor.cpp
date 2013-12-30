#include <iostream> 
using namespace std; 

class A{ 
      public:
        A(){
            cout << "Constructing A" << endl; 
         }
        ~A(){
              cout << "Destructing A" << endl;
              }
          virtual void print(){ // virtual in parent class. 
              cout << "Printing A" << endl; 
              } 
        };
        
class B: public A{ //class B is child and Public A is parent class.
      public:
        B(){
          cout << "Constructing B" << endl; 
          }
          ~B(){
               cout << "Destructing B" << endl; 
               }
          void print(){
             cout << "Printing B" << endl; 
             }
        }; 


void f(A &a){ //if &a then virtual is at class A (PARENT CLASS)
     cout << "Coming from Function f" << endl; 
     a.print();
     }

int main (){
    A a; 
    B b; 
    a.print();
    b.print();
    f(a);
    f(b); 
    
    cin.get(); 
    return 0; 
}
