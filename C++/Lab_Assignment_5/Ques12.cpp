#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int downToZero(int n) {
    
    queue<int> qu;
    int arr[n+2] = {0};
    qu.push(n);
    
    while(!qu.empty()){
        int crr = qu.front();
        qu.pop();
        if (crr == 0) {break;}
        if(arr[crr-1] == 0) {qu.push(crr-1); arr[crr-1] = arr[crr] + 1;}
        
        for (int i = sqrt(crr); i >= 2; i--){
            if (crr % i == 0 && arr[crr/i] == 0){
                qu.push(crr/i);
                arr[crr/i] = arr[crr] + 1;
            }
        }
    }
    
    return arr[0];
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string n_temp;
        getline(cin, n_temp);

        int n = stoi(ltrim(rtrim(n_temp)));

        int result = downToZero(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
