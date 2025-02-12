// Your code here...
 #include<stdio.h>
 int main(){
    int a,b;
    char op;
    scanf("%d %d %c",&a,&b,&op);
    switch(op){
        case '+':
        printf("%d",a+b);
    
        case '-':
        printf("%d",a-b);

        case '*':
        printf("%d",a*b);

        case '/':
        if(b==0){
            printf("error");
        }else{
            printf("%d",a/b);
        }
    }
    return 0;

 }