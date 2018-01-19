#include<cs50.h>
#include<stdio.h>

int main(void)
{   int h;
    do
        {   printf("Enter Height of PYRAMID\n");
            h=get_int();
        }while(h<0||h>=24);

    for(int i=1;i<=h;i++)
    {
        for(int j=h-i;j>0;j--)
        {
            printf(" ");
        }
        for(int k=0;k<i;k++)
        {
                printf("#");
        }
        printf("  ");
        for(int k=0;k<i;k++)
        {
                printf("#");
        }

        printf("\n");

    }
}