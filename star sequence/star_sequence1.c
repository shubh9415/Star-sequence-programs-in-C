/*program to print following star sequence:
*
**
***
****
*****         */
#include<stdio.h>
int main(void)
{
    int j,i;
    for(i=1;i<=5;i++)
        {
    for(j=1;j<=5;j++)
    {
        if(j<=i)
             printf("*");
        else
             printf(" ");
    }
    printf("\n");
        }
    return 0;
}

