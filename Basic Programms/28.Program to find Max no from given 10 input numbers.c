#include <stdio.h>
#include <conio.h>

int main()
{
     int No=0,Max=0,Con=0;

     printf("\n Enter a 10 Numbers=>");

     for(Con=1;Con<=10;Con++)
     {
         printf("\n\t Enter Number%d=",Con);
         scanf("%d",&No);

         if(Con==1)
         {

             Max=No;
             continue;
         }
         if(No>Max)
         {
             Max=No;
         }
     }

      printf("\n Press any key to get Maximum from given Number->");
      getche();


      printf("\n Maximum from Given Numbers=%d",Max);

     printf("\n\n Thanks for interacting...!!!!");

     getch();
     return 0;

}
