# Conversion de centímetros a pulgadas

## Problema

Escriba un programa que convierta de centímetros a pulgadas.
Una pulgada es igual a 2.54 centímetros.

## Pseudocódigo

cin: flujo de entrada
cout: flujo de salida

```
bool bandera := true
float entrada, resultado
hacer
  cin entrada
  si entrada > 0
    establecer bandera a false
    imprimir "Estamos procesando"
    system("PAUSE")
  si no entonces
    imprimir "Por favor ingrese los centimetros que desea convertir a pulgadas:"
    limpiar cin
    establecer tamaño del bufer
mientras bandera == true
resultado := entrada / 2.54
imprimir entrada + " cm es igual a " + resultado + " pulg \n";
imprimir "Fin del programa!"
```

## Código

```c++
#include <iostream>

using namespace std;

#define PULGADA 2.54;

int main()
{
	// Declaracion de variables
	bool bandera = true;
	float entrada, resultado;

	do
	{
		cin >> entrada;
		if (entrada > 0)
		{
			bandera = false;
			cout << "Estamos procesando\n";
			system("PAUSE");
		}
		else
		{
			cout << "Por favor ingrese los centimetros que desea convertir a pulgadas: ";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	} while (bandera);

	resultado = entrada / PULGADA; // Por equivalencias 1 pulgada = 2.54 centimetros -> 1 cm * (1 pulg / 2.54 cm)
	cout << entrada << " cm es igual a " << resultado << " pulg \n";
	cout << "Fin del programa!";

	return 0;
}
```

#### Fuente

[progra.usm.cl](http://progra.usm.cl/apunte/ejercicios/1/conversion-unidades-longitud.html)
