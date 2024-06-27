/*
 *
 * Write a program to perform simple 
 * arithmetic operation on two integers.
 *
 */

#include<stdio.h>

int main(){
  int a,b;
  printf("Enter the value of a\n");
  scanf("%d",&a);
  printf("Enter the value of b\n");
  scanf("%d",&b);
  printf("Enter the Arthmetic Operation\n");
  char op;
  scanf(" %c",&op);
  printf("\n"); 
  switch(op){
	case '+':
	  printf("%d",a+b);
	  break;
        case '-':
          printf("%d",a-b);
          break;
	case '*':
          printf("%d",a*b);
          break;
        case '/':
          printf("%d",a/b);
          break;
        default:
	  printf("You have enter wrong");
	  break;
  }

  printf("\n");
  return 0;
}
