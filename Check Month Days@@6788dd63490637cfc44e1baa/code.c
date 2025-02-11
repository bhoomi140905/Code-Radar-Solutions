// Your code here...
#include<stdio.h>;
int main(){
    char month;
    scamf("%c",&month);
    switch month{
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf("31\n");
        break;
        case 2:
        printf("28\n");
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