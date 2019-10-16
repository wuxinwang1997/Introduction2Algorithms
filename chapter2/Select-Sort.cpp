#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        scanf("%d", &tmp);
        a.push_back(tmp);
    }

    for (int j = 0; j < n-1; j++)
    {
        int small = a[j];
        int idx = j;
        for (int k = j+1; k < n; k++)
        {
            if (small > a[k])
            {
                small = a[k];
                idx = k;
            }
        }
        a[idx] = a[j];
        a[j] = small;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");

    return 0;
}