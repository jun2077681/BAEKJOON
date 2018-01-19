#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(void)
{
    int N;
    cin >> N;
    int *a;
    int *b;
    int *c;
    int *d;
    a = new int[N];
    b = new int[N];
    c = new int[N];
    d = new int[N];

    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
        c[i] = a[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> b[i];
        d[i] = b[i];
    }

    int temp;

    for (int i = N-1; i >0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (c[j] < c[j + 1])
            {
                temp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = temp;
            }
            if (d[j] > d[j + 1])
            {
                temp = d[j];
                d[j] = d[j + 1];
                d[j + 1] = temp;
            }
        }
    }
    int answer = 0;
    for (int i = 0; i < N; i++)
    {
        answer = answer + c[i] * d[i];
    }

    cout << answer << endl;
    delete a;
    delete b;
    delete c;
    delete d;
}
