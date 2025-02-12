#include <stdio.h>
int main()
{
    int a,b,c; 
    scanf("%d\n %d\n %d",&a,&b,&c);
    if ((a>b) && (a>c)){
        printf("a");
    }
    else if((b>c) && (b>a)){
        printf("b");
    }
    else{
        printf("c");
    }
    return 0;
}