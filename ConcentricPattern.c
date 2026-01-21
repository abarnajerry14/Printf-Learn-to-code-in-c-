#include <stdio.h>

int main(void)
{
   
    int num,size;
    printf("Enter the number:\n");
    scanf("%d",&num);

    size=(2*num)-1;
    
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            int T=i;
            int B=(size-1)-i;
            int L=j;
            int R=(size-1)-j;

            

            int min=T;
            if(B<min) min=B;
            if(L<min) min=L;
            if(R<min) min=R;

            printf("%d",num-min);
        }
        printf("\n");
    }


    return 0;
}
