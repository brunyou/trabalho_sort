#ifndef BIBLI_H_INCLUDED
#define BIBLI_H_INCLUDED

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <locale.h>
#include <iostream>
#include <tgmath.h>
using namespace std;
int tam;
float tempo;
time_t t_ini, t_fim;

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
t_ini = time(NULL);
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
t_fim = time(NULL);
tempo = difftime(t_fim, t_ini);
    cout << "\n Ordenado : ---------------------------------" <<endl;
    for(int i = 0; i<tam; i++)
    {
    cout << " | " << dados[i];
    }
cout << "\n benchBruno: O tempo de execução dessa ordenação foi de: " << tempo << " segundos!";
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
t_ini = time(NULL);
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
    t_fim = time(NULL);
    tempo = difftime(t_fim, t_ini);

    cout << "\n Ordenado : ---------------------------------" <<endl;
    for(int i = 0; i<tam; i++)
    {
    cout << " | " << dados[i];
    }
    cout << "\n benchBruno: O tempo de execução dessa ordenação foi de: " << tempo << " segundos!";
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
t_ini = time(NULL);
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
t_fim = time(NULL);
tempo = difftime(t_fim, t_ini);
cout << "\n Ordenado : ---------------------------------" <<endl;
    for(int i = 0; i<tam; i++)
    {
        cout << " | " << dados[i];
    }
    cout << "\n benchBruno: O tempo de execução dessa ordenação foi de: " << tempo << " segundos!";
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
t_ini = time(NULL);
quickSort(dados, tam-tam, tam-1);
t_fim = time(NULL);
tempo = difftime(t_fim, t_ini);
    cout << "\n Ordenado : ---------------------------------" <<endl;
    for(int i = 0; i<tam; i++)
    {
    cout << " | " << dados[i];
    }
cout << "\n benchBruno: O tempo de execução dessa ordenação foi de: " << tempo << " segundos!";
}

//*MERGE SORT**
void merge(int *V, int inicio, int meio, int fim){
    int *temp, p1, p2, tamanho, i, j, k;
    int fim1 = 0, fim2 = 0;
    tamanho = fim - inicio+1;
    p1 = inicio;
    p2 = meio+1;
    temp = (int *) malloc(tamanho*sizeof(int));
    if(temp != NULL){
        for(i=0; i< tamanho; i++){
            if(!fim1 && !fim2){
                if(V[p1] < V[p2])
                    temp [i] = V[p1++];
                else
                    temp[i] = V[p2++];
                if(p1>meio) fim1=1;
                if(p2>fim) fim2=1;
                }else{
                    if(!fim1)
                        temp[i]=V[p1++];
                    else
                        temp[i]=V[p2++];
                    }
        }
        for(j=0, k=inicio; j<tamanho; j++, k++)
            V[k]=temp[j];
    }
    free(temp);
}

void mergeSort (int *V, int inicio, int fim){
    int meio;
    if(inicio < fim){
        meio = floor((inicio+fim)/2);
        mergeSort(V,inicio,meio);
        mergeSort(V,meio+1,fim);
        merge(V,inicio,meio,fim);
    }
}

void ordMS(int tam){
    int dados[tam];
 cout << "\n Desordenado : ---------------------------------" <<endl;
    for(int i = 0; i<tam; i++)
    {
    dados[i] = rand() % tam;
    cout << " | " << dados[i];
    }
t_ini = time(NULL);
mergeSort(dados, tam-tam, tam-1);
t_fim = time(NULL);
     cout << "\n Ordenado : ---------------------------------" <<endl;
    for(int i = 0; i<tam; i++)
    {
    cout << " | " << dados[i];
    }
    tempo = difftime(t_fim, t_ini);
cout << "\n benchBruno: O tempo de execução dessa ordenação foi de: " << tempo << " segundos!";
}
#endif // BIBLI_H_INCLUDED
