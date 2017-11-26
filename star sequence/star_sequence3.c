//program to print star sequence 2 i.e
/*                  i   j
        *****       1   1,2,3,4,5 (j>=1)
         ****       2   2,3,4,5    (j>=2)
          ***       3   3,4,5      (j>=3)    i.e (j>=i)->logic
           **       4   4,5        (j>=4)
            *       5   5          (j>=5)
*/
#include<stdio.h>
int main(void)
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
            {
                if(j>=i)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
    }
    return 0;
}


