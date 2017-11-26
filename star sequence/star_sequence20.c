/*program to print following star sequence
             A1
            AB12
           ABC123
          ABCD1234
*/
#include<stdio.h>
int main(void)
{
    int i,j,k,c;
    for(i=1;i<=4;i++)
    {
        c=65;
        k=1;
        for(j=1;j<=8;j++)
        {
            if(j>=5-i&&j<=4+i){
                if(j<=4){
                printf("%c",c);
                c++;
                }
                else{
                    printf("%d",k);
                    k++;
                }
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
