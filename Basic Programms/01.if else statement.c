#include <stdio.h>
#include <conio.h>

int main()
{
    int No=0;
     printf("\n Enter a number=");
     scanf("%d",&No);

     if (No > 0)
     {
         printf("\n you have entered positive number");
     }
     else
     {
         printf("\n you have entered negative number");
     }
     printf("\n thanks for interacting...");

    getch();
     return 0;
}
