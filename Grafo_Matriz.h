//
// Created by MnLCz on 3/3/2021.
//

#pragma once

struct Grafo_Matriz
{
    int vertices;
    int** adyacencias;

    explicit Grafo_Matriz(int v);
    void AgregarArista(int index1, int index2);
    void QuitarArista(int index1, int index2);
    void MostrarMatriz() const;
};