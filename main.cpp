#include <iostream>
#include <cmath>
#include <string>

bool raices(std::pair<double, double> &ans, const double a, const double b, const double c)
{
    // Calculamos el discriminante de nuestro polinomio
    double discriminante = b * b - 4 * a * c;

    // El polinomio no tiene raíces reales
    if (discriminante < 0)
    {
        return false;
    }

    // Calculamos la raíz cuadrada del discriminante
    double raiz_discriminante = sqrt(discriminante);

    // Calculamos las 2 raíces de nuestro polinomio
    double x1 = (-b - raiz_discriminante) / (2 * a);
    double x2 = (-b + raiz_discriminante) / (2 * a);

    // Agregamos las raíces a nuestro pair
    ans.first = x1;
    ans.second = x2;

    return true;
}

int main(int argc, char *argv[])
{
    // Verificar si se proporcionan suficientes argumentos
    if (argc != 4)
    {
        std::cerr << "Error, ejemplo de uso:" << std::endl << argv[0] << " a b c" << std::endl;
        return 1;
    }

    //  Verificar si los argumentos son validos
    try 
    {
        // Convertir argumentos de cadena a double
        double a = std::stod(argv[1]);
        double b = std::stod(argv[2]);
        double c = std::stod(argv[3]);

        // Caso particular
        if (a == 0)
        {
            std::cout << '{' << (-c) / b << '}';
            return 0;
        }

        std::pair<double, double> ans;

        if (!raices(ans, a, b, c))
        {
            std::cout << "{ }";
        }
        else
        {
            std::cout << '{' << ans.first << ", " << ans.second << '}';
        }
    }
    catch (const std::invalid_argument&)
    {
        std::cerr << "Error: Input invalido" << std::endl;
        return 1;
    }

    return 0;
}
