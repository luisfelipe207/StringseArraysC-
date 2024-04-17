#include <iostream>
using namespace std;

int main() {

string letra;
cout << "escreva uma letra: ";
cin >> letra;

if (letra == "a" || letra == "e" || letra == "i" || letra == "o" || letra == "u") {
cout << "essas letras são vogais";
} 
else {
    cout << "essa é letra é uma consuante";
}
return 0;
}


