#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0, result = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    originalNum = num;

  
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

   
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

 
    if (result == num)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");

    return 0;
}

