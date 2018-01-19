#include<cs50.h>
#include<stdio.h>

int main(void)
{   int h;
    do
    {printf("Enter Height of PYRAMID\n");
        h=get_int();
    }while(h<0||h>=24);
    int k;
    for(int i=1;i<=h;i++)
    {
        for(int j=h-i;j>0;j--)
        {
            printf(" ");
        }
            for(k=1;k<=i+1;k++)
            {
                printf("#");

            }

        printf("\n");
    }
}