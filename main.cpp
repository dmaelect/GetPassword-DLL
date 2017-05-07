 /*
 Date:	05/01/17
 Description: example program how to use and implement the GetPassword.dll
 	      It will display " * " as you tpe and it stores the actual chars into the array
 Source: Daryl Newell DMA Electronics
 */

#include <stdio.h>
#include <conio.h>	// for clrscr() function

//-- Function declaration
//-- accepts a char arrray "char myArray[size], int size" int size is the max size you want the array to be. The function will not
//-- allow any more key strokes than int size (including backspace).
//-- it returns a char ponter to the first address in the array.
//-- conio.h header may be needed

extern "C" char* __declspec(dllexport) __stdcall GetPassword(char*,int);

 int main(int argc, char* argv[])
{
	const int size = 20; 
	char pword[size];				//--declare a char array that will hold your passoword
	char copyPword[size]; 
	char *pMyPassword = copyPword; 

   printf("Enter Password: ");				//-- prompt user for there password
   pMyPassword = GetPassword(pword, size);		

   strcpy(copyPword,pMyPassword);			//--copy the returned pointer to the 

   printf("\nYou Entered: ");				//-- display what you entered
   puts(pword);


	getch();
	return 0;
}
