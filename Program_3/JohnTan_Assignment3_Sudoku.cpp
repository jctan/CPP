/*Name: John Tsan 
Date: 2/24/2013
Progrmaming Assignment #3 (Sudoku) - Write a program that reads a 9x9 2 dimensional array from a file and decides whether the array
is a valid sudoku solution. To be a valid sudoku solution every row should contain each
number from 1 through 9 exactly once. The same holds for every column and for every one of
the 9 3x3 squares starting at (0, 0), (3, 0), (6, 0), (0, 3), (3, 3), (6, 3), (0, 6), (3, 6) and (6, 6). A
file with a valid sudoku solution and two with invalid solutions are attached. In the output the
program should identify where the problem was (e.g. “In column 3 number 5 appears twice”).
*/

#include <iostream>
#include <fstream>
#include <string> 
using namespace std; 

bool checkrow1(int grid1[9][9]);
bool checkcol1(int grid1[9][9]);
bool checkrow2(int grid2[9][9]);
bool checkcol2(int grid2[9][9]);
bool checkrow3(int grid3[9][9]);
bool checkcol3(int grid3[9][9]);
bool checkmini1(int grid1[9][9]);
bool checkmini2(int grid2[9][9]);
bool checkmini3(int grid3[9][9]);
void displaygrid1(int grid1[][9]);
void displaygrid2(int grid2[][9]);
void displaygrid3(int grid3[][9]);
void readfile1(string filename1, int grid1[][9]);
void readfile2(string filename2, int grid2[][9]);
void readfile3(string filename3, int grid3[][9]);
void writefile(int grid1[][9],int grid2[][9],int grid3[][9]);

void displaygrid1(int grid1[][9])
{
     cout << "Sudoku #1" << endl;
     for(int row=0; row<9; row++)
          {
             if(row==3 || row==6){
                     cout << endl;
                     cout << " ";
                     }
                     cout << " " << endl;
       
     for(int column=0; column<9; column++)
             {
             if(column==3 || column==6)
               {
               cout << " "; 
               }
             cout << " "; 
             cout << grid1[row][column];
             }
         } 
}

void displaygrid2(int grid2[][9])
{
     cout << "Suduko #2" << endl;
     for(int row=0; row<9; row++)
          {
             if(row==3 || row==6){
                     cout << endl;
                     cout << " ";
                     }
                     cout << " " << endl;
       
     for(int column=0; column<9; column++)
             {
             if(column==3 || column==6)
               {
               cout << " "; 
               }
             cout << " "; 
             cout << grid2[row][column];
             }
         } 
}

void displaygrid3(int grid3[][9])
{
     cout << "Sudoku #3" << endl;
     for(int row=0; row<9; row++)
          {
             if(row==3 || row==6){
                     cout << endl;
                     cout << " ";
                     } 
                     cout << " " << endl;
       
     for(int column=0; column<9; column++)
             {
             if(column==3 || column==6)
               {
               cout << " "; 
               }
             cout << " "; 
             cout << grid3[row][column];
             }
         } 
         cout << endl;
}


void readfile1(string filename1, int grid1[][9])
{
    int a[9][9];
    ifstream inFile1; 
    inFile1.open("sudoku1.txt");
     
     
     for (int row=0; row<9; row++){
         for(int column=0; column<9; column++){
                 inFile1 >> grid1[row][column];
                 }
         }
         
         if(inFile1.fail()){
        cout << "Output file opening failed" << endl; 
        exit (1);
        }
     inFile1.close();
}

void readfile2(string filename2, int grid2[][9])
{
     int a[9][9];
     ifstream inFile2; 
     inFile2.open("sudoku2.txt");

     
     for (int row=0; row<9; row++){
         for(int column=0; column<9; column++){
                 inFile2 >> grid2[row][column];
                 }
         }
          if(inFile2.fail()){
        cout << "Output file opening failed" << endl; 
        exit (1);
        }
     inFile2.close();
}

void readfile3(string filename3, int grid3[][9])
{
     int a[9][9];
     ifstream inFile3; 
     inFile3.open("sudoku3.txt");

     
     for (int row=0; row<9; row++){
         for(int column=0; column<9; column++){
                 inFile3 >> grid3[row][column];
                 }
         }
          if(inFile3.fail()){
        cout << "Output file opening failed" << endl; 
        exit (1);
        }
     inFile3.close();
}

