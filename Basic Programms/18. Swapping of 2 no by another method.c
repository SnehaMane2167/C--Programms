#include <stdio.h>
#include <conio.h>

int main()
{
    int Num1=0,Num2=0;

    printf("\n Enter two numbers for swapping=");
    scanf("%d%d",&Num1,&Num2);

    printf("\n Before swapping of 1st number=%d.",Num1);
    printf("\n Before swapping of 2nd number=%d.",Num2);

    Num1=Num1+Num2;
    Num2=Num1-Num2;
    Num1=Num1-Num2;

    printf("\n After swapping of 1st number=%d",Num1);
    printf("\n After swapping of 2nd number=%d",Num2);

    printf("\n\n Thanks...!!!!");

    getch();
    return 0;
}
