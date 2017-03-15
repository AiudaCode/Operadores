#include <iostream>
#include "OperadorAritmetico.h"

using namespace std;

// metodo para mostrar el menu
int menu()
{
    // declaro una variable de tipo entero opc
    int opc;
    do
    {
        cout << "1. Suma" << endl;
        cout << "2. Resta" << endl;
        cout << "3. Multiplicacion" << endl;
        cout << "4. Division" << endl;
        cout << "5. Modulo" << endl;
        cout << "6. Salir" << endl;
        cout << ">> ";
        cin >> opc;
    }
    while(opc < 1 || opc > 6);
    return opc;
}

int main(void)
{
    // creo un objeto de la clase OperadorAritmetico (Instanciación)
    OperadorAritmetico *obj = new OperadorAritmetico();
    // declaro dos variables de tipo entero: n1 y n2
    int n1, n2;
    // declaro una variable de tipo entero opcion
    int opcion;
    do
    {
        // pido el numero 1 al usuario
        cout << "Digite numero 1" << endl;
        cout << ">> ";
        // guardo el valor en la variable n1
        cin >> n1;
        // encapsulo la variable n1
        obj->setNumero1(n1);
        // pido el numero 2 al usuario
        cout << "Digite numero 2" << endl;
        cout << ">> ";
        // guardo el valor en la variable n2
        cin >> n2;
        // encapsulo la variable n2
        obj->setNumero2(n2);
        // repetire todas estas intrucciones hasta que la opcion del menu sea diferente a 6, eso significa que si el
        // usuario digita 6 como opcion el programa terminara
        opcion = menu();
        // dependiendo del valor que retorne el metodo menu se seleccionara un caso para su respectiva operación
        switch(opcion)
        {
            case 1:
                cout << "La suma de " << obj->getNumero1() << " + " << obj->getNumero2() << " es: " << obj->suma() << endl;
                break;
            case 2:
                cout << "La resta de " << obj->getNumero1() << " - " << obj->getNumero2() << " es: " << obj->resta() << endl;
                break;
            case 3:
                cout << "La multiplicacion de " << obj->getNumero1() << " * " << obj->getNumero2() << " es: " << obj->multiplicacion() << endl;
                break;
            case 4:
                cout << "La division de " << obj->getNumero1() << " / " << obj->getNumero2() << " es: " << obj->division() << endl;
                break;
            case 5:
                cout << "El modulo o resto entre " << obj->getNumero1() << " y " << obj->getNumero2() << " es: " << obj->modulo() << endl;
                break;
            default:
                break;
        }
    }
    while(opcion != 6);
}
