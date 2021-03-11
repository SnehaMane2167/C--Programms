#include <stdio.h>
#include <conio.h>

int main()
{
     int No=0,Sum=0,Con=0;

     printf("\n Enter a 10 Numbers=>");

     for(Con=1;Con<=10;Con++)
     {
         printf("\n\t Enter Number%d=",Con);
         scanf("%d",&No);

         Sum=Sum+No;
     }

      printf("\n Press any key to get Simulation of given Number->");
      getche();
      system("cls");

      printf("\n Summation of Given Numbers=%d",Sum);

     printf("\n\n Thanks for interacting...!!!!");
     getch();
     return 0;

}
