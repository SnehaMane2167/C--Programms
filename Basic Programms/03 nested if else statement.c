#include <stdio.h>
#include <conio.h>

int main()
{
    int Sal=0,Is_Stud=0;

    printf("\n enter salary =");
    scanf("\n %d",&Sal);

    printf("\n enter 2 if you are student");
    scanf("\n %d",&Is_Stud);

    if(Sal<=0)
    {
      if(Is_Stud==1)
      {
          printf("\n Candidate is student");
      }
      else
      {
          printf("\n Candidate is fresher");
       }
    }
     else
     {
         if (Sal>500000)
         {
             printf("\n Candidate is expert employee");

         }
         else
         {
             printf("\n Candidate is beginner employee");
         }
     }
     printf("\n thanks for interacting...");

        getch();
        return 0;
}
