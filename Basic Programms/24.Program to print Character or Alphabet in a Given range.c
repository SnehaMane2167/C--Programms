#include <stdio.h>
#include <conio.h>

int main()
{
     char Loc='\0',Soc='\0',Eoc='\0';

     printf("\n Enter Starting of Character=");
     Soc=getche();

     printf("\n Enter Ending of Character=");
     Eoc=getche();

     if(Soc<Eoc)
     {
         for(Loc=Soc;Loc<=Eoc;Loc++)
         {
             printf("\n%c",Loc);
         }
     }
     else
     {
         for(Loc=Soc;Loc>=Eoc;Loc--)
         {
             printf("\n%c",Loc);
         }
     }
     printf("\n\n Thanks for interacting...!!!!");

      getch();
      return 0;

}
