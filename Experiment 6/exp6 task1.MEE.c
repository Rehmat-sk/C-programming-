//NAME: SHAIKH RAHMAT
//UIN:241A046
//ROLL NO: 38

#include<stdio.h>
 void counter()
{
    static int count=0;
    count++;
    printf("COUNTER FUNCTION CALL:%d\n",count);

}
int main()
{int i;
  printf("\t\t\t***STORAGE CLASS\n");
 for(i=1;i<=38;i++)
{
    counter();
}

    return 0;
}

