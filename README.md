# Buscador-de-raices
Este programa en C++ está diseñado para calcular las raíces reales de un polinomio de segundo grado.

## ¿Qué hace y cómo funciona?
El algoritmo calcula las raíces de un polinomio de segundo grado de la forma `ax^2 + bx + c`, donde `a`, `b` y `c` representan los coeficientes del polinomio. Utiliza la fórmula general para encontrar las raíces, la cual se define como:
`x = (-b ± sqrt(b^2 - 4ac)) / 2a`

Aquí, el término `sqrt(b^2 - 4ac)` es conocido como el discriminante. El valor del discriminante determina la naturaleza de las raíces del polinomio:
- Si el discriminante es positivo, hay dos raíces reales y distintas.
- Si el discriminante es cero, hay exactamente una raíz real (o dos raíces reales iguales).
- Si el discriminante es negativo, el polinomio no tiene raíces reales.

El programa primero calcula el discriminante para determinar cuál de estos casos aplica y luego procede a calcular las raíces reales correspondientes, si existen.
Adicionalmente, el programa maneja el caso particular donde `a == 0`. Si este es el caso, la ecuación no es cuadrática sino lineal (`bx + c = 0`). Aquí, el algoritmo simplifica el cálculo de la raíz a `x = -c/b`, siempre que `b ≠ 0`.

## Requisitos / Tecnologías Usadas
- **Sistema Operativo:** Windows 11
- **Herramientas de Desarrollo:**
  - CMake versión 3.29.0
  - Visual Studio 2022 versión 17.9

## Instrucciones para Compilar el Código
Para compilar este proyecto, siga las instrucciones a continuación. Asegúrese de tener instaladas todas las tecnologías mencionadas anteriormente.

### Compilación
1. Abra el símbolo del sistema o PowerShell y navegue al directorio del proyecto:<br>
`cd ruta\Buscador-de-raices`
2. Ejecute CMake para generar los archivos de proyecto para Visual Studio:<br>
`cmake -G "Visual Studio 17 2022" .`
3. Compile el proyecto usando MSBuild:<br>
`msbuild findroots.sln /t:Build /p:Configuration=Release`

### Ejecución
Después de compilar el proyecto, siga estos pasos para ejecutar el programa:
1. Navegue al directorio de la versión compilada:<br>
`cd Release`
2. Ejecute el programa proporcionando los coeficientes `a`, `b` y `c` del polinomio:<br>
Símbolo del sistema:<br>
`findroots a b c`<br>
PowerShell:<br>
`.\findroots.exe a b c`
