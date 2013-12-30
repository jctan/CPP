#include <iostream> 
using namespace std; 

void mystery(int &a, int b){
b--;
cout << a << b; //a is 5 here 
a--; //when it decrement its by 1 so - 1,4
}

int main() {
int a = 5;
int b = 3;
mystery(a, b-1); //b don't use this when it's not pass by reference
cout << a << b; 

//a=5,1,4
//b=3

system("pause");
return 0; 
}





