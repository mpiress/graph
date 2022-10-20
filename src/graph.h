#ifndef GRAPH_H 
#define GRAPH_H

#include<stdlib.h>
#include<stdio.h>

typedef struct graph *Graph;
typedef struct TipoVertex *Vertex;


struct TipoVertex{
  int value;
  Vertex prox;
};


struct graph{
  int V;
  int E;
  Vertex *adj; //LISTA DE ADJ
};

Vertex VertexInitialize(int value);
Graph GraphInitialize(int V);
void GraphInsertEdge(Graph G, Vertex v1, Vertex v2);
void ImprimeGraph(Graph G);

#endif
