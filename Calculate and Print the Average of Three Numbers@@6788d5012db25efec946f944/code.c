#include <stdio.h>
int main()
{
    float a,b,c,sum,average;
    scanf("%f %f %f", &a,&b,&c);
    sum=a+b+c;
    average= sum/3;
    printf("Average: %f\n",average);
    return 0;
}