#include <stdio.h>


int calc(float Num1,float Num2,char op, float*result)
{
switch(op)
{
  case '+':
    *result=Num1 + Num2;
    return 1 ;
 
  case '-':
    *result=Num1 - Num2;
    return 1;
  
  case '/':
    if(Num2==0)
    {
        printf("Error divisible by Zero\n");
        return 0;
    }
    else
    {
        *result=Num1/Num2;
        return 1;
    }
  
   case '*':
    *result=Num1*Num2;
    return 1;
 
   default:
    printf("enter valid op\n");
    return 0;
}
}

int main(void)
{
  float Num1,Num2,result;
  char op,user_ctrl=1;
  while(user_ctrl)
  {
  printf("Enter 1st number:\n");
  scanf("%f",&Num1);
  
  printf("Enter 2nd number:\n");
  scanf("%f",&Num2);
  
  printf("Enter operation:\n");
  scanf(" %c",&op);
  
  if(calc(Num1,Num2,op,&result))
     printf("output:%.2f\n",result);
  
  printf("Do you want to continue the calculation:y/n\n");
  scanf(" %c",&op);
  if(op!='y')
    user_ctrl=0;
    printf("Program Exit\n");
  }
  return 0;
}
