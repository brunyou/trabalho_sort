#ifndef ORDENADORES_H_INCLUDED
#define ORDENADORES_H_INCLUDED


//BUBBLE SORT

void bubblesort(int contador, int TAM,int numeros){
 for (contador = 1; contador < TAM; contador++) {
   for (int i = 0; i < TAM - 1; i++) {
     if (numeros[i] > numeros[i + 1]) {
       aux = numeros[i];
       numeros[i] = numeros[i + 1];
       numeros[i + 1] = aux;
     }
   }
 }

#endif // ORDENADORES_H_INCLUDED
