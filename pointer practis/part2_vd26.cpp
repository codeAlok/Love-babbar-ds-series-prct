#include<iostream>
using namespace std;


void print(int *p){
  cout<< *p <<endl;
}

void update(int *p){
  p = p + 1;
}


int main(){

    /*
    int arr[10] = {2,4,6,19,30};

    cout<<"Address of first memory block is "<< arr<< endl;
    cout<<"Address of first memory block is "<< &arr<< endl;
    cout<<"Address of first memory block is "<< &arr[0]<< endl;

    cout<<"value at first index "<<arr[0] <<endl;
    cout<<"value at first index "<<*arr <<endl;
    cout<<"5th "<< *arr + 5 <<endl; // 2 + 5 = 7
    cout<<"7th "<< *(arr) + 5 <<endl; // 2 + 5 = 7
    cout<<"6th "<< * (arr + 1) <<endl; // * ( 0 + 1) = 4(value at 1th index)

    cout<<"8th "<< *(arr + 2)<<endl; // * (310 + 2 index) = * (318) = 6
    cout<<"9th "<< arr[2] <<endl; // 6 same as above *(arr + 2)
    cout<<"10th "<< 2[arr] <<endl; // 6 same *(2 + arr)

    int temp[10];
    cout<< "size of temp array "<<sizeof(temp) <<endl;
    cout<< "size of first element "<<sizeof(&temp)<<endl; //  why  not 8
    cout<< "size of first element "<<sizeof(*temp)<<endl;

    // int *ptr = &temp[0];
    int *ptr = temp;
    cout<< sizeof(ptr)<<endl;  // why not 8
    cout<< sizeof(*ptr)<<endl;
    cout<< sizeof(&ptr)<<endl;

    int newarr[10];
    // arr = arr + 1;  // show error

    int *ppt = &newarr[0];
    cout<<"the address of ppt before "<< ppt <<endl;
    cout<<"the address of newarr before "<< newarr <<endl;
    ppt = ppt + 1;
    cout<<"the address of ppt after "<< ppt <<endl;
    cout<<"the address of newarr after "<< newarr <<endl;
    
  */

//   ************ character array with pointer **********
    // int arr[5] = {1,2,3,4,5};
    // // int ch[6] = {'a','b','c','d','e'}; 
    // char ch[6] = "abcde"; // one space more for null character

    // cout<< arr << endl;

    // cout<< ch << endl; // print complete array

    // char *c = &ch[0];
    // cout<< c << endl; // print whole array till null char not meet

    // char temp = 'z';
    // char *t = &temp;
    // cout<< t << endl; // print z and garbage value till null char not meet

    // // char *chas = "abcde"; // error show
    // // cout<<*chas <<endl;

    //************** pointer to function ************
    int value = 5;
    int *p = &value;

    // print(p);

    cout<<"Before "<< p <<endl;
    update(p);
    cout<<"After "<< p <<endl;
    




    return 0;
}