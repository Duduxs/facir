#include <stdio.h>
#include <string.h>



/**
@author Eduardo José
@since 12/10/19
@version 2.0.0
*/


int main(){

    #define TAMANHO 20
    char str1[TAMANHO], str2[TAMANHO];
    int i = 0, x,y;

    printf("Entre com os dados da string 1 : ");
    gets(str1);

    printf("Entre com os dados da string 2 : ");
    gets(str2);

    x = strlen(str1);
    y = strlen(str2);



    printf("\n--------------\n");
    printf("PRIMEIRA FRASE\n");
    printf("--------------\n");
    for(i = x ; i >= 0 ; i--){
    

        if(str1[i] == 'A' ){
        
            str1[i] = '*';
        }
        printf("%c",str1[i]);
    }
    printf("\n--------------\n");
    printf("SEGUNDA FRASE\n");
    printf("--------------\n");

    for(i = y ; i >= 0 ; i--){
    

        if(str2[i] == 'A' ){
        
            str2[i] = '*';
        }
        printf("%c",str2[i]);
    }


    return 0;

}
