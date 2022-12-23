#include <stdio.h>
#include "library.h"

int main(void) {
print_hello(); 
print_num(24); 

int number = get_number(); 
printf("Return number: %d\n", number);

int plus = sum(2, 4); 
printf("Summa: %d\n", plus);

return 0;
}