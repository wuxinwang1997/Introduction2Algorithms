#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    vector<int> array;
    for(int i = 0 ; i < n; i++)
    {
        int tmp;
        scanf("%d", &tmp);
        array.push_back(tmp);
    }
    int value;
    scanf("%d", &value);
    int idx = -1;
    for (int j = 0; j < array.size(); j++)
    {
        if(value == array[j])
        {
            idx = j;
        }
    }
    idx >= 0 ? printf("value位于第%d个", idx+1) : printf("NIL");
    return 0;
}