#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={11,2,3,5,6};
    int max=INT_MIN;
    for(int i=0;i<v.size();i++){
        if(max < v[i]){
            max=v[i];
        }
    }
    cout<<max;
}