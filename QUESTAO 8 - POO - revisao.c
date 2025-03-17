//a) Qual o comportamento da função free?
//A função free libera a memória previamente alocada dinamicamente por funções como malloc, calloc ou realloc, tornando-a disponível para futuras alocações. No entanto, free não altera o valor do ponteiro, apenas marca a memória como disponível para o sistema operacional.

//b) Após chamar free, o ponteiro pode ser utilizado?
//Depende:
//	O ponteiro ainda existe, mas aponta para uma região de memória liberada. Acessá-lo após free pode levar a comportamento indefinido (crashes, corrupção de memória).
//	Para evitar problemas, é boa prática atribuir NULL ao ponteiro após free.

//c) O que causa vazamentos de memória?
//Vazamentos de memória ocorrem quando a memória alocada não é liberada corretamente, resultando em consumo excessivo de RAM. Algumas causas comuns incluem:
//	Esquecer de chamar free após malloc/calloc.
//	Perder a referência do ponteiro sem liberar a memória.
//	Sair do escopo sem liberar a memória alocada.

//d) O que a instrução malloc retorna quando não consegue realizar a alocação?
//Se malloc não conseguir alocar memória, ele retorna NULL. Isso pode acontecer por falta de memória disponível. 

//e) Explique a instrução calloc.
//A função calloc aloca memória para um array de elementos e inicializa todos os bytes com zero.
//void *calloc(size_t num, size_t size);


