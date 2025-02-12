// Your code here...
#include<stdio.h>
int main(){
    int CP,SP;
    scanf("%d\n %d",&CP,&SP);
    if(SP>CP){
        printf("Profit");
    }
    else if(CP>SP){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}