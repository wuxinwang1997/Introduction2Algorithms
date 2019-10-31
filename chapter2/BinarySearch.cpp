#include <iostream>

using namespace std;
// 假设按从小到达排序
int main()
{
    printf("请输入长度和预查找value值:");
    int length, search;
    scanf("%d%d", &length, &search);
    int * list = new int[length];
    printf("清按照从小到大输入value：");
    for (int i = 0; i < length;i++)
    {
        scanf("%d", &list[i]);
    }
    int low = 0,high = length-1, mid = (low+ high)/2;
    while(low < high)
    {
        if(search == list[mid])
        {
            printf("%d\n", mid);
            return 0;
        }
        else if(search < list[mid])
        {
            high = mid;
            mid = (low+high)/2;
        }
        else
        {
            low = mid;
            mid = (low+high)/2;
        }
    }
    printf("Not found!\n");
    return 0;
}