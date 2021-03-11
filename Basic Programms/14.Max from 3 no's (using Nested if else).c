#include <stdio.h>
#include <conio.h>

int main()
{
    int No1=0,No2=0,No3=0;

    printf("\n Enter 3 integer numbers=");
    scanf("%d%d%d",&No1,&No2,&No3);

    if (No1==No2==No3)
    {
        printf("\n Given 3 numbers are Equal");
        goto Down;
    }
    if(No1>No2)
    {
      if(No1>No3)
      {
          printf ("\n number is Max=%d ",No1);
      }
      else
      {
          printf("\n number is Max=%d",No3);
      }
    }
    else if(No2>No3)
    {
        printf("\n number is Max=%d",No2);
    }
    else
    {
        printf("\n number is Max=%d",No3);
    }

      Down:
          printf("\n Thanks....!!!!");

     getch();
    return 0;
}
