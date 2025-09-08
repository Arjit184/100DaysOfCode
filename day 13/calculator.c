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
/*
Enter two numbers:4 2
Enter an operator (+,-,*,/,:+
a+b=6

Enter two numbers:10 3
Enter an operator (+,-,*,/,:%
a%b=1

Enter two numbers:15 5
Enter an operator (+,-,*,/,:/
a/b=3
*/