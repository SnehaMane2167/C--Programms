#include <stdio.h>
#include <conio.h>

int main()
{
    int Num=0;

     printf("\n Enter a Integer numbers=");
     scanf("%d",&Num);

     (Num==0)? printf("\n Number is Neutral") : ((Num>0)? printf("\n number is Positive") : printf("\n Number is Negative") );


    printf("\n Thanks ...!!!");

       getch();
       return 0;
}
