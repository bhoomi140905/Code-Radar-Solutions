
#include<stdio.h>
int main(){
    char R,G,Y;
    scanf("%c %c %c",&R,&G,&Y);
    if(G){
        printf("Go");
    }
    else if(R){
        printf("Stop");
    }
    else if(Y){
        printf("Slow Down"):
    }
    else{
        printf("Invalid input"):
    }
    return 0;
}