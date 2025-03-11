#include <stdio.h>

float calculate_average(int numbers[], int count);

int main() {
    int n;
    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);
    int numbers[n];
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    float average = calculate_average(numbers, n);
    printf("The average of the entered numbers is: %.2f\n", average);
    return 0;
}
float calculate_average(int numbers[], int count) {
    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += numbers[i];
    }
    return (float)sum / count;
}
