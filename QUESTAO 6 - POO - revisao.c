#include <stdio.h> 
 int main() { 
 int i; 
 
 i = 0; 
 

 while (i < 10) { 
 printf("while: %d\n", i); 
 i++; 
 } 
 

 do { 
 printf("do: %d\n", i); 
 i++; 
 } while (i < 10); 
 
 return 0; 
 }
 
 // a) numeros de 0 a 9 usando o while e 10 usando o do while
 // b) while verifica antes de executar, o do while primeiro executa para depois verificar
 // d) while usado quando a repeticao depende de uma condicao, o for usamos quando a condicao ja e previamente conhecida