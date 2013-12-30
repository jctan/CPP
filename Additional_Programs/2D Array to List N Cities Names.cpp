/* Name: John Tan
   Date: 12/4/2012
*/

#include <iostream>
using namespace std; 

int main()
{
     int num;
     cout << "How many cities do you want to enter?" << endl; 
     cin >> num; //a variable that was declared to enter the amount of cities you want 
     char cities[num][50]; //declared a 2 dimensional array with columns = 50 and row is set by user. You can enter any n cities' in rows, and maximum number of columns is 50. 
     
     cout << "\nPlease enter the names of the " << num << " cities: " << endl;
     for(int i = 0; i <= num; i++)
     {
     cin.getline(cities[i],100); //it went to get the cities you input that was stored in the memory location of cities[num] and it loops the user input and place it into array.
     }
     
     cout << "\nYou entered " << num << " cities: "; 
        for (int i = 1; i < num; i++) //start the loop with 1 instead of 0 because it has an emepty cell when it start at 0 so the empty cell will replace with ,
         {
          cout << cities[i] << ", "; //output the list of cities you entered previously 
          }

     cout << "and " << cities[num] << "."; 
     cout << endl << endl;
    
    system("pause");
    return 0;  
}
