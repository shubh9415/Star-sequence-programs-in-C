/*program to print following star pattern
           \*****/
//         *\***/*
//         **\*/**
//         ***\***
//         **/*\**
//         */***\*
//           /*****\
*/
#include<stdio.h>
int main(void)
{
    int i,j;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=7;j++)
            {
            if(j!=i&&j!=8-i)
            printf("*");
        else{
                if(j==i)
            printf("\\");
                else
            printf("/");
        }
        }
        printf("\n");
    }
}
