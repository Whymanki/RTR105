#include <stdio.h>
#include <math.h>

double f(double x) {
    // replace this with your own function
    return cos(sqrt(x));
}

double df_analytical(double x) {
    // replace this with the analytical derivative of your own function
    return -sin(sqrt(x))/(2*sqrt(x));
}

double df_forward_difference(double x, double h) {
    return (f(x + h) - f(x)) / h;
}

double d2f_analytical(double x) {
    // replace this with the analytical second derivative of your own function
    return ((-cos(sqrt(x))/x + (sin(sqrt(x))/pow(x, 1.5))))/4;
}

double d2f_forward_difference(double x, double h) {
    return (f(x + h) - 2*f(x) + f(x - h)) / (h*h);
}

int main() {
    double a, b, precision;
    printf("Enter a value for a: ");
    scanf("%lf", &a);
    printf("Enter a value for b: ");
    scanf("%lf", &b);
    printf("Enter a value for precision: ");
    scanf("%lf", &precision);

    FILE *fp;
    fp = fopen("derivativess.dat", "w");
if(fp == NULL)
    {
      printf("Error!");
      return 1;
    }
    double x;
    for (x = a; x <= b; x += precision) {
        double fx = f(x);
        double dfx_analytical = df_analytical(x);
        double dfx_forward_difference = df_forward_difference(x, precision);
        double d2fx_analytical = d2f_analytical(x);
        double d2fx_forward_difference = d2f_forward_difference(x, precision);
        fprintf(fp, "%lf %lf %lf %lf %lf %lf\n", x, fx, dfx_analytical, dfx_forward_difference, d2fx_analytical, d2fx_forward_difference);
    }

    fclose(fp);
    return 0;
}
