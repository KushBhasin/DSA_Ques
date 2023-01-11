#include<stdio.h>
#include<iostream>
using namespace std;
#define V 7

void init(int arr[][V])
{
    int i,j;
    for(i = 1; i < V; i++)
        for(j = 1; j < V; j++)
            arr[i][j] = 0;
}

void addEdge(int arr[][V],int src, int dest)
{
     arr[src][dest] = 1;
     arr[dest][src] = 1;
}

void printAdjMatrix(int arr[][V])
{
     int i, j;

     for(i = 1; i < V; i++)
     {
         for(j = 1; j < V; j++)
         {
            //  printf("%d ", arr[i][j]);
             if(arr[i][j]==1){
                cout<<i<<"->"<<j<<endl;
             }
         }
         printf("\n");
     }
}

int main()
{
    int adjMatrix[V][V];

    init(adjMatrix);
    addEdge(adjMatrix,1,2);
    addEdge(adjMatrix,1,4);
    addEdge(adjMatrix,1,6);
    addEdge(adjMatrix,2,3);
    addEdge(adjMatrix,3,6);
    addEdge(adjMatrix,3,5);
    addEdge(adjMatrix,4,5);


    printAdjMatrix(adjMatrix);

    return 0;
}