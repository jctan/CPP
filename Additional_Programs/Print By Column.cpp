#include <iostream> 
using namespace std; 

void printByColumn(int a[][5]);

int main(){ 
    int a[][5] ={{13,23,33,42,53},
                 {63,86,86,94,10},
                 {11,12,13,14,15},
                 {16,17,18,19,20}}; 
    
    printByColumn(a);
    
    system("pause"); 
    return 0; 
}

void printByColumn(int a[][5]){ 
    
    for(int row=0; row<4; row++){ //prints column by column. 
     for(int col=0; col<5;col++){
         cout << a[row][col] << endl; 
         }
     }        
} 
