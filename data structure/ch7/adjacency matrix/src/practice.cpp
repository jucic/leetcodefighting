#include "../include/practice.h"

void CreateMgraph(MGraph &G)
{
    int i,j,k,w;
    cout<<"pls input the number of vertexes and edges"<<endl;
    cin>>G.numVertexes>>G.numEdges;
    cout<<"pls input the data of "<<G.numVertexes<<" vertexes"<<endl;
    for(i=0;i<G.numVertexes;i++)
        cin>>G.vexs[i];
    for(j=0;j<G.numVertexes;j++)
        for(k=0;k<G.numVertexes;k++)
            G.arc[j][k]=INFINITY;
    cout<<"pls input the data of "<<G.numEdges<<" edges in the format of \"i j weight\""<<endl;
    for(k=0;k<G.numEdges;k++)
    {
        cin>>i>>j>>w;
        G.arc[i][j]=w;
        G.arc[j][i]=w;
    }
}

void DFS(MGraph G,int i)
{
	int j;
    visited[i]=true;
    cout<<G.vexs[i]<<endl;
	for(j=0;j<G.numEdges;j++)
        if(G.arc[i][j]==1&&!visited[j])
            DFS(G,j);
}

void DFSTraverse(MGraph G)
{
    for(int i=0;i<G.numVertexes;i++)
        visited[i]=false;
    for(int j=0;j<G.numVertexes;j++)
        if(!visited[j])
            DFS(G,j);
}

int main(int argc,char** argv)
{
    MGraph graph;
    CreateMgraph(graph);
    DFSTraverse(graph);
}




	



