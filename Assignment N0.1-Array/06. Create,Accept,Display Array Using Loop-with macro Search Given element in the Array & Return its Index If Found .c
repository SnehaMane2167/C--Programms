#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
#define size 7
int main()
{
    int Arr[size]={};
    int i=0,Src=0;

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

        printf("\n Enter Element to Search=");
        scanf("%d",&Src);


          for(i=0;i<size;i++)
          {

            if(Src==Arr[i])
            {

               break;
            }
          }

            if(i<size)
            {
                printf("\n Element %d Found in Array at Index %d",Src,i);


            }
           else
           {
                printf("\n Element %d Not Found",Src);
           }



    getch();
    return 0;
}
