
// Tejas vilas chaudhari

// Calculate BMI

#include <stdio.h>

float calculatebmi(float weight, float height) {
    return weight / (height * height);
}

int main() {
    float weight, height;
    printf("Enter weight ");
    scanf("%f", &weight);
    printf("Enter height ");
    scanf("%f", &height);

    float bmi = calculatebmi(weight, height);
    printf("Your BMI is  %.2f\n", bmi);
    return 0;
}

