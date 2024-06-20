#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

/*
Crear una matriz cuadrada de números enteros de FxC.  Siendo F y C declaradas como constantes.
Calcular:
- Promedio general de la matriz.
- Suma de pares de cada columna
- Suma de impares de cada fila
- Posición máximo
- Posición mínimo
- Ordenar de forma ascendente la fila 2
- Ordenar en forma descendente la columna 3
-  Intercambiar la 2 y 4 columna
*/

int main(int argc, char const *argv[])
{
    const int F = 3, C = 4;
    int matriz[F][C];
    int suma = 0;
    float promedio = 0;
    int sumaPares = 0;
    int sumaImpares = 0;
    int maximo = 0;
    int minimo = 0;
    int aux = 0;
    srand(time(NULL));

    // recorremos la matriz
    for (int i = 0; i < F; i++)
    {
        for (int j = 0; j < C; j++)
        {
            matriz[i][j] = 1 + rand() % (100);
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    // Promedio general de la matriz.

    for (int i = 0; i < F; i++)
    {
        for (int j = 0; j < C; j++)
        {
            suma += matriz[i][j];
            promedio = (float)suma / (F * C);
        }
    }
    cout << "Promedio: " << promedio << endl;
    cout << endl;

    // Suma de pares de cada columna

    for (int i = 0; i < C; i++)
    {
        sumaPares = 0;
        for (int j = 0; j < F; j++)
        {
            if (matriz[j][i] % 2 == 0)
            {
                sumaPares += matriz[j][i];
            }
        }
        cout << "Suma de pares de la columna " << i + 1 << ": " << sumaPares << endl;
    }
    cout << endl;

    // Suma de impares de cada fila

    for (int i = 0; i < F; i++)
    {
        sumaImpares = 0;
        for (int j = 0; j < C; j++)
        {
            if (matriz[i][j] % 2 != 0)
            {
                sumaImpares += matriz[i][j];
            }
        }
        cout << "Suma de impares de la fila " << i + 1 << ": " << sumaImpares << endl;
    }
    cout << endl;
    
    // Posición máximo

    maximo = matriz[0][0];
    for (int i = 0; i < C; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (matriz[i][j] > maximo)
            {
                maximo = matriz[i][j];
                cout << "Maximo: " << maximo << endl;
            }
        }
    }
    cout << endl;

    // Posición mínimo

    minimo = maximo;
    for (int i = 0; i < C; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (matriz[i][j] < minimo)
            {
                minimo = matriz[i][j];
                cout << "Minimo: " << minimo << endl;
            }
        }
    }
    cout << endl;

    // Ordenar de forma ascendente la fila 2

        for (int i = 0; i < C; i++)
        {
            for (int j = i + 1; j < C; j++)
            {
                if (matriz[1][i] > matriz[1][j])
                {
                    aux = matriz[1][i];
                    matriz[1][i] = matriz[1][j];
                    matriz[1][j] = aux;
                    
                }
                 
                 
              }
               
        }
        cout << "Fila 2 ordenada: ";
        for (int i = 0; i < C; i++)
        {
            cout << matriz[1][i] << "\t";
        }
        
        cout << endl;

         // Ordenar en forma descendente la columna 3

        for (int i = 0; i < F; i++)
        {
            for (int j = i + 1; j < F; j++)
            {
                if (matriz[i][2] < matriz[j][2])
                {
                    aux = matriz[i][2];
                    matriz[i][2] = matriz[j][2];
                    matriz[j][2] = aux;
                    
                }
            }
        }
        cout << "Columna 3 ordenada: ";
        for (int i = 0; i < F; i++)
        {
            cout << matriz[i][2] << "\t";
        }    
        cout << endl; 
     
        //Intercambiar la 2 y 4 columna
        for (int i = 0; i < F; i++)
        {
            aux = matriz[i][1];
            matriz[i][1] = matriz[i][3];
            matriz[i][3] = aux;
        }
        cout << "Intercambio de columnas 2 y 4: " << endl;
        for (int i = 0; i < F; i++)
        {
            for (int j = 0; j < C; j++)
            {
                cout << matriz[i][j] << "\t";
            }
            cout << endl;
        }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
