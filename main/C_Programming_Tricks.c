
/*  C programming Trick for Embedded Developers   */


/*1. Swaping Two values without using Tempeory Variable */

int Variable1 = 20;
int Variable2 = 30;

void Swaping(void)
{
    /* Swapping is done using XOR operator */
    /* a    b    c
       0    0  - 0
       0    1  - 1
       1    0  - 1
       1    1  - 0   */
       
    printf("Var1 :%d, Var2:%d\n",Variable1,Variable2);

    Variable1 = Variable1 ^ Variable2;  // XOR Symbol - ^
    // A ^ B = A - B [Difference between two numbers]
    printf("STAGE 1:%d\n", Variable1);  // 10 
    Variable2 = Variable1 ^ Variable2;
    printf("STAGE 2:%d\n", Variable2);  // 
    Variable1 = Variable1 ^ Variable2;  
    printf("STAGE 3:%d\n", Variable1); 
    //printf("After Swaping Var1 :%d, Var2:%d",Variable1,Variable2); 
}

/*2. Difference between Two values using XOR (^) Operator */

int Var1 = 4;
int Var2 = 5;

int Diff_Value = 0;
void Difference_Bet()
{
    Diff_Value = Var1 ^ Var2; // Instead of Var1 - Var2;
}





