#include <stdio.h>

int pilha[10] = {0,0,0,0,0,0,0,0,0,0};
int topo = 0;

void mostrar()
{

    printf("=======Pilha atual!=======\n");

    for(int i = 0 ; i < 10 ; i++)
    {
        printf("[%d",pilha[i]);
        printf("]");

    }
    printf("\n\nTOPO: %d",topo);
    printf("\n\n");

}

void acrescentar()
{
    int numero;

    printf("Diga-me o elemento para ser acrescentado na pilha: ");
    scanf("%d",&numero);

    if(topo < 10)
    {
        pilha[topo] = numero;
        topo++;
    }
    else
    {
        printf("Pilha cheia! \n");
    }
}

void decrementar()
{

    if(topo > 0)
    {
        pilha[topo-1] = 0;
        topo--;
    }
    else
    {
        printf("Pilha vazia! \n");
    }
}

void clear()
{

    for(int i = 0 ; i < 10 ; i++)
    {

        pilha[i] = 0;

    }
    topo = 0;
}

int main()
{

    int acao;

    while(acao != 5)
    {

        printf("1 - Adicionar\n");
        printf("2 - Decrementar\n");
        printf("3 - limpar a pilha\n");
        printf("4 - mostrar a pilha \n");
        printf("5 - Sair\n");
        printf("Diga-me... :  ");
        scanf("%d",&acao);

        switch(acao)
        {

        case 1:
            acrescentar();
            break;
        case 2:
            decrementar();
            break;
        case 3:
            clear();
            break;
        case 4:
            mostrar();
            break;
        case 5:
            break;
        default:
            printf("Opcao nao reconhecida...\n");

        }

    }

    return 0;
}
