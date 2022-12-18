#include <stdio.h>
 int  main()
  {
     unsigned char a;
     char b, c;
       printf("Вводи свои циферки(одно натуральное десятичное):\n");
       scanf("%hhu",  &a);
       printf("Вот Вам перевел:\n");
       printf("Из (DEC)%hhu в (BIN)", a);
      for(b = 7; b >= 0; b--)
    {
     c = a >> b;
     if(c & 1)
      printf("1");
     else
      printf("0");
    }
   printf("\n");
  return 0;
  }
