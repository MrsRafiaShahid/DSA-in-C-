#include<iostream>
using namespace std;
int main(){
    // Print the inverted triangle pattern with numbers
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    for(int i=0;i<n;i++){//outer loop
        for(int j=0;j<i;j++){//spaces
            cout<<" ";
        }
        for(int k=0;k<n-i;k++){//numbers
            cout<<(i+1);
        }
        cout<<endl;
    }
}