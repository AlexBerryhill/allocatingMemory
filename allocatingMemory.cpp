/*************************************************************************
* Program:                                                                 
*    Assignment 41, Allocating Memory                                      
*    Brother Ridges, CS124                                                 
* Author:                                                                  
*    Alexander Berryhill                                                   
* Summary:                                                                 
*    This program will prompt for a number of characters for a string      
*    then allocate a string of that length.                                
*                                                                          
*                                                                          
*                                                                          
*    Estimated:  0.5 hrs                                                   
*    Actual:     0.5 hrs                                                   
*      The most difficult part was                                         
*************************************************************************/

#include <iostream>
using namespace std;

/*************************************************************************
 * getNumChar will prompt and get a number of chars                        
 ************************************************************************/
int getNumChar()
{
   int numChar;
   cout << "Number of characters: ";
   cin >> numChar;
   cin.ignore();
   if (numChar <= 0)
      cout << "Allocation failure!\n";
 return numChar;
}

/*************************************************************************
 * getText will prompt and get a string of chars                           
 ************************************************************************/
void getText(char text[], int numChar)
{
   cout << "Enter Text: ";
   cin.getline(text, numChar);
   return;
}

/*************************************************************************
 * display will display the string                                         
 ************************************************************************/
void display(char text[])
{
   cout << "Text: " << text << endl;
   return;
}

/*************************************************************************
 * main will get the numChar and allocate memory for it in a string. check
 * for an error, then get and display the text. Then delete the text.      
 ************************************************************************/
int main()
{
   int numChar = getNumChar() + 1;
   char * text = new (nothrow) char [numChar];
   if (!text)
      return 0;
      
   getText(text, numChar);
   display(text);

   delete [] text;
   text = NULL;

   return 0;
}