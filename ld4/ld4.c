#include <stdio.h>
#include <math.h>

double f(double x) {
   
    return cos(sqrt(x));
}

double rectangleRule(double a, double b, double h) {
    double area = 0;
    for (double x = a; x < b; x += h) {
        area += f(x)*h;
    }
    return area;
}

double trapezoidalRule(double a, double b, double h) {
    double area = 0;
    for (double x = a; x < b; x += h) {
        area += (f(x) + f(x+h))*h/2;
    }
    return area;
}

double simpsonsRule(double a, double b, double h) {
    double area = 0;
    for (double x = a; x < b; x += h) {
        area += (f(x) + 4*f(x+h/2) + f(x+h))*h/6;
    }
    return area;
}

int main() {
    double a, b, precision;
    printf("Ievadi vērtību a: ");
    scanf("%lf", &a);
    printf("Ievadi vērtību b: ");
    scanf("%lf", &b);
    printf("Ievadi precizitāti: ");
    scanf("%lf", &precision);

    double h = (b - a) * precision;
    printf("Taisnastūra likuma vērtība: %lf\n", rectangleRule(a, b, h));
    printf("Trapeces likuma vērtība: %lf\n", trapezoidalRule(a, b, h));
    printf("Simposna likuma vērtība: %lf\n", simpsonsRule(a, b, h));
    return 0;
}
