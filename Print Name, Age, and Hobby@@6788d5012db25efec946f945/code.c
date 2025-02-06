#include <stdio.h>
int main()
{
    char name[99];
    int age;
    char hobby[99];
    scanf("%s %d %s",name,&age,hobby);
    printf("Name: %s\n Age: %d\n Hobby: %s",name,age,hobby);
    
    return 0;

}