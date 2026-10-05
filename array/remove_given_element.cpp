#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={0,1,2,3,4,2,2};
    int val=2;
    // vector<int> m;
    // for(int i=0;i<v.size();i++){
    //     if(v[i]==val){
    //         continue;
    //     }else{
    //         m.push_back(v[i]);
    //     }
    // }
    // int count=0;
    // for(auto X:m){
    //    count++;
    // }
    // cout<<count;


    int k=0;
    for(int i=0;i<v.size();i++){
        if(v[i]!=val){
            v[k]=v[i];
            k++;
        }
    }
    cout<<k;
}