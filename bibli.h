#ifndef BIBLI_H_INCLUDED
#define BIBLI_H_INCLUDED

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <locale.h>
#include <iostream>

using namespace std;

void selTam(){

cout << "\n    PEQUENO: 10 a 100 de dados.";
cout << "\n    MÉDIO..: 1.000 a 50.000 de dados.";
cout << "\n    GRANDE.: 100.000 a 500.000 de dados.";
cout << "\n    MASSIVO: 10.000.000 a 50.000.000 de dados.";
cout << "\n benchBruno: Fique tranquilo, os dados são números aleatórios gerados via código, você não irá ter que digitá-los";
}

//**BUBBLE SORT**
void ordBS(int tam){
int dados[tam];
int troca;
int aux;

    cout << "\n Desordenado : ---------------------------------" <<endl;
    for(int i = 0; i<tam; i++)
    {
    dados[i] = rand() % tam;
    cout << " | " << dados[i];

    }

troca = 1;
while (troca == 1)
{

    troca = 0;
    for (int i = 0; i<tam; i++)
    {
                if (dados[i] > dados[i + 1])
                {
                    troca = 1;
                    aux = dados[i];
                    dados[i] = dados[i + 1];
                    dados[i + 1] = aux;
                }
    }

}
    cout << "\n Ordenado : ---------------------------------" <<endl;
    for(int i = 0; i<tam; i++)
    {
    cout << " | " << dados[i];
    }

}

//**SELECTION SORT**
void ordSS(int tam){
int dados[tam];

cout << "\n Desordenado : ---------------------------------" <<endl;

for(int i = 0; i<tam; i++)
{
    dados[i] = rand() % tam;
    cout << " | " << dados[i];
}
for (int i = 0 ;i< tam-1; i++)
    {
         int min = i;

         for (int j = i+1; j<tam; j++)
         {
            if (dados[j] < dados[min]){
            min = j;
            }
         }
         int temp = dados[min];
         dados[min] = dados[i];
         dados[i] = temp;
    }
    cout << "\n Ordenado : ---------------------------------" <<endl;
    for(int i = 0; i<tam; i++)
    {
    cout << " | " << dados[i];
    }
}

#endif // BIBLI_H_INCLUDED
