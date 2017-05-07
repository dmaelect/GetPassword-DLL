#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif
 /*
 Date:
 Description:
 Source:
 */

#include <stdio.h>
#include <conio.h>	// for clrscr() function
#include <iostream>

  using namespace std;

extern "C" char* __declspec(dllexport) __stdcall GetPassword(char*,int);

 int _tmain(int argc, _TCHAR* argv[])
{
	char pword[20];
	char *pw = pword;
	char *tmp = pword;

	int a = 6;



   printf("Enter Password: ");
   pw = GetPassword(pword, 20);

   strcpy(pword,pw);

   printf("\nYou Entered: ");
   puts(pword);


	getch();
	return 0;
}
