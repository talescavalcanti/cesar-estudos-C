/*Questao 20 - Moldura 4x4 com caracteres graficos CP437*/

/*
Cantos: \xC9 (sup. esq.), \xBB (sup. dir.), \xC8 (inf. esq.), \xBC (inf. dir.)
Retas: \xCD (horizontal), \xBA (vertical)

Nota: a saida so aparece correta em console configurado para a codepage 437
(cmd.exe / Windows Terminal). Terminais que assumem UTF-8 (como o git-bash usado
para rodar este arquivo) exibem os bytes de forma incorreta (mojibake).
*/

#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(437);

    printf("\xC9\xCD\xCD\xBB\n");
    printf("\xBA  \xBA\n");
    printf("\xBA  \xBA\n");
    printf("\xC8\xCD\xCD\xBC\n");

    system("PAUSE");
    return 0;
}
