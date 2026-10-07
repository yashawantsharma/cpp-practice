#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5,6};
    int k=3;
    for(int j=0;j<k;j++){
    int m=v[0];
    for(int i=1;i<v.size();i++){
        v[i-1]=v[i];
    }
    v[v.size()-1]=m;
}

for(auto x:v){
    cout<<x<<" ";
}
}