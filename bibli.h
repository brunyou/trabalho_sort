#ifndef BIBLI_H_INCLUDED
#define BIBLI_H_INCLUDED

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <locale.h>
#include <iostream>

using namespace std;
int tam;
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
//**INSERTION SORT**
void ordIS(int tam){
int dados[tam];
 cout << "\n Desordenado : ---------------------------------" <<endl;
    for(int i = 0; i<tam; i++)
    {
    dados[i] = rand() % tam;
    cout << " | " << dados[i];
    }

for (int i = 1; i < tam; i++)
{
int escolhido = dados[i];
int j = i - 1;

while ((j >= 0) && (dados[j] > escolhido)) {
        dados[j + 1] = dados[j];
        j--;
    }

    dados[j + 1] = escolhido;
}
cout << "\n Ordenado : ---------------------------------" <<endl;
    for(int i = 0; i<tam; i++)
    {
        cout << " | " << dados[i];
    }
}

//**QUICK SORT**
int particiona(int *vetor, int menor, int maior){
    int pivo = vetor[menor];
    int i, j;
    i = menor;
    j = maior;
    int aux;
    while(i <= j){
        while(vetor[i] <= pivo) if(i <= j)i++;else break;   //Para não sair do vetor
        while(vetor[j] > pivo)  if(j >= i)j--;else break;   //Para não sair do vetor
        if(i <= j){
            aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;
            i++; j--;
        }
    }
    vetor[menor] = vetor[j];
    vetor[j] = pivo;
    return j;
}

void quickSort(int *V,int inicio, int fim){
int pivo;
if (fim > inicio){
    pivo = particiona(V,inicio,fim);
    quickSort(V, inicio, pivo-1);
    quickSort(V, pivo+1, fim);
    }
}

void ordQS(int tam){
int dados[tam];
 cout << "\n Desordenado : ---------------------------------" <<endl;
    for(int i = 0; i<tam; i++)
    {
    dados[i] = rand() % tam;
    cout << " | " << dados[i];
    }
quickSort(dados, tam-tam, tam-1);

    cout << "\n Ordenado : ---------------------------------" <<endl;
    for(int i = 0; i<tam; i++)
    {
    cout << " | " << dados[i];
    }
}




#endif // BIBLI_H_INCLUDED
