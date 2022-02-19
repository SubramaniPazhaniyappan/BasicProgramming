#include<stdio.h>
#define MAX_STR_LEN 50


void String_Reverse()
{
    int i, j, k = 0; 
    char stri[MAX_STR_LEN],temp;

    printf("Enter the string within %d length\n",sizeof(stri));
    //scanf("%[^\n]s",stri); //or 
    //fgets(stri,MAX_STR_LEN,stdin); //or
    gets(stri);
   // printf("%s",stri);
    j = strlen(stri) - 1;    //strrev(stri)
    //printf("Length of the string %d",j);
    for(i = 0; i < j; i++)
    {
        temp = stri[i];
        stri[i] = stri[j];
        stri[j] = temp;
        //printf("Value of i = %d, Value of j = %d\n",i,j);
        j--;
    }
    printf("%s",stri);
}

/*! Explaination : String Reverse

stri[MAX_STR_LEN] = "abcde";
stri[0] = a, stri[1] = b, stri[2] = c, stri[3] = d, stri[4] = e;

Loop1 -> i = 0, i < 4
temp = stri[0] = a,
stri[0] = stri[4] = e;
stri[4] = temp = a;

Loop2 -> i = 1, i < 3
temp = stri[1] = b,
stri[1] = stri[3] = d;
stri[3] = temp = b;

stri[2] = c; //unchanged one
// if the condition is ;i < = j;, this is not necessary one
Loop2 -> i = 2, i < 2
temp = stri[2] = c,
stri[2] = stri[2] = c;
stri[2] = temp = c;

Reversed string - "edcba"

 */