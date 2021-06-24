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
    opcao(menu());
    gerarArqP(100);

    return 0;
}

