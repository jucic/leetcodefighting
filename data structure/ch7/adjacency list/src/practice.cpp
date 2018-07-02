#include "../include/practice.h"

void create(GraphAdjList &G)
{
    int i,j,k;
    //EdgeNode *e;i
    cout<<"pls input the number of vertexes and edges"<<endl;
    cin>>G.numVertexes>>G.numEdges;
    cout<<"input data of vertex"<<endl;
    for(i=0;i<G.numVertexes;i++)
    {
        cin>>G.adjlist[i].data;
        G.adjlist[i].firstedge=nullptr;
    }
    cout<<"vertexes initialized"<<endl;
    cout<<"input data of edges"<<endl;
    for(k=0;k<G.numEdges;k++)
    {
        cin>>i>>j;
        EdgeNode *e=new EdgeNode;
        e->adjvex=j;
        e->next=G.adjlist[i].firstedge;
        G.adjlist[i].firstedge=e;

        EdgeNode* e1=new EdgeNode;
        e1->adjvex=i;
        e1->next=G.adjlist[j].firstedge;
        G.adjlist[j].firstedge=e1;
    }
    cout<<"edges initialized"<<endl;
}
void DFS(GraphAdjList G,int i)
{
	EdgeNode *p;
    visited[i]=true;
    cout<<G.adjlist[i].data<<endl;
    p=G.adjlist[i].firstedge;
    while(p)
    {
        if(!visited[p->adjvex])
            DFS(G,p->adjvex);
        p=p->next;
    }
}

void DFSTraverse(GraphAdjList G)
{
    for(int i=0;i<G.numVertexes;i++)
        visited.push_back(false);
    for(int j=0;j<G.numVertexes;j++)
        if(!visited[j])
            DFS(G,j);
}

int main(int argc,char**argv)
{
    GraphAdjList G;
    create(G);
    DFSTraverse(G);
}



	



