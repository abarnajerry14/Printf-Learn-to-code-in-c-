#include <stdio.h>

int main(void)
{
   
    int num,count=0;
    
    printf("Enter the number:\n");
    scanf("%d",&num);
    while(num)
    {
        //to count number of 1's in the number
        count+=(num&1);
        num>>=1;
    }
    printf("count:%d",count);
    return 0;
}
