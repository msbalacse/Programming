#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int isSmall = 32; 
    int start = 65;
    for(int i=0; i<n; i++){
    bool capital = (i+1)%2 !=0 ? true : false;
        for(int j=0; j<=i; j++){
            int val = start;
            if(!capital){
                val+=32;
                capital = true;
            }else {
                capital = false;
            }
            char N = char(val);  
            cout << N << " ";
            start++;
        }
        cout << endl;
    }
    return 0;
}
