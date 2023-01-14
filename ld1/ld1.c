#include<stdio.h>
#include<math.h>
int main()
{
long double a = 1.L, b = 1.L;
double x, y, S, S2;
int k = 0;
 printf("Funkcijas cos(sqrt(x)) aprēķināšana!\n");
 printf("Ievadi argumentu x:");
 scanf("%lf", &x);
 y = cos(sqrt(x));
 printf("cos(sqrt(%lf)) = %lf \n\n", x, y);

 a = pow(-1,k)*pow(x,k)/(1.);
 S = a;
printf("a0 = %Le  S0 = %lf\n", a, S);

 b = pow(-1,k)*pow(x,k)/(1.);
 S2 = b;

while(k<501)
{
    k++;
    a = a * ((-1*x)/(4*pow(k,2)-2*k));
    S = S + a;
   }

   k = 0;
   while(k<500)
   {
    k++;
    b = b * ((-1*x)/(4*pow(k,2)-2*k));
    S2 = S2 + b;
   }

 printf("a499 = %Le  S499 = %lf\n", b, S2);
 printf("a500 = %Le  S500 = %lf\n", a, S);
 printf("cos(sqrt(%lf)) caur summu = %lf \n\n", x, S);
 printf(" \n          500\n");
    printf("          ______\n");
    printf("          \\                k    k\n");
    printf("           \\           (-1) * x\n");
    printf("cos(sqrt(x)) = >      _______________ \n");
    printf("           /            (2 * k)! \n");
    printf("          /_____\n");
    printf("           k=0\n");
    printf("\n");
    printf("                            -x\n");
    printf("rekurences reizinātājs : __________\n");
    printf("                            2\n");
    printf("                          4k - 2k\n");
 return 0;
}
