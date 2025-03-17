#include <stdio.h>
#include <string.h>

#define NOTA_MINIMA 7.0
#define FREQUENCIA_MINIMA 75.0

int main() {
    char nome[50];
    float nota;
    float frequencia;

    printf("Digite o nome do estudante: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0'; 
    
    
    fflush(stdin);
    
    printf("Digite a nota do estudante: ");
    if (scanf("%f", &nota) != 1) {
        printf("Erro na entrada da nota.\n");
        return 1;
    }
    
    printf("Digite a frequência do estudante (em %%): ");
    if (scanf("%f", &frequencia) != 1) {
        printf("Erro na entrada da frequência.\n");
        return 1;
    }


    if (nota >= NOTA_MINIMA && frequencia >= FREQUENCIA_MINIMA) {
        printf("%s foi APROVADO!\n", nome);
    } else {
        printf("%s foi REPROVADO.\n", nome);
    }
    
    return 0;
}