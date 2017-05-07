 Date:	05/01/17
 Description: 
        Library to accept keyboard input into a char array.
        Masks the input on the console so you only see " ***** " as you type
        limits how the number of keystrokes to prevent buffer ovverflow
        example program how to use and implement the GetPassword.dll
        It will display " * " as you type and it stores the actual chars into the array
 Source: Daryl Newell DMA Electronics


//-- accepts a char arrray "char myArray[size], int size" int size is the max size you want the array to be. The function will not
//-- allow any more key strokes than int size (including backspace).
//-- it returns a char ponter to the first address in the array.
//-- conio.h header may be needed
