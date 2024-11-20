//NAME: SHAIKH RAHMAT 
//ROLL NO:38 
//UIN: 241A046
//DIV:A

#include<stdio.h>
int isprimenumber(int num);
int isprimenumber(int num)
{
    for(int i=2;i<num; i++)
    {
        if(num%i==0)
            return 0;}



    return 1;
}


int main()
{
    int start_num, end_num, i;
    printf("\t\t\t ***PRIME NUMBER FINDER***\n");
    printf("enter starting number:\n");
    scanf("%d",&start_num);
    printf("enter ending number:\n");
    scanf("%d",&end_num);

    i=start_num<=1?2:start_num;
     printf("prime numbers between %d and %d\n",start_num,end_num);
     while(i<= end_num)
     {
         if(isprimenumber(i))
         {     printf("%d\n",i);

         }

       i++;
    }
    return 0;
}
