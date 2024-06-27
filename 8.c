/*
 *Write a program that takes a temperature value as input and uses if statements to print advice based on the temperature:
Above 30: "It's hot outside, stay hydrated!"
Between 20 and 30: "The weather is nice and warm."
Between 10 and 19: "It's a bit chilly, wear a jacket."
Below 10: "It's cold outside, stay warm!"
 */

#include <stdio.h>

int main() {
    float temperature;
    printf("Enter the temperature: ");
    scanf("%f", &temperature);

    if (temperature > 30) {
        printf("It's hot outside, stay hydrated!\n");
    } else if (temperature >= 20 && temperature <= 30) {
        printf("The weather is nice and warm.\n");
    } else if (temperature >= 10 && temperature < 20) {
        printf("It's a bit chilly, wear a jacket.\n");
    } else if (temperature < 10) {
        printf("It's cold outside, stay warm!\n");
    } else {
        printf("Invalid input. Please enter a valid temperature.\n");
    }

    return 0;
}


