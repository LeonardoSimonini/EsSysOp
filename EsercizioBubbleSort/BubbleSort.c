#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

// ESERCIZIO PER CASA:
// esempio con bubble sort
void bubble_sort(int * array, int array_dimension);
void swap(int *x, int *y);

int main(int argc, char *argv[]){
	int rnd_array_int [] = {
    		-1958, 140, 607, 1447, -22, -1400, -1748, -1150, 1623, -971, 891, -94, 1805, 105, 814, 1286, -1791, 359, -1277, -520, -1535, 663, -533, -383, -979, -694, -748, 347, 495, -169, -157, -751, 1302, -1307, -405, 311, 595, 1344, -604, -262, 777, 779, 1491, 13, 1333, 357, -240, -197, 685, 1309, 195, -207, -1545, 601, -1227, 1411, 172, 1487, 572, -1268, 1719, 1276, -1943, -352, -1366, -263, -1955, 118, -1407, -582, -1229, 193, 1818, -188, -594, 688, 1534, -1458, 1455, -1623, -1167, 1208, -1383, 1022, -1465, -1586, -300, 851, 515, 1959, 659, 486, 1039, 115, -1063, -591, 566, -1609, 655, -1410
    };
    
    int rnd_array_int_len = sizeof(rnd_array_int) / sizeof(int);
    
        // SCRIVERE bubble_sort (definizione più sotto)
    bubble_sort(rnd_array_int, rnd_array_int_len);

    printf("risultato di bubble_sort():\n");

    for (int i = 0; i < rnd_array_int_len; i++) {
    	printf("%d ", rnd_array_int[i]);
    }

    printf("\n");

	// quando il programma termina, tutte le allocazioni di memoria sono automaticamente liberate
	return EXIT_SUCCESS;

}



void bubble_sort(int * array, int array_dimension) {
	int swapped = 1;
	while(swapped){
	  swapped = 0;
	  for(int i = 0; i < array_dimension-1; i++){
	     if(array[i] > array[i+1]){
	       swap(&array[i], &array[i+1]);
	       swapped = 1;
	     }
	  }
	}
	return;
}


void swap(int *x, int *y) {
	int t = *x;
	*x = *y;
	*y = t;
}