/*Questao 22 - Carro e caminhonete com caracteres de bloco CP437*/

/*
Mapeamento usado: \xDC = ▄ (meio bloco inferior), \xDB = █ (bloco cheio),
\xDF = ▀ (meio bloco superior), 'O' = roda.

Nota: assim como na Questao 20, a saida so aparece correta em console CP437
(cmd.exe / Windows Terminal); em terminais UTF-8 os bytes aparecem como mojibake.
*/

#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(437);

    /* Carro */
    printf("\xDC\xDC\xDB\xDB\xDB\xDB\xDC\xDC\n");
    printf("\xDFO\xDF\xDF\xDF\xDF\xDFO\xDF\n");

    /* Caminhonete */
    printf("\xDC\xDC\xDB \xDB\xDB\xDB\xDB\xDB\xDB\n");
    printf("\xDFO\xDF\xDF\xDF\xDF\xDFOO\xDF\n");

    system("PAUSE");
    return 0;
}
