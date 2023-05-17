#include <iostream>
using namespace std;

int main() {
    int numeroSecreto = 42;
    int intentos = 3;
    int intento;

    cout << "Bienvenido al juego de adivinar el número!" << endl;
    cout << "Tienes " << intentos << " oportunidades para adivinar el número secreto." << endl;

    while (intentos > 0) {
        cout << "Ingresa tu intento: ";
        cin >> intento;

        if (intento == numeroSecreto) {
            cout << "¡Felicidades! ¡Has adivinado el número secreto!" << endl;
            break;
        } else {
            cout << "Incorrecto. Inténtalo de nuevo." << endl;
            intentos--;
        }
    }

    if (intentos == 0) {
        cout << "Se acabaron las oportunidades. El número secreto era " << numeroSecreto << "." << endl;
    }

    cout << "Gracias por jugar." << endl;
    
    return 0;
}