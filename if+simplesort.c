#include<stdio.h>
 int  main()
 {
    char let1, let2 ,let3;
    int a;
    printf("If you want program to sort the characters in ascending order, type 1");
    printf("\nIf you want program to sort the characters in descending order, type 0");
    printf("\nType your 3 letters\n");
    scanf("%d %c %c %c",&a , &let1 ,&let2 ,&let3);
    if(a==1)
    {
    if(let1 <= let2 && let1 <= let3)
    {
        if(let2 <= let3)
            printf("%c, %c, %c ", let1, let2, let3);
            else
            printf("%c, %c, %c ", let1, let3, let2);
    }
    else
    {
        if(let2 <= let1 && let2 <= let3)
        {
            if(let1 <= let3)
            printf("%c, %c, %c", let2, let1, let3);
            else
             printf("%c, %c, %c", let2, let3, let1);
        }
    else
    {
       if(let2 <= let1)
        printf("%c, %c, %c", let3, let2, let1);
        else
         printf("%c, %c, %c", let3, let1, let2);
    }
    }
 }
 if (a==0)
 {
    if (let1 >= let2 && let1 >= let3)
    {
        if(let2 >= let3) 
        printf("%c, %c, %c", let1, let2, let3);
        else
        printf("%c, %c, %c", let1, let3, let2);
    }
    else{
         if(let2 >= let1 && let2 >= let3)
         {
             if(let1 >= let3)
             printf("%c, %c, %c", let2, let1, let3);
             else
              printf("%c, %c, %c", let2, let3, let1);

         }
         else
         {
            if(let2 >= let1)
            printf("%c, %c, %c", let3, let2, let1);
            else
            printf("%c, %c, %c", let3, let1, let2);
         }
    }
 }
 }
