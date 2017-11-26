/*program to pattern following star pattern
                         *
                       * *
                     * * *
                     | * *
                 *   |   *
                 * * |
                 * * *
                 * *
                 *
*/
#include<stdio.h>
int main(void)
{
    int i,j,n,k;
    printf("enter value of n ");
    scanf("%d",&n);
    for(i=1;i<=(n*3);i++)
    {
        for(j=1;j<=(2*n-1);j++)
        {
            if(i<=n){
                if(j>=(2*n-i))
                    printf("* ");
                else
                    printf("  ");
             }
            else if(i<=2*n){
                k=0;
                if(j==n)
                {
                    k=1; printf("| ");
                }
                if(j<=(i-n-1)){
                    k=1; printf("* ");
                }
                if(j>=i){
                    k=1; printf("* ");
                }
                if(k==0)
                    printf("  ");
             }
             else if(i<=3*n){
                 if(j<=3*n+1-i)
                    printf("* ");
                 else
                    printf("  ");
             }
        }
        printf("\n");
    }
}
