#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

	// ESERCIZIO 2:

	// scrivere il seguente programma:

	// legge e salva (in memoria) tutti i dati provenienti da stdin fino a EOF

	// poi scrive su stdout i dati accumulati ma all'incontrario (dall'ultimo al primo)

	// suggerimenti: utilizzare getchar(), calloc(), realloc()
	char* array = calloc(1, sizeof(char));
	char c;
	int counter = 0;

	while((c = getchar()) != EOF){
		array[counter]= c;
		array = realloc(array, sizeof(array)+sizeof(char));
		counter++;
	}

	printf("\n\n");

	for(int i = counter -1; i >= 0; i--){
		putchar(array[i]);
	}

	printf("\n");

	return 0;
}
