#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>b){
        printf("%d is greater than %d\n",a,b);

    }
    else{
        printf("%d is greater than %d\n",b,a);
    }
    return 0;
}