/*program to print following star pattern
                 1
                A B
               1 2 3
              A B C D
*/
#include<stdio.h>
int main(void)
{
    int i,j,k,n,c,l;
    printf("enter number of lines  ");
    scanf("%d",&l);
    for(i=1;i<=l;i++)
    {
        n=1;
        c=65;
        k=1;
        for(j=1;j<=l*2-1;j++)
        {
            if(j>=l+1-i&&j<=l-1+i&&k){
                    if(i%2==1)
                printf("%d",n++);
            else
                printf("%c",c++);
                k=0;
            }
            else{
                printf(" ");
                k=1;
            }
        }
        printf("\n");
    }
}
