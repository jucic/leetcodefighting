#include <iostream>
#include <vector>
//#include <random>
#include <algorithm>
#include <boost/shared_ptr.hpp>

using namespace std;

typedef char VertexType;
typedef int EdgeType;

#define MAXVEX 65535

typedef struct EdgeNode
{
    int adjvex;
    EdgeType weight;
    EdgeNode *next;
}EdgeNode;
typedef struct
{
    VertexType data;
    EdgeNode *firstedge;
}VertexNode,Adjlist[MAXVEX];
typedef struct
{
    Adjlist adjlist;
    int numVertexes,numEdges;
}GraphAdjList;

vector<bool> visited;
