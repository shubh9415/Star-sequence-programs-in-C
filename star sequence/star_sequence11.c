/*program to print following star sequence
         *
         **
         ***
         ****
         ***
         **
         *
*/
#include<stdio.h>
int main(void)
{
    int i,j,k=0,rows,n;
    printf("enter number of rows ");
    scanf("%d",&rows);
    n=(rows+1)/2;
    for(i=1;i<=rows;i++)
    {
        if(rows%2==0){
            if(i<=n) k++;
        if(i>n+1) k--;
        }
        else
        i<=n?k++:k--;
        for(j=1;j<=n;j++)
        {
            if(j<=k)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
