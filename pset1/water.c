#include<stdio.h>
#include<cs50.h>
int main(void)
{
   printf("Enter total number of minutes you spent in shower\n");
   int a=get_int();
   a=a*12;
   printf("%i\n",a);
}