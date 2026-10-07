#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={0,1,2,4,5,6};
    int j=0;
    for(int i=0;i<v.size();i++){
        if(v[i]!=j){
            cout<<"missing number : "<<j;
            return 0;
        }
        j++;
    }
    cout<<"missing number not found";
}