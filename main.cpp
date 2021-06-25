#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <locale.h>
#include "bibli.h"
#include "home.h"
#include "ordenadores.h"

using namespace std;

int tam;
int main(){
    setlocale(LC_ALL,"Portuguese");
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
    }
  //ordBS(100);

    return 0;
}

