#include <stdio.h>
#include <conio.h>

int main()
{
     char ch='\0';

     printf("\n Enter a Character to View Corresponding Message=");
     ch=getche();

     if(ch=='A'||ch=='a')
     {
         printf("\n Hello ");
     }
     else if(ch=='B'||ch=='b')
     {
         printf("\n Good Morning");
     }
     else if(ch=='C'||ch=='c')
     {
         printf("\n Have a Nice Day");
     }
     else if(ch=='D'||ch=='d')
     {
         printf("\n Good Bye");
     }
     else
     {
         printf("\n No message for such character...");
     }

     printf("\n\n Thanks for interacting...!!!!");

    getch();
    return 0;
}
