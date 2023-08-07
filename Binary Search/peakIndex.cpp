#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int> &arr)
{

    int s = 0;
    int e = arr.size() - 1;

    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }

        else
        {
            e = mid;
        }

        mid = s + (e - s) / 2;
    }
    return s;
}

int main()
{
    vector<int> vect{30, 70, 10, 20, 80, 50};
    cout << "Peak Index In Mountain Array : " << peakIndexInMountainArray(vect);
}