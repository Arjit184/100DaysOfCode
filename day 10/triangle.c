//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include<stdio.h>
int main()
{  
    int s1,s2,s3;
    printf("Enter the sides of the triangle:\n");
    scanf("%d %d %d",&s1,&s2,&s3);
    if(s1+s2>s3 && s2+s3>s1 && s1+s3>s2)
    {
        if(s1==s2 && s2==s3)
            printf("The triangle is equilateral.\n");
            else if(s1==s2 || s2==s3 || s1==s3)
                printf("The triangle is isosceles.\n");
                else if((s1*s1==s2*s2+s3*s3) || (s2*s2==s1*s1+s3*s3) || (s3*s3==s1*s1+s2*s2))
                    printf("The triangle is right-angled.\n");
                else if( (s1!=s2) && (s2!=s3) && (s1!=s3))
                    printf("The triangle is scalene.\n");
    }
                
                else
                    printf("The triangle is not valid.\n");
                    return 0;



}
