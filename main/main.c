/* Header file declaration*/
#include<stdio.h>       /* Driver file Declaration */
#include<stdlib.h>
#include<string.h>   
#include<assert.h>   

#include "Sizeof.c"     /*  Local File Declaration */
#include "Structure.c"
#include "Union.c"
#include "Function_Prototype.h"
#include "Recursion.c"
#include "String_Reverse.c"
#include "Prime_Numbers.c"
#include "C_Programming_Tricks.c"

int32 X;
const float PI = 3.14;   // constant variable declaration
int No_of_steps;
int max;


void main()
{
    int a = 5;
    int Number;
    printf("hello world\n");

/* Below function print size of data types in  c language */
    SizeofOper : SizeofDatatype();
/* Structure declaration and there properties */
    Structure : Structure();
/* Structure declaration and there properties */
    Union : Union();

    //Recursion();

    // Recursion1();

    //String_Reverse();

    printf("Enter the number to check for prime\n");
    scanf("%d",&Number);
    if(Prime_Number(Number) == PRIME_NUMBER)
    {
        printf("Entered Number is prime number\n");
    }
    else
    {
        printf("Not an prime number\n");
    }

    Swaping();
/* Assertion in c */
    // printf("\n");
    // assert(a == 7);

}

/* Assertion error will be printed with following information

Assertion failed!

Program: D:\Git_Repository\Github_Repo\BasicProgramming\main\main.exe
File: main.c, Line 37

Expression: a == 7      
*/