//Write a program to find the roots of a quadratic equation and categorize them.
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,r1,r2,real,img;
    printf("Enter coefficients a,b and c:");
    scanf("%f%f%f",&a,&b,&c);   
    d=b*b-4*a*c;
    if(d>0)
    {
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b+sqrt(d))/(2*a);
        printf("Roots are Real and Different\n");
        printf("r1=%.2f and r2=%.2f\n",r1,r2);
    }
    else if(d==0)
    {
        r1=r2=-b/(2*a);
        printf("Roots are Real and Same\n");
        printf("r1=r2=%.2f\n",r1);
    }
    else {
        real=-b/(2*a);
        img=sqrt(-d)/(2*a);
        printf("Roots are Complex and Different\n");
        printf("r1=%.2f+%.2fi and r2=%.2f-%.2fi\n",real,img,real,img);

        }

        return 0;
}
/*
Enter coefficients a,b and c:-1 -3 2
Roots are Real and Different
r1=-3.56 and r2=-3.56

Enter coefficients a,b and c:1 -2 1
Roots are Real and Same
r1=r2=1.00

Enter coefficients a,b and c:1 2 5
Roots are Complex and Different
r1=-1.00+2.00i and r2=-1.00-2.00i
*/