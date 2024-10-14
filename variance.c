#include <stdio.h>
#include <math.h>

// Function to calculate average and variance
void calculateAverageAndVariance(const int marks[], int n, float *average, float *variance) {
    // Calculate the average
    int sum = 0,i;
    for (i = 0; i < n; i++) {
        sum += marks[i];
    }
    *average = (float)sum / n;

    // Calculate the variance
    float sumSquaredDifferences = 0;
    for (i = 0; i < n; i++) {
        sumSquaredDifferences += pow(marks[i] - *average, 2);
    }
    *variance = sumSquaredDifferences / n;
}

int main() {
    int n;
    printf("Enter the number of marks: ");
    scanf("%d", &n);

    int marks[n],i;
    printf("Enter the marks:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }

    float average, variance;
    calculateAverageAndVariance(marks, n, &average, &variance);

    printf("Average: %.2f\n", average);
    printf("Variance: %.2f\n", variance);

    return 0;
}
