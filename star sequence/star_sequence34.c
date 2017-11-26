/*program to print following star pattern
          ABCDEFG
          ABC EFG
          AB   FG
          A     G
*/
#include<stdio.h>
int main(void)
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k=65;
        for(j=1;j<=7;j++)
        {
            if(j<=5-i||j>=3+i)
                printf("%c",k);
            else
                printf(" ");
            k++;
        }
        printf("\n");
    }
}
