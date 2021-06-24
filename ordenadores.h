#ifndef ORDENADORES_H_INCLUDED
#define ORDENADORES_H_INCLUDED


//BUBBLE SORT

void bubblesort(int contador, int TAM,int** numeros){
 for (contador = 1; contador < TAM; contador++) {
   for (int i = 0; i < TAM - 1; i++) {
        int proximo = i + 1;
     if (numeros[i] > numeros[proximo]) {
       int* aux = numeros[i];
       numeros[i] = numeros[proximo];
       numeros[proximo] = aux;
     }
   }
 }
}

#endif // ORDENADORES_H_INCLUDED
