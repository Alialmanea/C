//
//  main.c
//  graph
//
//  Created by dabbaghıe on 12/30/19.
//  Copyright © 2019 dabbaghıe. All rights reserved.
//

#include <stdio.h>

#define N 6

struct Node_t {
    int v;
    struct Node_t* next;
};

typedef struct Node_t Node;

struct Graph_t {
    struct Node* head[N];
};

typedef struct Graph_t Graph;

struct Edge_t {
    int src, dest;
};
typedef struct Edge_t Edge;

Graph* createGraph(Edge edges[], int n){
    int i=0;
    Graph* graph=(Graph*)malloc(sizeof(Graph));  //creat graph
    
    for(i=0;i<n;i++){                //Empty all head in graph
        graph->head[i]=NULL;
    }
    for(i=0;i<n;i++){
        int Scr=edges[i].src;
        int Dest=edges[i].dest;
        
        Node* node=(Node*)malloc(sizeof(Node));
        
        node->v=Dest;
        node->next=graph->head[Scr];
        
        graph->head[Scr]=node;
        
        
        
    }
    
    
    return graph;
}

// Function to print adjacency list representation of graph
void printGraph(Graph* graph)
{
    int i;
    for (i = 0; i < N; i++)
    {
        // print current vertex and all ts neighbors
        Node* ptr = graph->head[i];
        while (ptr != NULL)
        {
            printf("(%d -> %d)\t", i, ptr->v);
            ptr = ptr->next;
        }
        
        printf("\n");
    }
}



int main(int argc, const char * argv[]) {
    
    
    Edge edges[] ={
        { 0, 1 }, { 1, 2 }, { 2, 0 }, { 2, 1 },
        { 3, 2 }, { 4, 5 }, { 5, 4 }
    };
    
    int n_v=sizeof(edges)/sizeof(edges[0]);
    
    Graph* graph=createGraph(edges,n_v);
    
    printGraph(graph);
    
    
    
    
    return 0;
}

