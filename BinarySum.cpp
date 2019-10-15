#include <iostream>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    char * A = new char[n];
    char * B = new char[n];
    char * C = new char[n+1];
    for (int i = 0; i < n+1; i++)
    {
        C[i] = '0';
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%c", &A[i]);
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%c", &B[i]);
    }

    int carry = 0;
    int i = 0;
    for (i = 0; i < n; i++)
    {
        C[i] = (A[i] + B[i] + carry) % 2;
        carry = (A[i] + B[i] + carry) / 2;
    }
    C[i] = carry;

    // for(int i = n-1; i > 0; i--)
    // {
    //     int tmp = A[i] - '0' + B[i] - '0';
    //     if (C[i+1] - '0' + tmp < 2)
    //     {
    //         C[i+1] = (C[i+1] -'0' + tmp)%2 + '0';
    //         printf("%c", C[i+1]);
    //     }
    //     else
    //     {
    //         C[i+1] = '0';
    //         C[i] = C[i] + '1'-'0';
    //         printf("%c%c", C[i], C[i+1]);
    //     }
    // }
    // printf("\n");
    for(int j = 0; j < n+1; j++)
    {
        printf("%c", C[j]);
    }

    printf("\n");
    return 0;
}