// 3.	Write a program to add two number using 4 function	(pass by reference)

#include <stdio.h>
void input_two_numbers(int *a, int *b)
{
    printf("Enter two numbers\n");
    scanf("%d%d",a,b); 		/* Think why no & */
}



void find_sum(int a, int b, int *sum)
{
    *sum = a+b;
}

void output(int a, int b, int c)
{
    printf("Sum of %d + %d is %d\n",a,b,c);
}

int main()
{
    int x,y,z;
    input("%d,%d",&x,&y);
    find_sum(x,y,&z);
    output(x,y,z);
    return 0;
}
