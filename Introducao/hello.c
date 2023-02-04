#include <stdio.h>

int main(void)
{
    char nome[10];
    
    printf("Digite o seu nome:");
    scanf("%s", nome);

    printf("Hello %s\n", nome);

    return 0;
}
