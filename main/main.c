/* Header file declaration*/
#include<stdio.h>       /* Driver file Declaration */
#include<stdlib.h>
#include<string.h>      

#include "Sizeof.c"     /*  Local File Declaration */
#include "Structure.c"
#include "Union.c"
#include "Function_Prototype.h"

int32 X;
const float PI = 3.14;   // constant variable declaration

void main()
{
printf("hello world\n");

/* Below function print size of data types in  c language */
SizeofOper : SizeofDatatype();
/* Structure declaration and there properties */
Structure : Structure();
/* Structure declaration and there properties */
Union : Union();

}