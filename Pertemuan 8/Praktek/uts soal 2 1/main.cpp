/*
    Nama  : Rifqi Zuhad F
    Nim   : A11.2022.14307
    Kel   : A11.4207
*/


#include <iostream>

using namespace std;



void bubblesort(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]<arr[j+1]){
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr [j+1] = tmp;
            }
        }
    }
}

void cetakArray(int arr[], int n){
    cout << "array [" << n << "] : {";
    for(int i=0;i<n;i++){
        cout << arr[i];
        if(i<n-1){
            cout << ", ";
        }
    }cout << "}" << endl;
}


int main()
{
    int arr [] = {3,5,2,5,9,7,2,1,8};
    int n = sizeof(arr) / sizeof(arr[0]);

    cetakArray(arr, n);
    bubblesort(arr, n);
    cetakArray(arr, n);
    return 0;
}
