#include <stdio.h>
 
int main() {
	int i, contValoresPositivos=0;
	double n, soma, media;
	
	for (i=1; i<=6; i++) {
		scanf("%lf", &n);
		
		if (n > 0) {
			contValoresPositivos++;
			soma = soma + n;
		}
	}
	
	media = soma / contValoresPositivos;
	
	printf("%d valores positivos\n", contValoresPositivos);   
	printf("%.1lf\n", media);   
   	
    return 0;
}