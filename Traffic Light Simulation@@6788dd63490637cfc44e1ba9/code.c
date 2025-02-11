
#include<stdio.h>
int main(){
    char colour;
    scanf("%c",&colour);
    switch(colour){
        case 'R':
        printf("Stop");
        break;
        case 'Y':
        printf("Slow Down");
        break;
        case 'G':
        printf("Go")
        break;
        default: 
        printf("Invalid input");
    }
    return 0;
}