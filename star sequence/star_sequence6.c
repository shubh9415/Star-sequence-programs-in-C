//program to print star sequence 2 i.e
/*                *
                 * *
                * * *
               * * * *
              * * * * *
*/
#include<stdio.h>
int main(void)
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        k=1;
        for(j=1;j<=9;j++)
            {
                if(j>=6-i&&j<=i+4&&k){
                    printf("*");
                    k=0;
                    }
                else{
                    printf(" ");
                    k=1;
            }
            }
            printf("\n");
    }
    return 0;
}

