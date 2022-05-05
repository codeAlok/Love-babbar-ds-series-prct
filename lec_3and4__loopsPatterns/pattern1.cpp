#include<iostream>
using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<j;
//             j=j+1;
//         }
//         cout<<endl;
//         i++;
//     }
// }

/*
5
12345
12345
12345
12345
12345

*/

int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<(n-j+1);  // to reverse order
            j++;
        }
        cout<<endl;
        i++;
    }
}

/*
5
54321
54321
54321
54321
54321
*/