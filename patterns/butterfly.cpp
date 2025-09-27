#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter the number of rows:";
    cin >> n;
    // upper half
    for (int i = 0; i < n; i++)
    {
        // stars
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        // spaces
        for (int k = 0; k < 2 * (n - i - 1); k++)
        {
            cout << " ";
        }
        // stars
        for (int l = 0; l < i + 1; l++)
        {
            cout << "*";
        }

        cout << endl;
    }
    //lowerhalf
    for(int i=0;i<n-1;i++){
        //stars
        for(int j=0;j<n-i-1;j++){
            cout<<"*";
        }
        //spaces
        for(int k=0;k<2*(i+1);k++){
            cout<<" ";
        }
        //stars
        for(int l=0;l<n-i-1;l++){
            cout<<"*";
        }
        cout<<endl;
    }
}