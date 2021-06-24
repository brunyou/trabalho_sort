#include "bibli.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <locale.h>

set locale(LC_ALL, "Portuguese");

int arqP[tam];

void gerarArqP(int tam)
{
    if (tam < 0 || tam > 100){
        cout << "\n Ei! Este tamanho não é compatível com o tamanho PEQUENO! " << endl;
    else{
    int arqP[tam];

        for(int i = 0; i<tam; i++){
            arqP[i] = rand() % tam;
            cout << arqP[i] << endl;
        }
}
};
#endif // ARQUIVOS
