#include <stdio.h>
#include <conio.h>

int main()
{
    int No1=0, No2=0,Sum=0;

    printf("\n Enter 1st no=");
    scanf("\n%d",&No1);
    printf("\n Enter 2nd no=");
    scanf("\n%d",&No2);

    Sum= No1+No2;

    printf("\n Addition of %d & %d is =%d.",No1,No2,Sum);


    getch();
    return 0;
}
