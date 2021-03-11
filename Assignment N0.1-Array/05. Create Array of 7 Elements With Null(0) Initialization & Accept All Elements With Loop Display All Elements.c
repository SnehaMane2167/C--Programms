#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
int main()
{
    int Arr[7]={};
    int i=0;

      for(i=0;i<7;i++)
      {
          printf("\n Enter Value of %d Element =",i+1);
          scanf("%d",&Arr[i]);

      }

      system("cls");

       for(i=0;i<7;i++)
       {
           printf("\n Value  of element %d = %d",i+1,Arr[i]);
        }


    getch();
    return 0;
}
