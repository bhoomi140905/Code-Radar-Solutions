#include <stdio.h>
int main()
{
    int a,b,c; 
    scanf("%d\n %d\n %d",&a,&b,&c);
    if (a>b){
        printf("a");
    }
    else if(b>c){
        printf("b");
    }
    else{
        printf("c");
    }
    return 0;
}