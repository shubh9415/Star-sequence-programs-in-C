/*program to print following star pattern using single loop
            *
           * *
          * * *
         * * * *
*/
#include<stdio.h>
int main(void)
{
    int i,k,flag=1,rows;
    printf("enter number of rows ");
    scanf("%d",&rows);
    for(i=1,k=0;i<=2*rows-1;i++)
    {
        if(i<rows-k)
            printf(" ");
        else
        {
            if(flag)
                printf("*");
            else
                printf(" ");
            flag=1-flag;
        }
        if(i==rows+k){
        printf("\n");
        k++;
        if(i==rows*2-1)
            break;
        i=0;
        flag=1;
        }
    }
}
