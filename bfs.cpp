#include <iostream>
#include <queue>
using namespace std;
int main()
{
    int graph[5][5] = {{0, 1, 1, 0, 0}, {1, 0, 1, 1, 0}, {1, 1, 0, 0, 1}, {0, 1, 0, 0, 1}, {0, 0, 1, 1, 0}};
    int visited[5] = {0, 0, 0, 0, 0};
    queue<int> q1;
    int i = 0;
    q1.push(0);
    q1.push(1);
    q1.push(1);//feature2 update

    while(!q1.empty())
    {
        visited[q1.front()] = 1;
        i=q1.front();
        cout<<q1.front()<<" ";
        q1.pop();
        for(int j=0; j<5; j++){
            if(graph[i][j]==1 && visited[j]!=1){
                q1.push(j);
                visited[j]=1;
                visited[j]=1; //featur1 update
            }
        }
    }
}