#include <stdio.h>
int main()
{
    int age;
    char name[99],hobby[99];
    scanf("%d %s %s",&age,&name,&hobby);
    printf("Name: %s\n Age: %d\n Hobby: %s",name,age,hobby);
    
    return 0;

}