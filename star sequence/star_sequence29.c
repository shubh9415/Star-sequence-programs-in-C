/*program to print following star pattern
                   A
                  CB
                 FED
                JIHG
               ONMLK
*/
#include<stdio.h>
int main(void)
{
    int i,j,c=64,f;
    for(i=1;i<=5;i++)
    {
        c=c+i;
        f=c;
        for(j=1;j<=5;j++)
        {
            if(j>=6-i){
                printf("%c",f);
                f--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
