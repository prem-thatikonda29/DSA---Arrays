#include <iostream>
using namespace std;

int binary(int arr[], int n, int key){
    int s = 0;
    int e = n - 1;
    int mid;
    
    while(s <= e){
        mid = (s+e) / 2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] > key){
            e = mid - 1;
        }
        else if(key > arr[mid]){
            s = mid + 1;
        }
    }
    return -1;
}

int main() {
    int size;
    cout << "Enter size of the array: ";
    cin >> size;
    
    int array[size];
    cout << "Enter array elements: ";
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }
    
    int key;
    cout << "Enter key: ";
    cin >> key;
    
    cout << binary(array,size,key)<<endl;

    return 0;
}