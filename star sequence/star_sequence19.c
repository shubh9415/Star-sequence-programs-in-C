/*program to print following star pattern
                A
               ABA
              ABCBA
             ABCDCBA
*/
#include<stdio.h>
int main(void)
{
    int i,j,k;
    for (i=1;i<=4;i++)
    {
        k=64;
        for(j=1;j<=7;j++)
            {
            if(j>=5-i&&j<=3+i){
                j<=4?k++:k--;
                printf("%c",k);
            }
            else
                printf(" ");
            }
        printf("\n");
    }
}
