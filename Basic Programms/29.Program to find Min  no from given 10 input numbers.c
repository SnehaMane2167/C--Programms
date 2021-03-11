#include <stdio.h>
#include <conio.h>

int main()
{
     int No=0,Min=0,Con=0;

     printf("\n Enter a 10 Numbers=>");

     for(Con=1;Con<=10;Con++)
     {
         printf("\n\t Enter Number%d=",Con);
         scanf("%d",&No);

         if(Con==1)
         {

             Min=No;
             continue;
         }
         if(No<Min)
         {
             Min=No;
         }
     }

      printf("\n Press any key to get Minimum from given Number->");
      getche();


      printf("\n Minimum from Given Numbers=%d",Min);

     printf("\n\n Thanks for interacting...!!!!");

     getch();
     return 0;

}
