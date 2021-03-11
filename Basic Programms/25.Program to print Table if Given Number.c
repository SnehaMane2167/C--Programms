#include <stdio.h>
#include <conio.h>

int main()
{
     int No=0,Con=0;

     printf("\n Enter a Number to print its Table=");
     scanf("%d",&No);

     for(Con=1;Con<=10;Con++)
     {
         printf("\n\t %3d*%3d=%3d",No,Con,(No*Con));
     }

     getche();

     printf("\n\n Thanks for interacting...!!!!");
     getch();
     return 0;

}
