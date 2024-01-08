#include<iostream>
using namespace std;

int main(){
    int arr[]={1,3,5,7,9,11,13,15,17};
    int n=sizeof(arr)/sizeof(int);

    //Printing the Elements of array 
    for(int i=0;i<n;i++){
        cout << "for index " << i << " Element : " << arr[i] << endl;
    }
    cout << endl;
}