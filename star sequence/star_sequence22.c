/*program to print following star pattern
             1
            12A
           123AB
          1234ABC
*/
#include<stdio.h>
int main(void)
{
    int i,j;
    char k;
    for(i=1;i<=4;i++)
    {
        k='1';
        for(j=1;j<=7;j++)
            {
            if(j>=5-i&&j<=3+i)
            {
                printf("%c",k);
                k++;
            if(j==4)
                k=65;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
