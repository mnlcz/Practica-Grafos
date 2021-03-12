//
// Created by MnLCz on 3/3/2021.
//

#pragma once
#include <vector>

struct Nodo_Vertice
{
    int vertice;
    std::vector<int> adyacencias; // Puede ser otra lista. Para este ejemplo voy a usar un vector.
    Nodo_Vertice* siguiente;

    explicit Nodo_Vertice(int v);
    void Agregar_Adyacencias(std::vector<int> ady);
    void Mostrar_Adyacencias() const;
    void Agrupar_Vertices(Nodo_Vertice* v);
};

struct Grafo_Lista
{
    Nodo_Vertice* primero;

    explicit Grafo_Lista(Nodo_Vertice* primero);
    void Mostrar_Grafo() const;
};