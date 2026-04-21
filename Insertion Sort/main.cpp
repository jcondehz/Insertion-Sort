//
//  main.cpp
//  Insertion Sort
//
//  Created by Juan Carlos Conde Hernández on 21/04/2026.
//

#include <iostream>
using namespace std;

void insertionSort(vector<int>& arr){
    int n = arr.size();
    for(int i=1;i<n;i++){
        int key = arr[i];
        cout << "Key: " << key << endl;
        int j = i-1;
        cout << "j: " << j << endl;
        
        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    
}

int main() {
    vector<int> arr = {4,2,5,1,0,6,9,8};
    
    insertionSort(arr);
    
    for(int x: arr) cout <<" "<< x << ",";
}
