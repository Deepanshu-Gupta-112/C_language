#include<stdio.h>
int main(){
	int n;
	printf("Enter the number");
	scanf("%d",&n);
	int sum=0;
	while(n>0){
	   int rem=n%10;
	   sum+=rem;
	   n/=10;
	}
	printf("Sum of it digit = %d",sum);
        printf("\n");
	return 0;
}
