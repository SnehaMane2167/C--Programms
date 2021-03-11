#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
#define size 7
int main()
{
    int Arr[size]={};
    int i=0,Src=0,Cnt=0;

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

        printf("\n Enter Element to Find Count of it =");
        scanf("%d",&Src);


          for(i=0;i<size;i++)
          {

            if(Src==Arr[i])
            {

               Cnt++;
            }
          }

          printf("\n Element %d Count is =%d",Src,Cnt);

    getch();
    return 0;
}
