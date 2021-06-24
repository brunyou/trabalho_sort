#ifndef BIBLI_H_INCLUDED
#define BIBLI_H_INCLUDED

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <locale.h>
#include <iostream>

using namespace std;

void gerarArqP(int tam){
    if (tam < 0 || tam > 100){
        cout << "\n Ei! Este tamanho não é compatível com o tamanho PEQUENO! " << endl;
    }
    else{
    int arqP[tam];

        for(int i = 0; i<tam; i++){
            arqP[i] = rand() % tam;
            cout << " | " << arqP[i] ;
        }

   }
}




#endif // BIBLI_H_INCLUDED
