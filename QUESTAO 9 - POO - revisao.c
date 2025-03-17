#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno {
    char nome[100];  
    int faltas;      
    float nota;      
} aluno_t;

int main() {
    aluno_t *aluno;  
    aluno = (aluno_t *)malloc(sizeof(aluno_t));

    if (aluno == NULL) { 
        printf("Erro ao alocar memória!\n");
        return 1;
    }

 
    printf("Digite o nome do aluno: ");
    fgets(aluno->nome, sizeof(aluno->nome), stdin);

    printf("Digite o número de faltas: ");
    scanf("%d", &aluno->faltas);

    printf("Digite a nota do aluno: ");
    scanf("%f", &aluno->nota);


    printf("\nInformações do aluno:\n");
    printf("Nome: %s", aluno->nome);
    printf("Faltas: %d\n", aluno->faltas);
    printf("Nota: %.2f\n", aluno->nota);

   
    int porcentagem_faltas = (aluno->faltas * 100) / 60;  

    if (aluno->nota >= 6 && porcentagem_faltas < 25) {
        printf("Aluno aprovado!\n");
    } else {
        printf("Aluno reprovado.\n");
    }

    free(aluno);

    return 0;
}
