//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include<stdio.h>
int main()
{
    int a,b;
    char op;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("Enter an operator (+,-,*,/,%:");
    scanf("%c",&op);
    scanf("%c",&op);
    switch(op)
    {
        case '+':
            printf("a+b=%d\n",a+b);
            break;
        case '-':
            printf("a-b=%d\n",a-b);
            break;
        case '*':
            printf("a*b=%d\n",a*b);
            break;
            case '/':
            if(b!=0)
            printf("a/b=%d\n",a/b);
            else
            printf("Division by zero is not allowed\n");
            break;
            case'%':
            if(b!=0)
            printf("a%%b=%d\n",a%b);
            else
            printf("Division by zero is not allowed\n");
            break;
            default:
            printf("Invalid operator\n");
            break;
            return 0;
    }
}