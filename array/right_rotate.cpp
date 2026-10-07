#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5};
    int k=v[0];
    vector<int> m;
    for(int i=1;i<v.size();i++){
        v[i-1]=v[i];

    }
    v[v.size()-1]=k;

    for(auto x:v) cout<<x<<" ";
}