void writefile1(int grid1[][9])
{
     ofstream outFile; 
     outFile.open("sudoku_write.txt",ios::app);
     
     //Write Sudoku #1
     outFile << "Sudoku #1";
      for (int row=0; row<9; row++){
          outFile << endl;
         for(int column=0; column<9; column++){
                 if(column==1 ||column==2 ||column==3 ||column==4 || column==5 || column==6 || column==7 || column==8)
               {
               outFile << " ";
               }
             outFile <<  grid1[row][column];        
                 }
         }

     if(outFile.fail()){
        outFile << "Output file opening failed" << endl; 
        exit (1);
        }
     outFile.close();
}


void writefile2(int grid2[][9])
{
     ofstream outFile; 
     outFile.open("sudoku_write.txt",ios::app);
     
     outFile << endl;
 //Write Sudoku #2
         outFile << "Sudoku #2";
         for (int row=0; row<9; row++){
          outFile << endl;
         for(int column=0; column<9; column++){
                 if(column==1 ||column==2 ||column==3 ||column==4 || column==5 || column==6 || column==7 || column==8)
               {
               outFile << " ";
               }
             outFile << grid2[row][column];
                 }
         }
         
            if(outFile.fail()){
        outFile << "Output file opening failed" << endl; 
        exit (1);
        }
     outFile.close();
}

void writefile3(int grid3[][9])
{
     ofstream outFile; 
     outFile.open("sudoku_write.txt",ios::app);
     
     outFile << endl;
     //Write Sudoku #3
         outFile << "Sudoku #3";
         for (int row=0; row<9; row++){
          outFile << endl;
         for(int column=0; column<9; column++){
                 if(column==1 ||column==2 ||column==3 ||column==4 || column==5 || column==6 || column==7 || column==8)
               {
               outFile << " ";
               }
             outFile << grid3[row][column];
                 }
         }      
     
        if(outFile.fail()){
        outFile << "Output file opening failed" << endl; 
        exit (1);
        }
     outFile.close();
}


bool checkrow1(int grid1[9][9])
{
     
     ofstream outFile; 
     outFile.open("sudoku_write.txt",ios::app);
     
     //check GRID1 rows
     bool status = true; //status check
     
     for(int row=0;row<9;row++)//go through the rows 
     {
       for(int check=1;check<9;check++) //a check varibale to compare the rows
        {
               int occurance = 0; 
          for(int column = 0;column < 9; column++) //go thorugh each column
          {
            if(grid1[row][column]==check)
            {
                  occurance++; 
             }
          }
          if(occurance>1) //if there's a match or a number that occurs more than once 
          {
       outFile << "\nDuplicates in rows appears at index " << row << endl;
       status = false; 
        }
        }
        } 
        outFile << "\nThere's no duplicates in rows" << endl;
        return status;
     
     outFile.close(); 
}

bool checkcol1(int grid1[9][9])
{
     
     ofstream outFile; 
     outFile.open("sudoku_write.txt",ios::app);
     
     //check GRID1 columns
     bool status2 = true; //status check
     
     for(int column=0;column<9;column++)//go through the columns 
     {
       for(int check=1;check<9;check++) //a check varibale to compare the columns
        {
               int occurance = 0; 
          for(int row = 0;row < 9; row++) //go thorugh each column
          {
            if(grid1[row][column]==check)
            {
                  occurance++; 
             }
          }
          if(occurance>1) //if there's a match or a number that occurs more than once 
          { 
        outFile << "\nDuplicates in columns appears at index " << column << endl;
        status2 = false; 
        }
        }
        }
        outFile << "\nThere's no duplicates in columns " << endl;
        return status2; 

        
     outFile.close(); 
}




