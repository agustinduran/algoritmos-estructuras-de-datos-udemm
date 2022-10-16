#include <iostream>
#include <string>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


bool estaVacia(string pila[], int longitud, int ultimo)
{
    if (ultimo == 0)
        return true;
    else
	    return false;
}

bool estaLlena(string pila[], int longitud, int ultimo)
{
	 if (ultimo >= longitud)
	     return true;
     else
        return false;
}

bool agregar(string pila[], int longitud, int &ultimo, string datoParaAgregar)
{
	if (estaLlena(pila, longitud, ultimo))
		return false;
	else {
  	    pila[ultimo] = datoParaAgregar;
	    ultimo++;
	    return true;
	}
}


string sacar(string pila[], int longitud, int &ultimo)
{
     if (estaVacia(pila, longitud, ultimo))
       return 0;
     else {
   	   ultimo--;
	   return pila[ultimo];
	 }
}

void multiplicaPorValor(int v)
{
	v = v*2;
}

void multiplicaPorReferencia(int &v)
{
	v = v*2;
}

int main(int argc, char** argv) {

	string pila[10];
	int ultimo = 0;
	string nombre = "p";

	/* prueba por valor y por referencia */
	/*
	int total = 10;

	multiplicaPorValor(total);
	cout << "multiplicado pero por valor: " << total << endl;

	multiplicaPorReferencia(total) ;
	cout << "multiplicado pero por referencia: " << total << endl;
	*/

	/* Para no producir underflow */
    if (estaVacia(pila, 10, ultimo))
	   cout << " La pila esta vacia" << endl;

    /* Para no producir overflow */
	if (estaLlena( pila, 10, ultimo))
	   cout << " La pila esta llena" << endl;


    /* agregar algo en la pila */
	agregar( pila, 10, ultimo, "Uno");
	agregar( pila, 10, ultimo, "dos");  //----
	//sacar(pila, 10,ultimo);
	agregar( pila, 10, ultimo, "tres");
	agregar( pila, 10, ultimo, "milanesa");  //-----
	//sacar(pila, 10,ultimo);

	string dato;
	while (estaVacia(pila, 10, ultimo) == false) {
		dato = sacar(pila, 10, ultimo);
		cout << dato << endl;
	}

	return 0;
}
