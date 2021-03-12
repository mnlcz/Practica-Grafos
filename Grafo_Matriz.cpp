//
// Created by MnLCz on 3/3/2021.
//

#include "Grafo_Matriz.h"
#include <iostream>

using std::cout, std::endl;

int** inicializar_matriz(int f, int c);
void llenar_matriz(int** matriz, int v);

Grafo_Matriz::Grafo_Matriz(const int v)
{
    this->vertices = v;
    this->adyacencias = inicializar_matriz(v, v);
}

void Grafo_Matriz::MostrarMatriz() const
{
    for(int i = 0; i < this->vertices; i++)
    {
        for (int j = 0; j < this->vertices; j++)
        {
            cout << this->adyacencias[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void Grafo_Matriz::AgregarArista(int index1, int index2)
{
    this->adyacencias[index1 - 1][index2 - 1] = 1;
}

void Grafo_Matriz::QuitarArista(int index1, int index2)
{
    this->adyacencias[index1 - 1][index2 - 1] = 0;
}

int** inicializar_matriz(int f, int c)
{
    auto matriz = new int*[f];
    for(int i = 0; i < f; i++)
        matriz[i] = new int[c];
    llenar_matriz(matriz, f);
    return matriz;
}

void llenar_matriz(int** matriz, int v)
{
    for(int i = 0; i < v; i++)
        for(int j = 0; j < v; j++)
            matriz[i][j] = 0;
}

