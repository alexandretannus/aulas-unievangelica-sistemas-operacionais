/*
	Disciplina: Sistemas Operacionais
	Tema: Criação de processos - Exemplo 03
	
	Descrição: Criação de processos com chamada ao sistema fork() com verificação da ordem de execução dos processos pai e filho
	
	Autor: Alexandre Moraes Tannus
	Data: 03/03/2021
*/

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
	if (fork() == 0) {
		printf("Hello from child\n");
	} else {
		printf("Hello from parent\n");
	}
	
	return 0;
}
