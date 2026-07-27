#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &arr, int m)
{
    int s = m + 1;
    int e = arr.size() - 1;

    while (s < e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};

    int m = 2;

    reverseArray(arr, m);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}