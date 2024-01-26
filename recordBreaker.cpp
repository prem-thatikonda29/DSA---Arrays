#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number of days: ";
    cin >> n;

    int arr[n];
    cout << "Enter number of customers on \n";
    for (int i = 0; i < n; i++){
        cout << "Day " << i+1 << ": ";
        cin >> arr[i];
    }

    int mx = arr[0];
    int maxDay = 0;

    for (int i = 1; i<n; i++){
        if(arr[i] > mx){
            if(arr[i+1] < arr[i]){
                mx = arr[i];
                maxDay = i;
            }
        }
    }
    cout << "Record breaking day: ";
    cout << "Day " << maxDay << ", ";
    cout << mx << " customers"<<endl;

    return 0;
}
