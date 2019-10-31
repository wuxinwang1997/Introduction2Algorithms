#include <iostream>

using namespace std;

int main()
{
    int length, x;
    printf("请输入数组大小与要求的和：");
    scanf("%d%d", &length, &x);
    int * list = new int[length];
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &list[i]);
    }
    //对每个元素搜索，算出另一个元素大小，在剩余元素中使用二分法查找即可
    for (int i = 0; i < length; i++)
    {
        int search = x - list[i];
        int low = 0, high = length-1, mid = (low+high)/2;
        while(low < high)
        {
            if(search == list[mid] && mid != i)
            {
                printf("%d %d\n", list[i], list[mid]);
                return 0;
            }
            else if(search < list[mid] && mid != i)
            {
                high = mid;
                mid = (low+high)/2;
            }
            else if(search > list[mid] && mid != i)
            {
                low = mid;
                mid = (low+high)/2;
            }           
        }
    }
    return 0;
}