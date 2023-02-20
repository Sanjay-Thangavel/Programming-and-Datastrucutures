#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>
#define v 7

using namespace std;

int minkey(int key[],bool visited[])
{
  int minvalue=INT_MAX;
  int mindex=0;
  for(int i=0; i<v ;i++)
  {
      if( (!visited[i]) && minvalue > key[i]  )
      {
          minvalue=key[i];
          mindex=i;
      }

  }
  return mindex;
}
void print(int parent[],int graph[v][v] )
{
    for(int i=1; i<v; i++)
    cout<<parent[i]<<"      "<<graph[i][parent[i]]<<endl;
}
void prism(int graph[v][v])
{
    int parent[v];
    int key[v];
    bool visited[v]={0};
    for(int i=0; i<v; i++)
    {
        key[i]=INT_MAX;
    }
    for(int cv=0 ; cv < v-1 ; cv++)
    {
         int min=minkey(key,visited);
        visited[min]=true;

        for(int adj=0; adj < v;adj++)
        {
            if( (graph[min][adj] ) && (!visited[adj]) &&(key[adj]>graph[min][adj]) )
            {
                parent[adj]=min;
                key[adj]=graph[min][adj];
            }
        }

    }
    print(parent,graph);
}


int main()
{
    int graph[v][v]=
    {                 {0,28,0,0,0,10,0},
                     {28,0,16,0,0,0,14 },
                     {0,16,0,12,0,0,0},
                     {0,0,12,0,22,0,18},
                     {0,0,0,22,0,25,24},
                     {10,0,0,0,25,0,0},
                     {0,14,0,18,24,0,0}
    };
    prism(graph);
}
