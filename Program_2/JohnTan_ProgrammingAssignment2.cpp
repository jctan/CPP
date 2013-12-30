/*Name: John Tan 
Date: 2/18/2013
Programming Assignment #2
*/

#include <iostream>
using namespace std;

int binarySearch(int a[], int arraysize, int searchvalue);

int main()
{
    int array[100];
    int arraysize;
    int searchvalue;
    cout << "Enter the number of elements " << endl;
    cin >> arraysize;
    cout << "\nEnter the elements in ascending order\n";
    for(int i=0;i<arraysize;i++)
    {
        cout << "Enter element " << i+1 << ":";
        cin >> array[i];
    }
    cout << "\nEnter the number you want to compare " << endl;
    cin >> searchvalue;
    
    int found =binarySearch(array, arraysize, searchvalue);
    if(found>=0)
    {
        cout << "The number " << array[found] << " was found at the element with index " << found << endl;
    }
    else
    {
        cout << "\nThe number " << searchvalue << " is not found " << endl;
        }
    
    system("pause");
    return 0;
}

int binarySearch(int array[], int arraysize, int searchvalue)
{
    bool found=true;
    int low = 0;
    int high = arraysize - 1;
    int mid;
    
    while (high >=low)
    {
        found = false; 
        mid = (high+low)/2;
        if (searchvalue == array[mid])
        {
            return true;
        }
        else if(searchvalue > array[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
