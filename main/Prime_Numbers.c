
/* Numbers that are divisible by 1 and itself is called Prime Numbers */
/* Number 0 and 1 is not an Prime Numbers */
enum {PRIME_NUMBER = 0, NOT_AN_PRIME_NUMBER = 1};

char Prime_Number(int Num)
{
    int PrimeCheck = Num, i = 0;
    char PrimeFlag = 0;

    // if((Num == 0) || (Num == 1))
    // {
    //     PrimeFlag = 0;
    // }

    for(i = 2; i <= (PrimeCheck/2); i++)
    {
        if((PrimeCheck%i) == 0)
        {
            PrimeFlag = 1;
            break;
        }
    }

    if(PrimeFlag == NOT_AN_PRIME_NUMBER)
    {
        return NOT_AN_PRIME_NUMBER;
    }
    else
    {
        return PRIME_NUMBER;
    }

}