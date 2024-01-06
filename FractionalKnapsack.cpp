#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int p[] = {30, 20, 100, 90, 160};
    int w[] = {5, 10, 20, 30, 40};
    float arr[5] = {0, 0, 0, 0, 0};
    int y = 0;
    int x = 0;
    float pwr[5];
    float cap = 60;
    float sum = 0;

    for (int i = 0; i < 5; i++)
    {
        pwr[i] = (float)p[i] / w[i];
    }

    for (int k = 0; k < 5; k++)
    {
        for (int j = k + 1; j < 5; j++)
        {
            if (pwr[k] < pwr[j])
            {
                float temp = pwr[k];
                pwr[k] = pwr[j];
                pwr[j] = temp;
                swap(p[k], p[j]);
                swap(w[k], w[j]);
            }
        }
    }
    cout << "ratios: ";
    for (int k = 0; k < 5; k++)
    {
        cout << pwr[k] << "  ";
    }
    cout << endl
         << "profits:  ";
    for (int k = 0; k < 5; k++)
    {
        cout << p[k] << "  ";
    }
    cout << endl
         << "weights:  ";

    for (int k = 0; k < 5; k++)
    {
        cout << w[k] << "  ";
    }
    printf("\n");
    cout << "capacity  : ";
    while (cap > 0)
    {
        if (w[y] < cap)
        {
            arr[x] = 1;
            cout << cap << "  ";
            cout << w[y] << "  ";
            cap = cap - w[y];
            cout << cap << "  ";
            x++;
        }
        else
        {
            // cout<<cap<<"  ";
            arr[x] = cap / w[y];
            cap = 0;
            cout << cap << "  ";
        }
        y++;
    }
    cout << endl
         << "fraction of obj: ";
    for (int k = 0; k < 5; k++)
    {
        cout << arr[k] << "  ";
    }
    cout << endl;
    for (int k = 0; k < 5; k++)
    {
        arr[k] = arr[k] * p[k];
        cout << arr[k] << endl;
        sum = sum + arr[k];
    }
    cout << "profit: ";
    cout << sum;
}