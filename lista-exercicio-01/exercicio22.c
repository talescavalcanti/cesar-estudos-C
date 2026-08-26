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
