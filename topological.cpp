#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> st;
    int graph[6][6] = {{0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0}, {0, 0, 0, 1, 0, 0}, {0, 1, 0, 0, 0, 0}, {1, 1, 0, 0, 0, 0}, {1, 0, 1, 0, 0, 0}};
    int indegree[] = {0, 0, 0, 0, 0, 0};
    for (int i = 0; i < 6; i++)
    {
        int sum = 0;
        for (int j = 0; j < 6; j++)
        {
            indegree[i] += graph[j][i];
        }
    }
    for (int i = 0; i < 6; i++)
    {
        cout << "indegree of " << i << " :: " << indegree[i] << "  " << endl;
    }

    for (int i = 0; i < 6; i++)
    {
        if (indegree[i] == 0)
        {
            st.push(i);
        }
    }
    while (!st.empty())
    {
        int k = st.top();
        cout<<k<<" ";
        st.pop();
        for (int i = 0; i < 6; i++)
        {
            if (graph[k][i] == 1)
            {
                indegree[i]--;
                if (indegree[i] == 0)
                {
                    st.push(i);
                }
            }
        }
    }
}

//hello world