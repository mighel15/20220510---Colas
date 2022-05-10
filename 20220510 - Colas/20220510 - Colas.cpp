#include <iostream>
using namespace std;
class Cola 
{
    //atributos
    int tamaño = 5;
    int elementos[5];
    int indiceInicio;
    int indiceFinal;
public:
    //construtor
    Cola() 
    {
        indiceInicio = 0;
        indiceFinal = 0;
    }
    //metodos
    bool ColaLlena()
    {
        if (indiceFinal == tamaño)
            return true;
        else
            return false;
    }
    bool ColaVacia()
    {
        if (indiceInicio == indiceFinal)
            return true;
        else
            return false;
    }
    void Insertar(int elemento)
    {
        if (ColaLlena())
        {
            cout << "La cola esta llena" << endl;
        }
        else
        {
            elementos[indiceFinal] = elemento;
            indiceFinal = indiceFinal + 1;
        }
    }
    int Quitar()
    {
        if (ColaVacia())
        {
            cout << "La cola esta vacia" << endl;            
        }
        else
        {
            int valorRetornar = elementos[indiceInicio];
            indiceInicio = indiceInicio + 1;
            return valorRetornar;
        }
    }
    void Imprimir()
    {
        for (int i = indiceInicio; i < indiceFinal; i++)
        {
            cout << elementos[i] << "\t";
        }
        cout << endl;
    }

};

void Menu()
{
    cout << "1) Insertar elemento " << endl;
    cout << "2) Quitar elemento " << endl;
    cout << "3) Imprimir cola " << endl;
    cout << "0) Salir " << endl;
}

int main()
{
    int opcion = 0;
    int elemento = 0;
    Cola cola = Cola();
    do
    {
        Menu();
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            cout << "Ingrese el elemento" << endl;
            cin >> elemento;
            cola.Insertar(elemento);
            break;
        case 2:
            cout << "El elemento quitado es: " << cola.Quitar() << endl;
            break;
        case 3:
            cola.Imprimir();
            break;
        default:
            cout << "opción no valida" << endl;
            break;
        }
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    } while (opcion != 0);
}
