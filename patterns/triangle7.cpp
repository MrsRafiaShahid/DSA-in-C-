#include<iostream>
using namespace std;
int main(){
    // Print the reverse triangle pattern with characters
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=i+1;j>0;j--){
            char ch='A';
            ch=ch + j - 1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}