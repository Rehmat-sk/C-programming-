//SHAIKH RAHMAT
//241A046
//AIDS
//38
#include<stdio.h>
int factorial_iterative(int num)
{
    int prod = 1;
    for(int i=1; i<=num; i++)
    {
        prod *=i;
    }
    return prod;
}

int main()
  {

   int num;
   printf("\t\t\t***ITERATIVE FACTORIAL FUNCTION***\n\n");
   printf("Enter number:");
   scanf("%d",&num);
   printf("FACTORIAL of %d is %d", num, factorial_iterative(num));

   return 0;

  }
