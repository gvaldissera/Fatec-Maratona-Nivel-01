#include <stdio.h>

int main() {
	int i, n, contPares=0;
	
	for(i=1; i<=5; i++) {
		scanf("%d", &n);
		
		if(n % 2 == 0) {
			contPares++;
		}
	}
	
	printf("%d valores pares\n", contPares);
	
	return 0;
}