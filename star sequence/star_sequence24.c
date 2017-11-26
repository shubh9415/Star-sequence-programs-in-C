/*program to print following pattern
         *******
         *     *
         * *** *
         * *** *
         * *** *
         *     *
         *******
*/
#include<stdio.h>
int main(void)
{
    int i,j,k;
    for(i=1;i<=7;i++)
    {
        k=1;
        for(j=1;j<=7;j++)
        {
            if(i==1||i==7||j==1||j==7)
                printf("* ");
            else if(j==3||j==5||i==3||i==5){
                if(j==2||j==6||i==2||i==6)
                printf("  ");
            else
                printf("* ");
            }
            else
                printf("  ");
        }
        printf("\n");
    }
}
