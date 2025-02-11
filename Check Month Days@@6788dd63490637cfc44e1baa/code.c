// Your code here...
#include<stdio.h>
int main(){
    int month;
    scanf("%d",&month);
    switch (month){
        case 1:3:5:7:8:10:12:
        printf("31");
        break;
        case 2:
        printf("28");
        break;
        case 2:
        case 4:
        case 6:
        case 9:
        case 11:
        printf("30");
        break;
        default:
        printf("Invalid month");

    }
    return 0;

}