#ifndef ORDENADORES_CPP
#define ORDENADORES_CPP
#include <iostream>
#include <stdio>

//=============BUBBLE SORT===============
/*void bubblesort(int contador, int TAM){
 for (contador = 1; contador < TAM; contador++) {
   for (i = 0; i < TAM - 1; i++) {
     if (numeros[i] > numeros[i + 1]) {
       aux = numeros[i];
       numeros[i] = numeros[i + 1];
       numeros[i + 1] = aux;
     }
   }
 }
*/
//=============SELECTION SORT=============

void selection_sort (int vetor[],int max) {
  int i, j, min, aux;

  for (i = 0; i < (max - 1); i++) {
    /* O minimo é o primeiro número não ordenado ainda */
    min = i;
    for (j = i+1; j < max; j++) {
      /* Caso tenha algum numero menor ele faz a troca do minimo*/
      if (vetor[j] < vetor[min]) {
   min = j;
      }
    }
    /* Se o minimo for diferente do primeiro numero não ordenado ele faz a troca para ordena-los*/
    if (i != min) {
      aux = vetor[i];
      vetor[i] = vetor[min];
      vetor[min] = aux;
    }
  }
  /* Imprime o vetor ordenado */
  for (i = 0; i < max; i++) {
    printf ("%d ",vetor[i]);
  }
  printf ("\n");
}

main () {
  int max, i;
  /* Lê o máximo de algarismos do vetor*/
  scanf ("%d",&max);

  int  vetor[max];
  /* Lê os algarismos do vetor */
  for (i = 0; i < max; i++) {
    scanf ("%d",&vetor[i]);
  }

  selection_sort (vetor, max);

}
}

//========SELECTION SORT=========

void insertionSortD(int array[], int tamanho) {
      int i, j, tmp;
      for (i = 1; i < tamanho; i++) {
            j = i;
            while (j > 0 && array[j - 1] < array[j]) {
                  tmp = array[j];
                  array[j] = array[j - 1];
                  array[j - 1] = tmp;
                  j--;
            }
      }
}
void insertionSortC(int array[], int tamanho) {
      int i, j, tmp;
      for (i = 1; i < tamanho; i++) {
            j = i;
            while (j > 0 && array[j - 1] > array[j]) {
                  tmp = array[j];
                  array[j] = array[j - 1];
                  array[j - 1] = tmp;
                  j--;
            }
      }
}

int main(int argc, char** argv)
{
   int array[100], tamanho, ordem;
   printf("\n\n\t Entre com o número de termos...: ");
   scanf("%d", &tamanho);
   printf("\n\t Entre com os elementos do array...:");
   for(int i = 0; i < tamanho;i++){
      printf("\nDigite o %dº número: ",i+1);
      scanf("%d",&array[i]);
   }
   printf("\n\t Digite 1 para ordernar o array em ordem crescente ou 2 para ordem decrescente: ");
   scanf("%d",&ordem);
   if (ordem == 1){
      insertionSortC(array,tamanho);
      printf("\nArray em ordem crescente: ");
      for(int i=0; i<tamanho; i++){
      printf("\n\t\t\t%d", array[i]);
   }

      }else if (ordem ==2) {
   insertionSortD(array,tamanho);
   printf("\nArray em ordem decrescente: ");
   for(int i=0; i<tamanho; i++){
      printf("\n\t\t\t%d", array[i]);
   }
}
   return 0;
}

//================QUICK SORT=============

void Quick(int vetor[10], int inicio, int fim);
int main(){

   int vetor[10] = {7, 9, 4, 3, 6, 1, 18, 2, 10, 5};

   int i;
   printf("Vetor desordenado:\n");
   for(i = 0; i < 10; i++){
      printf("%d ", vetor[i]);
   }
   printf("\n");

   Quick(vetor, 0, 9);

   printf("Vetor ordenado:\n");
   for(i = 0; i < 10; i++){
      printf("%d ", vetor[i]);
   }
   printf("\n");
}

void Quick(int vetor[10], int inicio, int fim){

   int pivo, aux, i, j, meio;

   i = inicio;
   j = fim;

   meio = (int) ((i + j) / 2);
   pivo = vetor[meio];

   do{
      while (vetor[i] < pivo) i = i + 1;
      while (vetor[j] > pivo) j = j - 1;

      if(i <= j){
         aux = vetor[i];
         vetor[i] = vetor[j];
         vetor[j] = aux;
         i = i + 1;
         j = j - 1;
      }
   }while(j > i);

   if(inicio < j) Quick(vetor, inicio, j);
   if(i < fim) Quick(vetor, i, fim);



//============MERGE SORT=============

#endif
