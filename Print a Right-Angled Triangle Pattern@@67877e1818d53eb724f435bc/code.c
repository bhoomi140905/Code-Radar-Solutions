// Your code here...
#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    for(int i=1;i<N;i++)
    {
        for(int j=1;j<N;j++)
        {
            printf("*\n");
        }
        printf("\n");
    }
    return 0;
}