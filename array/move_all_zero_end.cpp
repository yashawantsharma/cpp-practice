#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,0,3,4,0,2,0,8};
    // vector<int> m;
    // for(int i=0;i<v.size();i++){
    //     if(v[i]!=0){
    //         m.push_back(v[i]);
    //     }
    // }

    // for(int i=0;i<v.size();i++){
    //     if(v[i]==0){
    //         m.push_back(v[i]);
    //     }
    // }
    // for(auto x:m){
    //     cout<<x;
    // }


    int j=0;
    for(int i=0;i<v.size();i++){
        if(v[i]!=0){
            swap(v[i],v[j]);
            j++;
        }
    }
    for(auto x:v){
        cout<<x;
    }
}