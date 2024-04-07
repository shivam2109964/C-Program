#include<stdio.h>
#include<math.h>

int main(){
  float x, value, y;
  printf("Enter the value of x \n");
  scanf("%d",&x);

  value = x - 1 / 1;

  for(int i = 1; i <= 7; i++){
    y += value + pow(value, i) / 2; 
  }
  printf("%f\n",y);
}