#include <stdio.h>
#include <conio.h>

int main()
{
    int No1=0,No=50;

    No1=No++;

    printf("\n Value of No = %d",No);
    printf("\n Value of No1 = %d",No1);

    No1=++No;

    printf("\ Value of No = %d",No);
    printf("\n Value of No1 = %d",No1);

    getch();
    return 0;
}
