#include <stdio.h>

int main() {
    float weight, height, bmi;

   
    printf("Enter weight (in kg): ");
    scanf("%f", &weight);
    printf("Enter height (in meters): ");
    scanf("%f", &height);

  
    bmi = weight / (height * height);

    if (bmi < 18.5) {
        printf("BMI Category: Underweight\n");
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        printf("BMI Category: Normal weight\n");
    } else if (bmi >= 25 && bmi <= 29.9) {
        printf("BMI Category: Overweight\n");
    } else {
        printf("BMI Category: Obesity\n");
    }

    return 0;
}

