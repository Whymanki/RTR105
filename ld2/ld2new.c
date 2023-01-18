#include <stdio.h>
#include <math.h>

double func(double x) {
    return cos(sqrt(x));
}

int main() {
    double a, b, c, precision, x, fx;
    int iterations;

    printf("Ievadi intervāla sākumu (a>0): ");
    scanf("%lf", &a);
    printf("Ievadi intervāla galu (b): ");
    scanf("%lf", &b);
    printf("Ievadi vērtību c (from -1 to 1): ");
    scanf("%lf", &c);
    printf("Ievadi precizitāti: ");
    scanf("%lf", &precision);

    double mid = (a+b)/2;
    fx = func(mid);
    iterations = 1;

if ((fx-c)*(func(a)-c) > 0)
{
    printf("Intervala [%.2f : %.2f] funkcijai cos(sqrt(x)) ", a, b);
      printf("Sakņu nav vai ir vairākas saknes)\n");
      return 1;
      }

    while(fabs(fx-c) > precision) {
        if((fx-c)*(func(a)-c) < 0) {
            b = mid;
        } else {
            a = mid;
        }
        mid = (a+b)/2;
        fx = func(mid);
        iterations++;
    }
    x = mid;
    printf("x = %lf\n", x);
    printf("f(x) = %lf\n", fx);
    printf("Iterāciju skaits: %d\n", iterations);

    return 0;
}
