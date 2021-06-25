#ifndef HOME_H_INCLUDED
#define HOME_H_INCLUDED
#include "stdlib.h"
using namespace std;

int menu(){
    int op;
  cout << "=====================|=====================" << endl;
  cout << " _               _   _____                 " << endl;
  cout << "| |_ ___ ___ ___| |_| __  |___ _ _ ___ ___ " << endl;
  cout << "| . | -_|   |  _|   | __ -|  _| | |   | . |" << endl;
  cout << "|___|___|_|_|___|_|_|_____|_| |___|_|_|___|" << endl;
  cout << "                        developement  ver. " << endl;
  cout << "=====================|=====================" << endl;

  cout << "\n benchBruno: Selecione uma ordenação para começar o benchmark!" << endl;
  cout << "\n 1) Bubble Sort | 2) Selection Sort | 3) Insertion Sort | 4) Quick Sort | 5) Merge Sort " << endl;
  cout << " R: ";
  cin >> op;
switch(op){
case 1:
    cout << "\n benchBruno: Bubble Sort? Boa escolha! Agora escolha o tamanho do arquivo:"<< endl;
    cout << " R: ";
    break;
case 2:
    cout << "\n benchBruno: Selection sort... Ok. Então, diga-me qual o tamanho do arquivo?"<< endl;
    cout << " R: ";
    break;
case 3:
    cout << "\n benchBruno: Você escolheu Selection Sort, por favor escolha o tamanho do arquivo"<< endl;
    cout << " R: ";
    break;
case 4:
    cout << "\n benchBruno: Quick Sort? Interessante ... então agora me diga, qual o tamanho do arquivo?"<< endl;
    cout << " R: ";
    break;
case 5:
    cout << "\n benchBruno: Merge Sort!? Ok, qual o tamanho do arquivo?"<< endl;
    cout << " R: ";
    break;
default:
    cout<< "\n benchBruno: Não quero ser chato mas, creio que você inseriu um número diferente de 1 a 5."<< endl;
}
return op;
}
#endif // HOME_H_INCLUDED
