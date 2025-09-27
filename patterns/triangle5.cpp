#include <iostream>
using namespace std;
int main()
{
    // Print the Floyd's triangle pattern
    int n;
    cout << "Enter the number of rows:";
    cin >> n;
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}