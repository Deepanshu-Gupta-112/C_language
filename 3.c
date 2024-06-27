/*
 * write a  C program that performs temperature conversions 
 * between Celsius to Fahrenheit.
 */

#include<stdio.h>
 

int main(){
	int c;
	printf("Enter the temp In Celesius");
	scanf("%d",&c);
        printf("\ntemperate converted from %d C to %d F",c,9/5*c+32);
        return 0;
}
