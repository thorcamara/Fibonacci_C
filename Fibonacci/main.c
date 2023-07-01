#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int i, ant1, ant2, atual;
	ant1 = 1;
	ant2 = 0;
	
	printf("Serie de Fibonacci (8 primeiros termos):\n");
	printf("%d ", ant2);
	printf("%d ", ant1);
	
	// Utilizando for
	for(i=3; i<=8; i++){
		atual = ant1 + ant2; 
		printf("%d ", atual);
		ant2 = ant1;
		ant1 = atual;
	}

	// Utilazando while
//	i = 3;
//	while(i<=8){
//		atual = ant1 + ant2; 
//		printf("%d ", atual);
//		ant2 = ant1;
//		ant1 = atual;
//		i++;
//	}
	
	
	
	return 0;
}
