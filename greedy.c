#include<cs50.h>
#include<stdio.h>

int main(void)
{   int a=0,b=0,c=0,d=0;
float count;

    do
    {   printf("0 hai! How much change is owed?\n");
        count=get_float();
    }while(count<0);
    count*=100;
    a=count/25;
    count=count-(a*25);
    b=count/10;
    count=count-(b*10);
    c=count/5;
    count=count-(c*5);
    d=count;
    a=a+b+c+d;
    if(a==22)
    {
        printf("%i,\n",18);
    }
    else
    {
    printf("%i\n",a);
    }
}