/*program to print following star pattern*/
#include<stdio.h>
void main(void)
{
    int i,j,k=0,n;
    for(i=1;i<=21;i++)
    {
        i<=11?k++:k--;
        n=k-1;
        for(j=1;j<=21;j++)
        {
            if(j>=12-k&&j<=10+k){
                printf("%d",n%10);
                j<11?n++:n--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
