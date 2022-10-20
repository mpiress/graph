#include "graph.h"

Vertex VertexInitialize(int value){
  Vertex v = malloc (sizeof(Vertex));
  v->value = value;
  v->prox  = NULL;
  return v;
}

Graph GraphInitialize(int V){
  Graph G = malloc (sizeof(Graph));
  G->V = V;
  G->E = 0;
  G->adj = malloc(V * sizeof(Vertex));

  for(int v=0; v<V; v++)
    G->adj[v] = VertexInitialize(v);

  return G;
}

void GraphInsertEdge(Graph G, Vertex v1, Vertex v2){
  Vertex v = G->adj[v1->value];
  
  while(v->prox != NULL){
    if (v->value == v2->value)
      return;
    v = v->prox;
  }

  v->prox = VertexInitialize(v2->value);
  G->E ++;
}

void ImprimeGraph(Graph G){
  Vertex aux;

  for(int v=0; v<G->V; v++){
    aux = G->adj[v];

    while(aux->prox != NULL){
      printf(" %d -> ", aux->value);
      aux = aux->prox;
    }
    if (aux != NULL)
      printf(" %d ", aux->value);
    
    printf("\n");
  }
  
}