//program to print star sequence 2 i.e
/*                  i   j
        *****       1   1,2,3,4,5 (j<=5)
        ****        2   1,2,3,4    (j<=4)
        ***         3   1,2,3     (j<=3)    i.e (j<=6-i)->logic
        **          4   1,2        (j<=2)
        *           5   1         (j<=1)
*/
#include<stdio.h>
int main(void)
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
            {
                if(j<=6-i)///logic written here,explained above
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
    }
    return 0;
}


