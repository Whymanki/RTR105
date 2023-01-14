#include<stdio.h>
#include<math.h>

 int main()
 {

  float a, b, x, c, delta_x, funkca, funkcb;
  int k = 0;

  printf("Ievadi intervāla sākuma vērtību a: ");
  scanf("%f", &a);

  printf("Ievadi intervālā beigu vērtību b: ");
  scanf("%f", &b);

  printf("Ievadi vērtību c: ");
  scanf("%f", &c);

  printf("Ievadi precizitāti: ");
  scanf("%f", &delta_x);
   funkca = cos(a);
  funkcb = cos(b);

 if(funkca * funkcb > 0)
 {

      printf("Intervala [%.2f : %.2f] cos(x) ", a, b);
      printf("Sakņu nav (Pāru saknes)\n");
     }

    else{

      while(fabs(cos(x) - c) > delta_x)
      {
       if(cos(x) > c)
       b = x;
       else
       a = x;
       k++;
       x = (a + b) / 2;
      }

    printf("Interāciju skaits %d \n", k);
    printf("c = cos(x) --> %f = %.5f \n", c, cos(x));
    printf("Pēc x ar Dihotomijas metodi cos(%3f) = %3f \n", x, cos(x));
    }

  return 0;
 }
