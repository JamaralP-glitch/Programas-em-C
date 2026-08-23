#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    float a, b, c, maior_temp, maior;
    
    printf("Informe os tres valores: ");
    scanf("%f %f %'f", &a, &b, &c);
    
    maior_temp = ((a + b) + fabs(a - b)) / 2.0;
    
    maior = ((maior_temp + c) + fabs(maior_temp - c)) / 2.0;
    
    printf("O maior entre |%f| |%f| |%f| = %f\n", a, b, c, maior);

    return 0;
    
 }
