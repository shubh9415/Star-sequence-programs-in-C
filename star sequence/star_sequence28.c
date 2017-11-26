/*program to print following star pattern
       1
       3*2
       4*5*6
       10*9*8*7
       11*12*13*14*15
*/
#include<stdio.h>
int main(void)
{
    int i,j,k=0,p;
    for(i=1;i<=5;i++)
    {
        if(i%2==1)
            k=k+1;
        else{
                k--;
            k=k+i;
        }
            p=k;
        for(j=1;j<=9;j++)
        {
            if(j<=(i*2)-1){
                if(j%2==0)
                    printf("*");
                else if(i%2==1){
                    printf("%d",p++);
                    k++;
                    }
                    else{
                            printf("%d",p--);
                    }
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
