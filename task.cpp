#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

int indexMax(int arr[])
{
    int maxArr = arr[0];
    int index = 0;

    for (int i = 0; i <= 9; i++)
    {
        if (arr[i] > maxArr)
        {
            maxArr = arr[i];
            index = i;
        }
    }
    return index;
}

int main()
{
    int a[10];
    int i;
    srand(time(0));
    cout<<"Array: ";

    for (i = 0; i < 10; i++)
    {
        a[i] = rand() % 2001 + (-1000);
        cout<<a[i]<<" ";
    }

    cout<<endl;
    cout<<"Index of the maximum element of the array: "<<indexMax(a)<<endl;

}
