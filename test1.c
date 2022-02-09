#include <stdio.h>

void input(int *pa, int *pb)
{
int a, b;
  printf("Enter Numbers : ");
  scanf("%d %d",pa,pb);
}

int main()
{
  int a,b;
  
  
  input(&a,&b);
  printf("%d %d \n",a,b);
  return 0;
}