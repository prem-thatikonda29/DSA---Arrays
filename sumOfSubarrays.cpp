#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    int currentSum = 0;
    cout << "Enter elements: ";
    for(int i =0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        currentSum = 0;
        for(int j = i; j < n ; j++){
            currentSum+= arr[j];
            cout << currentSum << " ";
        }
        cout << endl;
    }

    return 0;
}
