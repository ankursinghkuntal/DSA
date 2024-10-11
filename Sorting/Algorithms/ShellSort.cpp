#include<bits/stdc++.h>
using namespace std;

void ShellSort(int arr[], int n){
    for(int gap = n/2; gap > 0; gap/=2){
        for(int i = gap; i < n; i++){
            int temp = arr[i];
            int j;
            for(j = i; j >= gap && arr[j-gap] > temp; j-=gap){
                arr[j] = arr[j-gap];
            }
            arr[j] = temp;
        }
    }
}

int main(){
    int n = 7; 
    int arr[n] = {1,89,2,78,96,34,23};
    ShellSort(arr,n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}