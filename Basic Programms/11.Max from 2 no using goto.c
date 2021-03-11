#include <stdio.h>
#include <conio.h>

int main()
{
    int Num1=0,Num2=0;

    Up:
        printf("\n Enter 2 integer numbers=");
        scanf("%d%d",&Num1,&Num2);

      if(Num1 == Num2)
      {
          printf ("\n Both given numbers are equal.\n please enter another 2 numbers to compare\n");
          goto Up;
       }
       if(Num1>Num2)
       {
           printf("\n number %d is Maximum",Num1);
       }
       else
       {
           printf("\n number %d is Maximum",Num2);
       }
       printf("\n Thanks...!!!");

       getch();
       return 0;
}
