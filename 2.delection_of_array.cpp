#include <iostream>
using namespace std;
void del(int arr[], int a, int &n);
int main()
{
    int arr[10] = {1, 2, 3, 4, 5};
    int n = 5, a;
    cout << "The array is " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "enter the position from which a number should be deleted: "
         << endl;
    cin >> a;
    if (a > n)
    {
        cout << "invalid position" << endl;
    }
    else
    {
        del(arr, a - 1, n);
    }
}
void del(int arr[], int a, int &n)
{
    for (int i = a; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    cout << "new array is " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}