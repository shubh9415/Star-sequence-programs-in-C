/*program to print following star sequence
                1
               12
              123
             1234
            12345
             1234
              123
               12
                1
*/
#include<stdio.h>
int main(void)
{
    int i,j,k,p=0;
    for(i=1;i<=9;i++)
        {
            i<=5?p++:p--;
            k=1;
        for(j=1;j<=5;j++)
        {
            if(j>=6-p){
                printf("%d",k);
                k++;
                }
            else
                printf(" ");
        }
        printf("\n");
    }
}
