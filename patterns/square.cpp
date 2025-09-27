#include <iostream>
using namespace std;


int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    for(int i=1;i<=n;i++){
        char ch='A';
        for(int j=1;j<=n;j++){
            cout<<ch<<" ";//print character
            // cout<<j; // print number
            // cout<<"* ";//print star
            ch++; //increment character ascii value
        }
        cout<<endl;
    }
}