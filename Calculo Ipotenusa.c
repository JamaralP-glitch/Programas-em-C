#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	int x1, x2, y1, y2;
	float dis, p1, p2;
	
	printf("Informe o valor de (x1,y1): ");
	scanf("\n%d", &x1);
	scanf("\n%d", &y1);
	
	printf("Informe o valor de (x2,y2): ");
	scanf("%d", &x2);
	scanf("%d", &y2);
	
	
	p1 = pow(x2-x1,2);
	p2 = pow(y2-y1,2);
	
	dis =  sqrt(p1+p2);
	
	printf("Valor é: %f ", dis);
	return 0;
}
