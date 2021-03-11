#include <stdio.h>
#include <conio.h>

int main()
{
  char Grade= 'A';
  int R_No=0;
  float Per=0.0;
  char Num[50]="";

  printf("\n Enter students all details=>");

  printf("\n\t Enter roll no of student=");
  scanf("%d",&R_No);

  printf("\n\t Enter name of student=");
  scanf("%s",&Num);

  printf("\n\t Enter percentage of student=");
  scanf("%f",&Per);

  printf("\n\t Enter grade of student=");
  scanf("%c",&Grade);

   system("cls");

   printf("\n\t Student information\n");
   printf("\n================********==================\n");

   printf("\n\t roll no =%d,\n\t name   = %s\n\t percentage = %0.2f.\n\t grade  = %c.",R_No,Num,Per,Grade);
   printf("\n\n=================**********=====================\n\n");

    getch();
    return 0;
}
