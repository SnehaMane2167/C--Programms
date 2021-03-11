#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
#define size 7
int main()
{
    int Arr[size]={};
    int i=0,Max=0,Min=0;

      for(i=0;i<size;i++)
      {
          printf("\n Enter Value of %d Element =",i+1);
          scanf("%d",&Arr[i]);

      }

      system("cls");

       for(i=0;i<size;i++)
       {
           printf("\n Value  of element %d = %d",i+1,Arr[i]);
        }
        for(i=0;i<size;i++)
        {
            if(Arr[i]>Max)
            {
                Max=Arr[i];
            }
        }
        Min=Arr[0];
       for(i=0;i<size;i++)
        {

          if(Min>Arr[i])
           {
             Min=Arr[i];
           }
        }

        printf("\n Maximum Element is = %d",Max);
        printf("\n Minimum Element is = %d",Min);




    getch();
    return 0;
}
