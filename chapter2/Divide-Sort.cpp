#include <iostream>

using namespace std;

// 合并两个已排好序的数组
void merge(int* A, int p, int q, int r)
{
    int n1 = q-p+1;
    int n2 = r-q;
    int *L = new int[n1+1];
    int *R = new int[n2+1];
    for (int i = 0; i < n1; i++)
    {
        L[i] = A[p+i];
    }

    for (int j = 0; j < n2; j++)
    {
        R[j] = A[q+1+j];
    }

    R[n2] = L[n1] = INT32_MAX;

    int i = 0,j = 0;

    for (int k = p; k <= r; k++)
    {
        if (L[i] <= R[j])
        {
            A[k] = L[i];
            i++;
        }
        else
        {
            A[k] = R[j];
            j++;
        }
    }
}

void DivideSort(int * A, int p, int r)
{
    int n = 5;
    if(p < r)
    {
        int mid = 0;
        mid = (p + r) / 2;
        DivideSort(A, p, mid);
        DivideSort(A, mid+1, r);
        merge(A, p, mid, r);
        for (int i = 0; i < n; i++)
        {
            printf("%d", A[i]);
        }
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int * A = new int[n];
    for (int i = 0; i < n; i++)
    {
        int tmp;
        scanf("%d", &tmp);
        A[i] = tmp;
    }
    DivideSort(A, 0, n-1);
    for (int i = 0; i < n; i++)
    {
        printf("%d", A[i]);
    }
    printf("\n");
    return 0;
}