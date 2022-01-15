#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    
    int l = 0;
    int h = s.length()-1;

    while(h > l){
        if(s[l++] != s[h--]){
            cout << "Not a palindrome" << endl;
            return 0;
        }
    }
    cout << "Is a palindrome" << endl;
    return 0;

}
