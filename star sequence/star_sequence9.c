/*program to print star sequence as follows
           ABCDEDCBA
           ABCD DCBA
           ABC   CBA
           AB     BA
           A       A
*/
#include<stdio.h>
int main(void)
{
    int i,j,k=65;
    for(i=1;i<=5;i++)
    {
        k=65;
        for(j=1;j<=9;j++)
        {
            if(j<=6-i||j>=4+i)
            {
                printf("%c",k);
                j<5?k++:k--;
            }
            else{
                printf(" ");
                if(j==5)
                k--;
                }
        }
        printf("\n");
    }
}
