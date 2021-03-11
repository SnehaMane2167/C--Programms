#include <stdio.h>
#include <conio.h>

int main()
{
    int Day=0;
     printf("\n Enter day number (1-7)to view valid day");
     scanf("\n %d",&Day);

     if(Day==1)
     {
         printf("\n Monday");
     }
     else if(Day==2)
     {
         printf("\n Tuesday");
     }
     else if(Day==3)
     {
         printf("\n Wednesday");
     }
     else if(Day==4)
     {
         printf("\n Thursday");
     }
     else if(Day==5)
     {
         printf("\n Friday");
     }
     else if(Day==6)
     {
         printf("\n Saturday");
     }
     else if(Day==7)
     {
         printf("\n Sunday");
     }
     else
     {
         printf("\n Invalid day");
     }
     printf("\n Thanks for interacting...");

    getch();
    return 0;
}
