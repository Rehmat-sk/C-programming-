//SHAIKH ZOYA
//241A016
//AIDS
#include<stdio.h>
 int factorial_recursive(int num)
{
    if(num<=1)
    {
        return 1;
    }
    return num*factorial_recursive(num-1);
}

    int main()
    {
        int num;
        printf("\t\t\t***recurcive factorial function***\n");
        printf("enter number :");
        scanf("%d",&num);
        printf("factorial of %d and %d",num, factorial_recursive(num));
        return 0;
    }
