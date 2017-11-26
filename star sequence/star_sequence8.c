/* program to print star sequence as given below
                            1
                           121
                          12321
                         1234321
                        123454321
.
*/
#include<stdio.h>
int main(void)
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        k=1;
        for(j=1;j<=9;j++)
        {
            if(j>=6-i&&j<=4+i)
            {
                printf("%d",k);
                j<5?k++:k--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
