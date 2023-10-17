#include <iostream>
#include <vector>

int isbalance(int arr[], int index, int len)
{
    if (index >= len)
        return 1;
    if (arr[index] == -1)
        return 1;
    int left = isbalance(arr, index * 2 + 1, len);
    if (left == 0)
        return 0;
    int right = isbalance(arr, index * 2 + 2, len);
    if (left == 0)
        return 0;

    int offset = right - left;
    if (left > right)
        offset = left - right;
    if (offset > 1)
        return 0;
    return left < right ? right + 1 : left + 1;
}


int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, -1, -1, 4, 5};

    int tall = isbalance(arr, 0, sizeof(arr) / sizeof(int));
    std::cout << (tall != 0);
}
