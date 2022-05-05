// Q. first and last position of an element in sorted array

#include<iostream>
using namespace std;

int firstOccur(int arr[], int size, int key){
    int start=0, end = size-1;
    int mid = start + (end-start)/2;
    int ans= -1;

    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            end = mid -1;
            cout<<mid<< " ";
            cout<<ans<<" ";
        }
        else if(arr[mid] > key){
            end = mid -1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }

        mid = start + (end - start)/2;
    }
    return ans;
}
int lastOccur(int arr[], int size, int key){
    int start=0, end = size-1;
    int mid = start + (end-start)/2;
    int ans= -1;

    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
            cout<<mid<< " ";
            cout<<ans<<" ";
        }
        else if(arr[mid] > key){
            end = mid -1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }

        mid = start + (end - start)/2;
    }
    return ans;
}
int main(){
    int odd[11] = {1,2,2,3,3,3,3,4,4,5,6};
    int key=3;
    
    cout<<"The first occurence is "<< firstOccur(odd,11,key)<<endl;
    cout<<"The first occurence is "<< lastOccur(odd,11,key);

}