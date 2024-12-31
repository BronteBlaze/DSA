#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Dynamic Array Using Vector
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    vector<int> a(n);
    cout << "Enter " << n << " number";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "You Entered";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;

    //Dynamic Array Using Pointer
    // int n;
    // cin >> n;
    // int *arr = new int(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i];
    // }
}