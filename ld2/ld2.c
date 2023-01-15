#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, precision, x, fx, prev_x;
    int i, iterations = 0;

    printf("Enter value of a: ");
    scanf("%lf", &a);

    printf("Enter value of b: ");
    scanf("%lf", &b);

    printf("Enter value of c: ");
    scanf("%lf", &c);

    printf("Enter precision: ");
    scanf("%lf", &precision);

    x = (a+b)/2;
    fx = cos(sqrt(x));

    while (fabs(fx-c) > precision) {
        if (fx < c) {
            a = x;
        } else {
            b = x;
        }

        prev_x = x;
        x = (a+b)/2;
        fx = cos(sqrt(x));

        iterations++;

        if (fabs(x - prev_x) < precision) {
            break;
        }
    }

    printf("x = %.10lf\n", x);
    printf("c = cos(sqrt(x)) --> %f = %.10lf \n", c, cos(sqrt(x)));
    printf("f(x) ar Dihotomijas metodi = %.10lf\n", fx);
printf("Interāciju skaits: %d\n", iterations);
    return 0;
}
