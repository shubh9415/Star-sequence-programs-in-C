/*program to print following star pattern
            1
           212
          32123
         4231234
*/
#include<stdio.h>
int main(void)
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k=i;
        for(j=1;j<=7;j++)
        {
            if(j>=5-i&&j<=3+i) {
                printf("%d",k);
                j<4?k--:k++;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
