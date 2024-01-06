#include<iostream>
#include<stack>
using namespace std;

int main(){
    int graph[5][5] = {{0, 1, 1, 0, 0}, {1, 0, 1, 1, 0}, {1, 1, 0, 0, 1}, {0, 1, 0, 0, 1}, {0, 0, 1, 1, 0}};
    int visited[5] = {0, 0, 0, 0, 0};
    int i;
    stack<int> s1;
    s1.push(0);
    visited[0]=1;
    while(!s1.empty()){
        i=s1.top();
        cout<<i<<"  ";
        s1.pop();
        for(int j=0; j<5; j++){
            if(graph[i][j]==1 && visited[j]!=1){
                visited[j]=1;
                s1.push(j);
            }
        }

    }

}