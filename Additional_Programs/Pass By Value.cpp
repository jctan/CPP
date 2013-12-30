#include <iostream> 
using namespace std; 

void secret (int n, int m){
     
if (m == 0) 
return;
secret(n/10, m-1);
cout << n%10;
}


int main() {
int n = 54321;
int m = 3;
secret(n, m);

system("pause");
return 0; 
}