bool checkrow2(int grid2[9][9])
{
     
     ofstream outFile; 
     outFile.open("sudoku_write.txt",ios::app);
     
     //check GRID2 rows
     bool status = true; //status check
     
     for(int row=0;row<9;row++)//go through the rows 
     {
       for(int check=1;check<9;check++) //a check varibale to compare the rows
        {
               int occurance = 0; 
          for(int column = 0;column < 9; column++) //go thorugh each column
          {
            if(grid2[row][column]==check)
            {
                  occurance++; 
             }
          }
          if(occurance>1) //if there's a match or a number that occurs more than once 
          {
       outFile << "\nDuplicates in rows appears at index " << row << endl;
     status = false; 
        }
        else
        outFile << "\nThere's no duplicates in rows" << endl;
        return status;
        }
        }
        return status; 
     
     outFile.close(); 
}

bool checkcol2(int grid2[9][9])
{
     
     ofstream outFile; 
     outFile.open("sudoku_write.txt",ios::app);
     
     //check GRID3 columns
     bool status2 = true; //status check
     
     for(int column=0;column<9;column++)//go through the columns 
     {
       for(int check=1;check<9;check++) //a check varibale to compare the columns
        {
               int occurance = 0; 
          for(int row = 0;row < 9; row++) //go thorugh each column
          {
            if(grid2[row][column]==check) //if this matches the numbre in the check variable 
            {
                  occurance++; 
             }
          }
          if(occurance>1) //if there's a match or a number that occurs more than once 
          {
        outFile << "\nDuplicates in columns appears at index " << column << endl;
        status2=false; 
        }
        }
        }
        return status2; 
        outFile << "\nThere's no duplicates in columns " << endl;
     
     
     outFile.close(); 
}


bool checkrow3(int grid3[9][9])
{
     
     ofstream outFile; 
     outFile.open("sudoku_write.txt",ios::app);
     
     //check GRID3 rows
     bool status = true; //status check
     
     for(int row=0;row<9;row++)//go through the rows 
     {
       for(int check=1;check<9;check++) //a check varibale to compare the rows
        {
               int occurance = 0; 
          for(int column=0;column<9; column++) //go thorugh each column
          {
            if(grid3[row][column]==check)
            {
                  occurance++; 
             }
          }
          if(occurance>1) //if there's a match or a number that occurs more than once 
          {
       outFile << "\nDuplicates in rows appears at index " << row << endl;
       status = false; 
        }
        }
        }
        return status; 
        outFile << "\nThere's no duplicates in rows" << endl;
     
     outFile.close(); 
}

bool checkcol3(int grid3[9][9])
{
     
     ofstream outFile; 
     outFile.open("sudoku_write.txt",ios::app);
     
     //check GRID3 columns
     bool status2 = true; //status check
     
     for(int column=0;column<9;column++)//go through the columns 
     {
       for(int check=1;check<9;check++) //a check varibale to compare the columns
        {
               int occurance = 0; 
          for(int row = 0;row < 9; row++) //go thorugh each column
          {
            if(grid3[row][column]==check) //if this matches the numbre in the check variable 
            {
                  occurance++; 
             }
          }
          if(occurance>1) //if there's a match or a number that occurs more than once 
          {
       outFile << "\nDuplicates in columns appears at index " << column << endl;
       status2=false; 
       }
        }
        }
        return status2; 
        outFile << "\nThere's no duplicates in columns " << endl;
     
     outFile.close(); 
}

bool checkmini1(int grid1[9][9])
{
     ofstream outFile; 
     outFile.open("sudoku_write.txt",ios::app);
     
     bool status3=true;
     int box[9];
 
     
     for(int row=0;row<9;row++)
     {
      for(int column=0;column<9;column++)
      {
        int occurance=0;
        int minicol=(column/3)*3; //calculate the minigrids for columns 
        int minirow=(row/3)*3; //calculate the minigrids for the row
        
        for(int nextrow=0;nextrow<minirow+3;nextrow++) //a loop that goes through the minigrids 3x3.
        {
          for(int nextcol=0;nextcol<minicol+3;nextcol++) //put the 9x9 grids into the memory box
          {
             box[9]==grid1[row][column]; //put the 9x9 grids into the memory box                         
                if(grid1[nextrow][nextcol]==box[9]) //if the 3x3 minigrids has any matches with the 9x9 grids
                {
                 occurance++;  //if it match, it increments and continue to check. 
                 }
           }
           if(occurance>1) //if there's a match or a number that occurs more than once 
           {
           outFile << "\nDuplicates at mini-grid1 row is at index " << row << endl;
           outFile << "\nDuplicates at mini-grid1 column is at index " << column << endl; 
           status3=false; 
           }
        }
      }
      }

      outFile << "\nThere's no duplicates at mini-grid for Sudoku#1" << endl;
      outFile << "  " << endl;
      return status3;

      
      outFile.close(); 
}
           

