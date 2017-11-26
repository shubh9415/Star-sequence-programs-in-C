/*program to print following star sequence
         A
         BA
         CBA
         DCBA
*/
#include<stdio.h>
int main(void)
{
    int i,j,c;
    for(i=1;i<=4;i++)
    {
        c=64+i;
        for(j=1;j<=4;j++)
        {
            if(j<=i){
                printf("%c",c);
                if(j>=1)
                    c--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
