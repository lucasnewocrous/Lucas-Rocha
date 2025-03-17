// a) Modos de abertura de arquivos em C

// "r"	Abre um arquivo para leitura. O arquivo deve existir, senão ocorre erro.
// "w"	Abre um arquivo para escrita. Se existir, ele é apagado e recriado. Se não existir, um novo é criado.
// "a"	Abre um arquivo para adição (append). Os dados são escritos no final do arquivo. Se o arquivo não existir, ele é criado.
// "r+"	Abre um arquivo para leitura e escrita sem apagar seu conteúdo. O arquivo deve existir.
// "w+"	Abre um arquivo para leitura e escrita. Apaga o conteúdo do arquivo, se ele existir. Se não existir, um novo é criado.
// "a+"	Abre um arquivo para leitura e escrita, mantendo o conteúdo original e adicionando novos dados no final.
// Todos esses modos podem ser combinados com "b" para arquivos binários (ex: "rb", "wb", "rb+").

// b) Funcionamento das funções fgets, fprintf, fread, fwrite
// fgets (Leitura de texto)
//	Lê uma linha de um arquivo e armazena em um array de caracteres (char).
//	Formato: 
//	char *fgets(char *str, int tamanho, FILE *arquivo);
//	Lê no máximo tamanho-1 caracteres e adiciona \0 no final.
	
// fprintf (Escrita de texto formatada)
//	Funciona como printf, mas escreve em um arquivo.
//	Formato: 
//	int fprintf(FILE *arquivo, const char *formato, ...);

// fread (Leitura de dados binários)
//	Lê um bloco de dados binários de um arquivo.
//	Formato: 
//	size_t fread(void *ptr, size_t tamanho, size_t qtd, FILE *arquivo);

// fwrite (Escrita de dados binários)
//	Escreve um bloco de dados binários no arquivo.
//	Formato: 
//	size_t fwrite(const void *ptr, size_t tamanho, size_t qtd, FILE *arquivo);
	