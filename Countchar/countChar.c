#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	// ESERCIZIO 1:
	// leggi da stdin fino a EOF e conta i caratteri: '\n', '\t' e ' ' (spazio)
	// dopo EOF, scrive su stdout il numero di occorrenze di ciascuno dei tre caratteri sopra

	char* array = calloc(3, sizeof(char));
	char c;

	while((c = getchar()) != EOF){
		if(c == '\n'){
			array[0]++;
		}
		else if(c == '\t'){
			array[1]++;
		}
		else if(c == ' '){
			array[2]++;
		}
	}

    printf("Il carattere \\n compare %d volte\n", array[0]);
    printf("Il carattere \\t compare %d volte\n", array[1]);
    printf("Il carattere ' ' compare %d volte\n", array[2]);

	return 0;
}
