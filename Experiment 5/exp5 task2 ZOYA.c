//ZOYA AYUB SHAIKH
//ROLL NO:`16
//UIN: 241A016
//AIDS
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
   printf("\t\t\t*** iterative factorial function***\n\n");
   printf("enter number:");
   scanf("%d",&num);
   printf("factorial of %d is %d", num, factorial_iterative(num));

   return 0;

  }
