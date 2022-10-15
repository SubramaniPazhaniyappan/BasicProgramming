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

typedef struct Header_File
{
	char chunk_id[4];
	int chunk_size;
	char format[4];
	char subchunk1_id[4];
	int subchunk1_size;
	short int audio_format;
	short int num_channels;
	int sample_rate;		
	int byte_rate;
	short int block_align;
	short int bits_per_sample;
	char subchunk2_id[4];
	int subchunk2_size;
} HEADER;

typedef struct Header_File* HeaderExt;

FILE *InFPtr;


int InputBuff[256] = {0};

void main()
{
    int a = 5;
    int Number;
    printf("hello world\n");

/* Below function print size of data types in  c language */
    // SizeofOper : SizeofDatatype();
/* Structure declaration and there properties */
    // Structure : Structure();
/* Structure declaration and there properties */
    // Union : Union();

    //Recursion();

    // Recursion1();

    //String_Reverse();
/*
    printf("Enter the number to check for prime\n");
    scanf("%d",&Number);
    if(Prime_Number(Number) == PRIME_NUMBER)
    {
        printf("Entered Number is prime number\n");
    }
    else
    {
        printf("Not an prime number\n");
    } */

    // Swaping();
/* Assertion in c */
    // printf("\n");
    // assert(a == 7);


    InFPtr = fopen("D:\\Git_Repository\\Github_Repo\\BasicProgramming\\Input_Files\\Sine10Khz.wav","rb");
    // InFPtr = fopen("D:\\Git_Repository\\Github_Repo\\BasicProgramming\\Input_Files\\Sine10Khz_Mp3.mp3","rb");

    if(InFPtr == NULL)
    {
        printf("Input File is not included properly\n");
    }

    HeaderExt metadata = (HeaderExt) malloc(sizeof(HEADER));

    fread(metadata, 1, sizeof(HEADER), InFPtr);

    printf("Sampling Frequency: %d\n", metadata->sample_rate);
    printf("Stream Format: %d\n", metadata->audio_format);
    // printf("Bits per sample: %d\n", metadata->bits_per_sample);
    // printf("BLock Align : %d\n",metadata->block_align);
    // printf("Byte Rate : %d\n",metadata->byte_rate);
    printf("Chunk Id: %d\n",metadata->chunk_id);

    while(InFPtr != NULL)
    {
        fread(InputBuff, 4, 256, InFPtr);

        for(int i =0 ; i < 256; i++)
        {
            printf("Element %d value: %d\n ", i, InputBuff[i]);
        }
        fclose(InFPtr); // close the file pointed by InFPtr.
        break;
    }

    // while(1);
  

}

/* Assertion error will be printed with following information

Assertion failed!

Program: D:\Git_Repository\Github_Repo\BasicProgramming\main\main.exe
File: main.c, Line 37

Expression: a == 7      
*/