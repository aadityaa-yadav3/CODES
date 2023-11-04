#include <iostream>
using namespace std;

int main(){
    // taking number of testcases
    int t; cin >> t;
    while(t--){
        //creating the array
        int n; cin >> n;
        int arr[n] = {0};
        // taking input in the array
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        // taking firdt element as a vairable
        int a = arr[0], b = 0;
        // checking for other variables
        for (int i = 1; i < n; i++){
            if (arr[i] != a){
                // if second element is different
                if(i == 1){
                    // if second elemnt is odd one out
                    if (arr[i+1] == a){
                        cout << i+1 << endl;
                        break;
                    }
                    // if first element is is odd one out
                    else{
                        cout << 1 << endl;
                        break;
                    }
                }
                // if second element is not different
                else{
                    cout << i+1 << endl;
                    break;
                }
            }
        }
    }
}