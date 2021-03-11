#include <stdio.h>
#include <conio.h>

int main()
{
    char ch='\0';
    printf("\n Enter a character to check whether,\n it is Uppercase or Lowercase Latter=");

    ch=getche();

    if((ch>='A')&&(ch<='Z'))
    {

        printf("\n\n Given character is Uppercase Latter.");
    }
    else if((ch>='a')&&(ch<='z'))
    {
        printf("\n\n Given character is Lowercase Latter.");
    }
    else
    {
        printf("\n\n Given character is neither Uppercase nor Lowercase Latter.");
    }
    printf("\n\n Thanks..!!!");

     getch();
    return 0;
}
