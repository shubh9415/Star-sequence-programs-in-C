/*program to print following star pattern
          6 5 4 3 2 1 0
          5 4 3 2 1 0
          4 3 2 1 0
          3 2 1 0
          2 1 0
          1 0
          0
*/
#include<stdio.h>
int main(void)
{
    int i,j,k=7;
    for(i=1;i<=7;i++)
    {
        k=7-i;
        for(j=1;j<=7;j++)
        {
            if(j<=8-i){
                printf("%d ",k);
                k--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
