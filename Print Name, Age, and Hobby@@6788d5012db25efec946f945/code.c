#include <stdio.h>
int main()
{
    int age;
    char name[99],hobby[99];
    scanf("%d %s %s",&age,&name,&hobby);
    printf("Name: %s",name);
    printf("Age: %d",age);
    printf("Hobby: %s",hobby);
    return 0;

}