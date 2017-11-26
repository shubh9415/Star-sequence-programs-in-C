/*program to print following star star patter
            1
           232
          34543
         4567654
*/
#include<stdio.h>
int main(void)
{
    int i,j,k=1;
    for(i=1;i<=4;i++)
    {
        k=i;
        for(j=1;j<=7;j++)
        {
            if(j>=5-i&&j<=3+i){
                    printf("%d",k);
            j<4?k++:k--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
