// O que é um vetor?
// Um vetor é uma estrutura de dados que armazena uma coleção de elementos do mesmo tipo em posições de memória contíguas. Em C, um vetor é declarado como um array e os elementos são acessados por meio de índices.

// a) Funcionamento de um vetor em C
//	Em C, um vetor é simplesmente um bloco contíguo de memória onde os elementos são armazenados sequencialmente.
//	O nome do vetor representa o endereço do primeiro elemento (ponteiro para o primeiro índice).
//	Elementos são acessados usando índices, começando em 0.
//Declaração e uso de um vetor
//int numeros[5] = {10, 20, 30, 40, 50};
//printf("%d\n", numeros[2]); // Exibe 30
//Alocação de memória em um vetor
//Os elementos do vetor são armazenados em posições consecutivas. Exemplo para um vetor int:
//Endereço   Valor
//0x1000     10
//0x1004     20
//0x1008     30
//0x100C     40
//0x1010     50

// b) O que é uma string e como ela é tratada em C?
// Uma string em C é uma sequência de caracteres armazenados em um vetor de char, terminada pelo caractere nulo (\0).
// Declaração e inicialização de strings
// char nome[] = "Lucas";  // 'L' 'u' 'c' 'a' 's' '\0'
// char nome2[6] = {'L', 'u', 'c', 'a', 's', '\0'};
// Manipulação de strings
//	Strings podem ser modificadas, pois são vetores.
//	Não usamos == para comparar strings, pois nome1 == nome2 compara endereços, não os conteúdos.

