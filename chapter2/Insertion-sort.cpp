#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    scanf("%d\n", &n);
    vector<int> A;
    int tmp = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tmp);
        A.push_back(tmp);
    }
    int i = 0;
    for (int j = 1; j < A.size(); j++)
    {
        // Inert A[j] into the sorted sequence A[1..j-1]
        int key = A[j];
        i = j-1;
        while(i > 0 && A[i] > key)
        {
            A[i+1] = A[i];
            i = i - 1;
        }
        A[i+1] = key;
    }
    for(int k = 0; k < n; k++)
    {
        printf("%d", A[k]);
    }
    printf("\n");
    return 0;
}