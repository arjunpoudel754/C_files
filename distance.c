#include<stdio.h>
#include<stdlib.h>
int main() {
    float u, a, t, s;
    int n, i;
    system("cls");
    printf("Enter the initial velocity, u: ");
    scanf("%f", &u);

    printf("Enter the acceleration, a: ");
    scanf("%f", &a);

    printf("Enter the number of intervals, n: ");
    scanf("%d", &n);

    // Check if the number of intervals is positive
    if (n <= 0) {
        printf("Number of intervals should be a positive integer.\n");
        return 0; // Return an error code
    }

    // Calculate and display distance for each interval
    for (i = 1; i <= n; i++) {
        printf("Enter the %d interval, t: ", i);
        scanf(" %f", &t);

        s = u * t + 0.5 * a * t * t;
        printf("The distance at time %.2f second/s is: %.2f\n", t, s);
    }

    return 0;
}
