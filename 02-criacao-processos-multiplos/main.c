/*
	Disciplina: Sistemas Operacionais
	Tema: Criação de processos - Exemplo 02
	
	Descrição: Criação de processos com chamada ao sistema fork(). Múltiplas chamadas em sequência
	
	Autor: Alexandre Moraes Tannus
	Data: 03/03/2021
*/

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
	fork();
	fork();
	fork();
	
	printf("Hello World\n");
	return 0;
}
