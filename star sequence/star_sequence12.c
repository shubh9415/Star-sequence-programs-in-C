/*program to print following star pattern
             *******
              *****
               ***
                *
*/
#include<stdio.h>
int main(void)
{
    int i,j,rows;
    printf("enter number of rows ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=(rows*2)-i;j++)
        {
            if(j>=i&&j<=(rows*2)-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
