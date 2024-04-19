#include <iostream>
using namespace std;

int main() {
string animal[10] = {"cavalo", "zebra", "leão", "cachorro", "gato", "tigre", "tartaruga", "vaca", "onça", "elefante",};
char caracter;
cout << "leia um caractere do usúario: ";
cin >> caracter;

switch(caracter)
{
case 'c':
    cout << animal[0] << animal[1] << animal[2] << animal[3] << animal[4] << animal[5] << animal[6] << animal[7] << animal[8] << animal[9];

    break;

default: 
    cout << "se for imprima o nome do animal completo" << endl;
    break;
}

return 0;
}


