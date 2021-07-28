      
int find_nth_term(int n, int a, int b, int c) 
{
  //Write your code here.
    int Sum = a+b+c;
    
    if(n > 4)
    {
       Sum = find_nth_term(n-1, b, c, a+b+c);
       //printf("%d %d %d\n",a,b,c);
    }

    return Sum; 
}

int RecursionNatruralNoSum(int n) 
{
    if (n != 0)
        // sum() function calls itself
        return n + RecursionNatruralNoSum(n-1); 
    else
        return n;
}

void Recursion()
{
    int n, a, b, c, ans;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 

}

void Recursion1()
{
    int number, result;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    result = RecursionNatruralNoSum(number);

    printf("sum = %d", result);
}


/* Recursive Function */
/* Recursion - function calls itself called resursion 
    Types : Direct Recursion and Indirect Recursion.
*/
/*
void recursive_function() {
   
   ... ...
   recursive_function(); // function calls itself 
   ... ...
}

int main() {
  
  ... ... 
  recursive_function();
  ... ...
}
*/
