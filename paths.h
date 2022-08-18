/*
 * Created by Varnion on 27/06/2022.
 *
 * Program to build a weighted directed graph from a cost string,
 * print all path(s) from source to destination,
 * and then print the shortest path (or paths) among them.
*/

#include <stdbool.h>

#ifndef PATHS_PATHS_H
#define PATHS_PATHS_H

typedef struct Node {
    int vertex;
    float weight;
    struct Node* next;
} Node;

typedef struct Graph {
    int index;
    float min;
    float distance;
    float* distances;
    int* path;
    int** paths;
    int path_index;
    int* path_sizes;
    bool* visited;
    Node** array;
} Graph;

Node* createNode(int vertex, float weight);
Graph* createGraph(int vertices);
void addEdge(Graph* graph, int source, int destination, float weight);
void search(Graph* graph, int src, int dst);
void clear(Graph* graph);

#endif
