// Your code here...
#include<stdio.h>
int main(){
    char G;
    scanf("%c",&G);
    if(G == 'A'){
        printf("Excellent");
    }
    else if(G == 'B'){
        printf("Good");
    }
    else if(G == 'C'){
        printf("Average");
    }
    else if(G == 'D'){
        printf("Below Average");
    }
    else if(G == 'E'){
        printf("Fail");
    }

    else{
        printf("Invalid grade");
    }
    return 0;

}