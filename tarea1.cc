#include <iostream>
#include <cstdlib>
#include <ctime>
#define DIM 3
using namespace std;

int main()
{
   
    double a[DIM][DIM], b[DIM][DIM], c[DIM][DIM]; // matrices

    // Inicializar las matrices a y b con valores aleatorios entre 0 y 1
    srand(time(NULL));
    for(int i=0; i<DIM; i++)
    {
        for(int j=0; j<DIM; j++)
        {
            a[i][j] = (double)rand() / RAND_MAX;
            b[i][j] = (double)rand() / RAND_MAX;
        }
    }

    // Multiplicar las matrices a y b para obtener la matriz resultante c
    for(int i=0; i<DIM; i++)
    {
        for(int j=0; j<DIM; j++)
        {
            c[i][j] = 0;
            for(int k=0; k<DIM; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Multiplicar la matriz resultante c por otra matriz de enteros entre 0 y 255 elemento a elemento
    int d[DIM][DIM];
    int aleatorio;
    for(int i=0; i<DIM; i++)
    {
        for(int j=0; j<DIM; j++)
        {
            aleatorio=(int)rand()%256;
            d[i][j] = (int)(c[i][j] * aleatorio);
        }
    }

    return 0;
}