#include <iostream>
using namespace std;
int main()
{
    // Print the Floyd's triangle pattern with characters
    int n;
    cout << "Enter the number of rows:";
    cin >> n;
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch << " "; // print character
            ch++;           // increment character ascii value
        }
        cout << endl;
    }
}