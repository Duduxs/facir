#include <stdio.h>

/**
@author Eduardo José
@since 12/10/19
@version 1.0.0
*/

int main(){

char str1[30];

printf("Diga-me algo: ");
gets(&str1);

printf("Ola, %s", str1);

return 0;
}
