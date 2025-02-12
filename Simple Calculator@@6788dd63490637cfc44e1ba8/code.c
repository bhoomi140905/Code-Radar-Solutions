// Your code here...
 #include<stdio.h>
 int main(){
    char a,b,op;
    scanf("%c %c %c",&a,&b,&op);
    switch(op){
        case '+':
        printf("%d",a+b);
    
        case '-';
        printf("%d",a-b);

        case '*';
        printf("%d",a*b);

        default;
        printf("%d",a/b);
    }
    return 0;

 }