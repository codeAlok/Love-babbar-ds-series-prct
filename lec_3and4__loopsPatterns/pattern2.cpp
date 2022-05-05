#include<iostream>
using namespace std;

int main(){
    int n,count=0;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            count++;
            cout<<count<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}

/*
3
1 2 3
4 5 6
7 8 9
*/