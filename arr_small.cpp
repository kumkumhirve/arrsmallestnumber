#include <iostream>
using namespace std;
int main()
{
    int nums[] = {5, 15, 22, 27, -15, 44};
    int size = 6;
    int smallest = INT_FAST8_MAX;

    for (int i = 0; i < size; i++)
    {
        if (nums[i] < smallest)
        {
            smallest = nums[i];
        }
    }
    cout << smallest << endl;
    return 0;
}