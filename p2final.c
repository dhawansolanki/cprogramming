// 2.	Write a program to add two number using 4 function	(pass by value)

#include <stdio.h>
int input()
{
    int a; 
    printf("Enter the Number : ");
    scanf("%d",&a);
    return a;

}

int find_sum(int a, int b)
{
    int sum;
    sum = a+b;
    return sum;
}

void output(int a, int b, int c)
{
    printf("Sum of %d + %d is %d\n",a,b,c);
}

int main()
{
    int x,y,z;
    x=input();
    y=input();
    z=find_sum(x,y);
    output(x,y,z);
    return 0;
}
