#include <stdio.h>

int main() {
	int i, N, resultado;
	
	scanf("%d", &N);
	
	for (i = 1; i <= N; i++) {
		
		if ( i % 2 == 0 ) {
			
			resultado = i * i;
			
			printf("%d^2 = %d\n", i, resultado);	
		}
	}
	
	return 0;
}