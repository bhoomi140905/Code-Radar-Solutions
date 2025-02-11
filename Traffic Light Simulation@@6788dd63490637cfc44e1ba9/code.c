
#include<stdio.h>
int main(){
    char R,G,Y;
    scanf("%c %c %c",&R,&G,&Y);
    if(G){
        printf("Go");
        break;
    }
    else if(R){
        printf("Stop");
        break;
    }
    else if(Y){
        printf("Slow Down");
        break;
    }
    else{
        printf("Invalid input");
    }
    return 0;
}