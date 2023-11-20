#include <stdio.h>
 
int main() {
	int pedido, qtd;
	double total;
	
	scanf("%d", &pedido);
	scanf("%d", &qtd);
	
	if (pedido == 1) {
		total = qtd * 4;
		} else if (pedido == 2) {
			total = qtd * 4.50;
			} else if (pedido == 3) {
				total = qtd * 5;
				} else if (pedido == 4) {
					total = qtd * 2;
					} else {
						total = qtd * 1.50;	
					}
					
	printf("Total: R$ %.2lf\n", total); 
    
    return 0;
}