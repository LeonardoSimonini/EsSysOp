#include <stdio.h>

int main(int argc, char **argv){
	char ch;
	int first, second;
	int result;

	printf("Inserire operando (+ - * /), seguito da due numeri interi:");
	result = scanf("%c %d %d", &ch, &first, &second);

	//verifico che vengano inseriti correttamente gli argomenti
	if(result == 3){
		printf("Input inseriti correttamente\n");
	}
	else{
		printf("Input errati, scanf ha tornato %d \n", result);
		return 1;
	}


	//eseguo le operazioni e verifico che gli operandi inseriti siano corretti
	if(ch == '+'){
		result = first + second;
		printf("Risultato della somma: %d \n", result);
		return 0;
	}
	else if(ch == '-'){
		result = first - second;
		printf("Risultato della differenza: %d \n", result);
		return 0;
	}
	else if(ch == '*'){
		result = first * second;
		printf("Risultato della moltiplicazione: %d \n", result);
		return 0;
	}
	else if(ch == '/'){
		if(second == 0){
			printf("Impossibile fare il rapporto con zero!\n");
			return 1;
		}
		result = first / second;
		printf("Risultato del rapporto: %d \n", result);
		return 0;
	}
	else{
		printf("Operando non valido! \n");
		return 1;
	}

	return 1;
}
