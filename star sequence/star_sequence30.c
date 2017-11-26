/*program to print following star pattern
          1
          2 5
          3 6 8
          4 7 9 10
*/
#include<stdio.h>
void main(void)
{
    int i,j,k,m,n;
    for(i=1;i<=4;i++)
    {
        n=3;
        k=i;
        m=k;
        for(j=1;j<=4;j++)
        {
            if(j<=i){
                printf("%d ",m);
                m=m+n;
                n--;
            }
            else
                printf("  ");
        }
        printf("\n");
    }
}
