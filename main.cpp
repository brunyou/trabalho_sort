#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <locale.h>
#include "bibli.h"
#include "home.h"
#include "ordenadores.h"

using namespace std;



int main(){
setlocale(LC_ALL,"Portuguese");
int tam;

switch(menu())
    {
case 1:
    cin >> tam;
    ordBS(tam);
break;

case 2:
    cin >> tam;
    ordSS(tam);
break;

case 3:
    cin >> tam;
    ordIS(tam);
break;

case 4:
    cin >> tam;
    ordQS(tam);
break;

default:
    cout << "\n benchBruno: Este número não pode ser selecionado!" << endl;

}


    return 0;
}

