/*program to print following star pattern
              1
              6 2
              10 7 3
              13 11 8 4
              15 14 12 9 5
*/
#include<stdio.h>
int main(void)
{
    int i,j,rows,n,k=1,g;
    printf("enter numbers of rows ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        g=rows-i+1;
        n=k;
        for(j=1;j<=i;j++)
        {
                printf("%d",n);
                n=n-g;
                g++;
        }
        k=k+1+rows-i;
        printf("\n");
    }
}
