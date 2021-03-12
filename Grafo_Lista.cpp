//
// Created by MnLCz on 3/3/2021.
//

#include "Grafo_Lista.h"
#include <iostream>

using std::cout, std::endl;

Nodo_Vertice::Nodo_Vertice(int v)
{
    this->vertice = v;
    this->siguiente = nullptr;
}

void Nodo_Vertice::Agregar_Adyacencias(std::vector<int> ady)
{
    this->adyacencias.insert(this->adyacencias.end(), ady.begin(), ady.end());
}

void Nodo_Vertice::Mostrar_Adyacencias() const
{
    cout << " ";
    for(int i : this->adyacencias)
        cout << i << " ";
}

void Nodo_Vertice::Agrupar_Vertices(Nodo_Vertice* v)
{
    this->siguiente = v;
}

Grafo_Lista::Grafo_Lista(Nodo_Vertice *primero)
{
    this->primero = primero;
}

void Grafo_Lista::Mostrar_Grafo() const
{
    auto iterador = this->primero;
    while(iterador != nullptr)
    {
        cout << iterador->vertice;
        iterador->Mostrar_Adyacencias();
        cout << endl;
        iterador = iterador->siguiente;
    }
}
