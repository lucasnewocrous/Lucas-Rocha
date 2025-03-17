// a) Qual a diferença entre as estruturas pilha e fila?
// A principal diferença está na forma como os elementos são inseridos e removidos:
//	Pilha (Stack): segue o princípio LIFO (Last In, First Out), ou seja, o último elemento inserido é o primeiro a ser removido. Exemplo: uma pilha de pratos – você coloca um prato no topo e retira sempre o de cima primeiro.
//	Fila (Queue): segue o princípio FIFO (First In, First Out), ou seja, o primeiro elemento inserido é o primeiro a ser removido. Exemplo: uma fila de banco – a primeira pessoa que chega é a primeira a ser atendida.

// b) Quais as vantagens da fila? Quais suas desvantagens?
// Vantagens:
//	Mantém a ordem dos elementos, garantindo que o primeiro a entrar seja o primeiro a sair.
//	Útil para processos que exigem um fluxo linear, como filas de impressão ou processamento de tarefas.
//	Implementação eficiente em algumas estruturas (como filas circulares).
// Desvantagens:
//	Pode ser menos eficiente para certas operações de busca, pois geralmente exige percorrer a estrutura inteira.
//	Pode desperdiçar espaço em implementações com array se não for usada uma fila circular.

// c) Quais as vantagens da pilha? Quais suas desvantagens?
// Vantagens:
//	Simplicidade de implementação e eficiência para operações de inserção e remoção.
//	Útil para problemas que exigem rastreamento de estados (exemplo: chamadas recursivas, desfazer/refazer em editores).
//	O tempo de execução para push (inserir) e pop (remover) é O(1).
// Desvantagens:
//	Acesso restrito aos elementos (só o topo pode ser removido).
//	Pode consumir mais memória se usada em recursões profundas, levando a estouro de pilha (stack overflow).

// d) Quais as suas aplicações?
//	Fila:
//	Sistemas de atendimento (exemplo: filas de banco, processamento de chamadas).
//	Impressoras (os documentos são impressos na ordem de chegada).
//	Algoritmos de busca em largura (BFS) em grafos.
//	Processamento de tarefas em sistemas operacionais.
//	Pilha:
//	Implementação de recursão (a pilha de chamadas da CPU usa essa estrutura).
//	Algoritmos de reversão (como inverter uma string).
//	Sistemas de desfazer/refazer em editores de texto.
//	Avaliação de expressões matemáticas (uso de notação pós-fixada - postfix).
