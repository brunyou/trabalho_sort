#ifndef BIBLI_H_INCLUDED
#define BIBLI_H_INCLUDED

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <locale.h>
#include <iostream>

using namespace std;

void ordBS(int tam){
int arqP[tam];
int troca;
int aux;

if (tam < 0 || tam > 100)
{
    cout << "\n Ei! Este tamanho não é compatível com o tamanho PEQUENO! " << endl;
}
else
{
    cout << "\n Desordenado :" <<endl;
    for(int i = 0; i<tam; i++)
    {
    arqP[i] = rand() % tam;
    cout << " | " << arqP[i];

    }

troca = 1;
while (troca == 1)
{

    troca = 0;
    for (int i = 0; i<tam; i++)
    {
                if (arqP[i] > arqP[i + 1])
                {
                    troca = 1;
                    aux = arqP[i];
                    arqP[i] = arqP[i + 1];
                    arqP[i + 1] = aux;
                }
    }

}
    cout << "\n Ordenado :" <<endl;
    for(int i = 0; i<tam; i++)
    {
    cout << " | " << arqP[i];
    }
}
}



#endif // BIBLI_H_INCLUDED
