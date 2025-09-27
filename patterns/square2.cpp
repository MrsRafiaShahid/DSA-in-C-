#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows:";
    cin >> n;
    int num = 1;
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            cout << ch << " ";
            ch = num + 'A'; // increment character ascii value
            num++;
        }
        cout << endl;
    }
    return 0;
}