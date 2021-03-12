#include <iostream>
#include "Grafo_Matriz.h"
#include "Grafo_Lista.h"
#define CANTIDAD_VERTICES 5 // Para la lista.

using std::cout, std::endl;

void pruebas_matriz();
void pruebas_listas();
std::vector<Nodo_Vertice> generar_vertices();
void generar_adyacencias(std::vector<Nodo_Vertice>& vertices); // Implementado para CANTIDAD_VERTICES 5.
void agrupar_conjunto(std::vector<Nodo_Vertice>& vertices);

int main()
{
    cout << "Implementacion como matriz: " << endl;
    pruebas_matriz();
    cout << endl;
    cout << "Implementacion como lista de adyacencias (grafo distinto al anterior):" << endl;
    pruebas_listas();
    return 0;
}

void pruebas_matriz()
{
    auto nuevoGrafo = Grafo_Matriz(5);
    nuevoGrafo.MostrarMatriz();
    cout << "CONECTANDO 1-1" << endl;
    nuevoGrafo.AgregarArista(1, 1);
    nuevoGrafo.MostrarMatriz();
    cout << "CONECTANDO 2-2" << endl;
    nuevoGrafo.AgregarArista(2, 2);
    nuevoGrafo.MostrarMatriz();
    cout << "DESCONECTANDO 1-1" << endl;
    nuevoGrafo.QuitarArista(1, 1);
    nuevoGrafo.MostrarMatriz();
}
void pruebas_listas()
{
    std::vector<Nodo_Vertice> vertices = generar_vertices();
    generar_adyacencias(vertices);
    agrupar_conjunto(vertices);

// ..........................................

    auto grafo = Grafo_Lista(&vertices[0]);
    grafo.Mostrar_Grafo();

}

std::vector<Nodo_Vertice> generar_vertices()
{
    std::vector<Nodo_Vertice> vertices;
    vertices.reserve(CANTIDAD_VERTICES);
    for (int i = 0; i < CANTIDAD_VERTICES; i++)
        vertices.emplace_back(i + 1);
    return vertices;
}
void generar_adyacencias(std::vector<Nodo_Vertice>& vertices)
{
    vertices[0].Agregar_Adyacencias({2, 3, 5});
    vertices[1].Agregar_Adyacencias({1, 4});
    vertices[2].Agregar_Adyacencias({1, 2, 5});
    vertices[3].Agregar_Adyacencias({3, 5});
    vertices[4].Agregar_Adyacencias({1, 2, 3});
}
void agrupar_conjunto(std::vector<Nodo_Vertice>& vertices)
{
    for(int i = 0; i < vertices.size(); i++)
    {
        if(i == vertices.size() - 1)
            vertices[i].Agrupar_Vertices(nullptr);
        else
            vertices[i].Agrupar_Vertices(&vertices[i + 1]);
    }
}