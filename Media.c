#include<stdio.h>
#include<stdlib.h>

int main(){
 
    float N1, N2, media;

    printf(" Informe a primeira media ");
    scanf("%f", &N1);

    printf("Informe a segunda media ");
    scanf("%f", &N2);

    media =  (N1 + N2) /2;
    
if (media >= 7)
{
    printf("Aprovado, media = %f\n", media);

}
else
{
    printf("Reprovado, media = %f\n", media);
}

    return 0;
}
