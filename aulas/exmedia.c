#include <stdio.h>
#include <stdlib.h>

int main(){

    float nota, media = 0;

    for(int i = 1; i <= 4; i++){
        
        printf("Digite a %d nota: ", i);
        scanf("%f", &nota);
        media += nota;
    }

    printf("A média das notas é: %.2f\n", media / 4.0);
    
    return 0;




}