#include <stdio.h>

/**
@author Eduardo José
@since 12/10/19
@version 1.0.0
*/

int main(){

char str1[9];
int contador = 0;
printf("Diga-me algo: ");
gets(&str1);

for(int i = 0 ; i < str1[i] ; i++){
contador++;
}
if(contador < 9){
printf("Sua string tem %i de tamanho", contador);
}
else{
    printf("A string so tem 9 espacos! [0] a [8]");
}
return 0;
}
