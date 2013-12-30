/*Name: John Tan 
Date: 2/24/2013
Progrmaming Assignment #3 - Write a function that takes in a 2 dimensional array of integers and returns the third largest
number. Let the number of columns of your 2 dimensional array be 5. Call this function from
the main program with 2 different arrays to show that it works.
*/

#include <iostream>
using namespace std; 

int thirdmax2D(int a[][5], int size);

int main()
{
    int a[100][5];
    int size;
    cout << "Enter the row size of the array: " << endl;
    cin >> size; 
    cout << "\nEnter the values showing 5 columns and " << size << " rows " << endl; 
    for (int row = 0; row<size; row++){
        for (int column = 0; column<5; column++){
            cin >> a[row][column];
            }
            }
            cout << "\nThe Third Highest Number is: " << thirdmax2D(a,size) << endl;
        
        system ("pause");
        return 0;
}

int thirdmax2D(int a[][5], int size)
{
    int max1;
    int max2;
    int max3;
    
    if(a[0][0] > a[0][2])
            {
            max1 = a[0][0];
            max2 = a[0][1];
            max3 = a[0][2];
            }
    else 
    {
         max1 = a[0][2];
         max2 = a[0][1];
         max3 = a[0][0];
         }
    for (int row=0; row<size; row++)
    {
        for (int column=0; column<5; column++)
        { 
        if(a[row][column] > max1)
        {
         max3=max2;
         max2=max1;
         max1=a[row][column];
         }
         else if (a[row][column] > max2)
         {
         max3=max2;
         max2=a[row][column];
         }
         else if (a[row][column]> max3)
         {
              max3=a[row][column];
         }
        }
    }
    return max3; 
}
