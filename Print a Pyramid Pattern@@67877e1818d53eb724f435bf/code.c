// Your code here...
#include<stdio.h>
int main()
{
    int N;
    //printf("Enter the no of rows for the triangle");
    scanf("%d",&N);
    for (int i=1;i <= N; i++)
    {
        for(int j=1;j<=N-i;j++){
            printf("");

        }
       for(int j=1;j<=(2*i-1);j++)
       {
        printf("*");

       }
       printf("\n");
    }
    return 0;

}
