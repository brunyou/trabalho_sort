#ifndef HOME_H_INCLUDED
#define HOME_H_INCLUDED
#include "stdlib.h"
#include "bibli.h"
using namespace std;
void selTam(){

cout << "\n    PEQUENO: 10 a 100 de dados.";
cout << "\n    M�DIO..: 1.000 a 50.000 de dados.";
cout << "\n    GRANDE.: 100.000 a 500.000 de dados.";
cout << "\n    MASSIVO: 10.000.000 a 50.000.000 de dados." << endl;
cout << "\n benchBruno: Fique tranquilo, os dados s�o n�meros aleat�rios gerados via c�digo, voc� n�o ir� ter que digit�-los";
}

int menu(){
    int op;
  cout << "=====================|=====================" << endl;
  cout << " _               _   _____                 " << endl;
  cout << "| |_ ___ ___ ___| |_| __  |___ _ _ ___ ___ " << endl;
  cout << "| . | -_|   |  _|   | __ -|  _| | |   | . |" << endl;
  cout << "|___|___|_|_|___|_|_|_____|_| |___|_|_|___|" << endl;
  cout << "                        developement  ver. " << endl;
  cout << "=====================|=====================" << endl;

  cout << "\n benchBruno: Selecione uma ordena��o para come�ar o benchmark!" << endl;
  cout << "\n 1) Bubble Sort | 2) Selection Sort | 3) Insertion Sort | 4) Quick Sort | 5) Merge Sort " << endl;
  cout << " R: ";
  cin >> op;
switch(op){
case 1:
    cout << "\n benchBruno: Bubble Sort? Boa escolha! Agora escolha o tamanho do arquivo:"<< endl;
    selTam();
    cout << "\n R: ";
    break;
case 2:
    cout << "\n benchBruno: Selection sort... Ok. Ent�o, diga-me qual o tamanho do arquivo?"<< endl;
    selTam();
    cout << "\n R: ";
    break;
case 3:
    cout << "\n benchBruno: Voc� escolheu Selection Sort, por favor escolha o tamanho do arquivo"<< endl;
    selTam();
    cout << "\n R: ";
    break;
case 4:
    cout << "\n benchBruno: Quick Sort? Interessante ... ent�o agora me diga, qual o tamanho do arquivo?"<< endl;
    selTam();
    cout << "\n R: ";
    break;
case 5:
    cout << "\n benchBruno: Merge Sort!? Ok, qual o tamanho do arquivo?"<< endl;
    cout << " R: ";
    break;
default:
    cout<< "\n benchBruno: N�o quero ser chato mas, creio que voc� inseriu um n�mero diferente de 1 a 5."<< endl;
}
return op;
}
#endif // HOME_H_INCLUDED
