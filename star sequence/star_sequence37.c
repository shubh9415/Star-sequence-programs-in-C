/*program to print following star sequence
           0
           0 1
           0 2 4
           0 3 6 9
           0 4 8 12 16
*/
#include<stdio.h>
int main(void)
{
    int i,j,k,rows;
    printf("enter number of rows ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        k=0;
        for(j=1;j<=rows;j++)
        {
            if(j<=i){
                printf("%d ",k);
                k=k+i-1;
            }
            else
                printf("  ");
        }
        printf("\n");
    }
}
