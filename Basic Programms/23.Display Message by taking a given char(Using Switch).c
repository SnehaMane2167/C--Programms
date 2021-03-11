#include <stdio.h>
#include <conio.h>

int main()
{
     char ch='\0';


     printf("\n Enter a Character to View Corresponding Message=");
     ch=getche();

     switch(ch)
     {

        case 'a':
        case 'A':
                  printf("\n Hello ");
                  break;

        case 'b':
        case 'B':
                 printf("\n Good Morning");
                 break;

        case 'c':
        case 'C':
        case 'm':
        case 'M':
                 printf("\n Have a Nice Day");
                 break;

        case 'd':
        case 'D':
        case 'e':
        case 'E':
                 printf("\n Good Bye");
                 break;

        default:
                printf("\n No message for such character...");
                break;
     }

     printf("\n\n Thanks for interacting...!!!!");

    getch();
    return 0;
}