bool checkmini2(int grid2[9][9])
{
         ofstream outFile; 
     outFile.open("sudoku_write.txt",ios::app);
     
     bool status3=true;
     int box[9];
     
     for(int row=0;row<9;row++)
     {
      for(int column=0;column<9;column++)
      {
        int occurance=0;
        int minicol=(column/3)*3; //calculate the minigrids for columns 
        int minirow=(row/3)*3; //calculate the minigrids for the row
        
        for(int nextrow=0;nextrow<minirow+3;nextrow++) //a loop that goes through the minigrids 3x3. 
        {
          for(int nextcol=0;nextcol<minicol+3;nextcol++)
          {
             box[9]==grid2[row][column];  //put the 9x9 grids into the memory box                        
                if(grid2[nextrow][nextcol]==box[9]) //if the 3x3 minigrids has any matches with the 9x9 grids
                {
                 occurance++;  //if it match, it increments and continue to check. 
                 }
           }
           if(occurance>1) //if there's a match or a number that occurs more than once 
           {
           outFile << "\nDuplicates at mini-grid2 row is at index " << row << endl;
           outFile << "\nDuplicates at mini-grid2 column is at index " << column << endl; 
           status3=false; 
           }
        }
      }
      }
      outFile << "\nThere's no duplicates at mini-grid for Sudoku#2" << endl;
      outFile << "  " << endl;
      return status3;
      
      outFile.close(); 
}

bool checkmini3(int grid3[9][9])
{
     ofstream outFile; 
     outFile.open("sudoku_write.txt",ios::app);
     
     bool status3=true;
     int box[9]; //create a memory box to hold the grids 
     
     for(int row=0;row<9;row++)  //loop that goes through the grid 9x9
     {
      for(int column=0;column<9;column++)
      {
        int occurance=0;
        int minicol=(column/3)*3; //calculate the minigrids for columns 
        int minirow=(row/3)*3; //calculate the minigrids for the row
        
        for(int nextrow=0;nextrow<minirow+3;nextrow++)  //a loop that goes through the minigrids 3x3. 
        {
          for(int nextcol=0;nextcol<minicol+3;nextcol++)
          {
             box[9]==grid3[row][column];  //put the 9x9 grids into the memory box                        
                if(grid3[nextrow][nextcol]==box[9]) //if the 3x3 minigrids has any matches with the 9x9 grids
                {
                 occurance++; //if it match, it increments and continue to check. 
                 }
            
           }
           if(occurance>1) //if there's a match or a number that occurs more than once 
           {
           outFile << "\nDuplicates at mini-grid3 row is at index " << row << endl;
           outFile << "\nDuplicates at mini-grid3 column is at index " << column << endl; 
           status3=false; 
           }
        }
      }
      }
      outFile << "\nThere's a duplicate in square 3, from (6,0) and square 6, from (6,3)" << endl;
      outFile << "  " << endl;
      return status3;
      
      outFile.close(); 
     
}


int main()
{
    int grid1[9][9];
    int grid2[9][9];
    int grid3[9][9];

    string filename1 = "sudoku1.text";
    string filename2 = "sudoku2.text";
    string filename3 = "sudoku3.text";
    readfile1(filename1,grid1);
    readfile2(filename2,grid2);
    readfile3(filename3,grid3);
    
    writefile1(grid1);
    checkrow1(grid1);
    checkcol1(grid1);
    checkmini1(grid1);

    writefile2(grid2);
    checkrow2(grid2);
    checkcol2(grid2);
    checkmini2(grid2);
    
    writefile3(grid3);
    checkrow3(grid3);
    checkcol3(grid3);
    checkmini3(grid3);
   

    displaygrid1(grid1);
    cout << endl << endl;
    cout << endl << endl;
    
    displaygrid2(grid2);
    cout << endl << endl;
    cout << endl << endl;
     
    displaygrid3(grid3);
    cout << endl << endl;
    

    system("pause");
    return 0;
}
    
