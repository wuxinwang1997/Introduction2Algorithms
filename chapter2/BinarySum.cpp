#include <iostream>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    string A(n, '0');
    string B(n, '0');
    cin >> A;
    cin >> B;
    
    bool flag=false;
    string res(n+1,'0');
    
    for(int x=n-1;x>=0;x--)
    {
        if(A[x]=='0'&&B[x]=='0'&&flag==false)
        {
            res[x+1]='0';
            flag=false;
        }
        else if(A[x]=='0'&&B[x]=='0'&&flag==true)
        {
            res[x+1]='1';
            flag=false;
        }
        else if((A[x]=='0'&&B[x]=='1'&&flag==false)||(B[x]=='0'&&A[x]=='1'&&flag==false))
        {
            res[x+1]='1';
            flag=false;
        }
        else if((A[x]=='0'&&B[x]=='1'&&flag==true)||(B[x]=='0'&&A[x]=='1'&&flag==true))
        {
            res[x+1]='0';
            flag=true;
        }
        else if(A[x]=='1'&&B[x]=='1'&&flag==true)
        {
            res[x+1]='1';
            flag=true;
        }
        else if(A[x]=='1'&&B[x]=='1'&&flag==false)
        {
            res[x+1]='0';
            flag=true;
        }
    }

    if(flag==false)
    {
        cout << res << endl;
    }
    else
    {
        res[0] = '1';
        cout << res << endl;
    }

    return 0;
}