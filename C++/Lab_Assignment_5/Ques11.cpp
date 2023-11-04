#include <bits/stdc++.h>
using namespace std;

int main() {
    int num = 0; cin >> num;
    vector<int> petrol, distance;
    
    for(int i = 0; i<num; i++){
        int tmpP; cin >> tmpP;
        petrol.push_back(tmpP);
    }
    
    for(int i = 0; i<num; i++){
        int tmpD; cin >> tmpD;
        distance.push_back(tmpD);
    }
    
    int flag = 0;
    for(int i = 0; i < num; i++){flag += petrol[i] - distance[i];}
    
    if (flag < 0) {
        cout<< "-1";
    }
    
    else{
        int idx = 0;
        while(true) {
            flag = 0;
            for (int j = idx; j < num; j++) {flag += (petrol[j] - distance[j]);if (flag < 0) {break;}}
            if (flag >= 0) {break;}
            idx++;
        }
        cout << idx;
    }
    return 0;
}