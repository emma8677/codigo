#include <iostream>
#include <stdlib.h>
#include <cmath>

// Función para calcular el campo eléctrico
double calcularCampoElectrico(double carga, double distancia, double constante)
{
    return (constante * carga) / std::pow(distancia, 2);
}

int main()

{
	system("color 02");
    // Carga en Coulombs
    double carga;

    // Distancia en metros
    double distancia;

    // Selección de la constante adecuada según el medio
    double constante = 9e9; // Constante

    // Pedir al usuario que seleccione el medio
    int medida;
    std::cout << "Seleccione el medida:\n";
    std::cout << "1. Mili\n";
    std::cout << "2. Micro\n";
    std::cout << "3. Nano\n";
    std::cin >> medida;

    switch (medida)
    {
    case 1:
        constante = 9e3; // Constante de Mili (1e-3 * 9e9)
        break;
    case 2:
        constante = 9e6; // Constante de micro (1e-6 * 9e9)
        break;
    case 3:
        constante = 9e9; // Constante de nano (1e-9 * 9e9)
        break;
    }

    // Lectura de la carga y la distancia
    std::cout << "Ingrese el valor de la carga en Coulombs: ";
    std::cin >> carga;

    std::cout << "Ingrese la distancia en metros: ";
    std::cin >> distancia;

    // Cálculo del campo eléctrico
    double campoElectrico = calcularCampoElectrico(carga, distancia, constante);

    // Mostrar el resultado
    std::cout << "\nRESULTADO:\n";
    std::cout << "----------------------------\n";
    std::cout << "Carga: " << carga << " C\n";
    std::cout << "Distancia: " << distancia << " m\n";
    std::cout << "Constante K: " << constante << " (Nm^2)/C^2\n";
    std::cout << "Campo electrico: " << campoElectrico << " N/C\n";
    std::cout << "----------------------------\n";

    return 0;
}