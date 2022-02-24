#include <stdio.h>

int input(){
  int a;
  printf("Enter A Number : ");
  scanf("%d", &a);
  return a;
}

int cmp(int a, int b, int c){
  if(a>b && a>c)
  {
    return a;
  }
  else if(b>a && b>c){
    return b;
  }
  else if(c>a && c>b){
    return c;
  }
}
void output(int a, int b, int c, int largest){
  printf("The Greatest Number from %d , %d & %d is %d \n",a,b,c,largest);
}

int main(){
  int x, y, z, largests;
  x = input();
  y = input();
  z = input();
  largests = cmp(x,y,z);
  output(x,y,z,largests);
}