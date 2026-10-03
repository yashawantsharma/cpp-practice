#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5};
    // for(int i=0;i<v.size();i++){
    //     for(int j=i;j<v.size();j++){
    //          if(v[i]>v[j]){
    //         cout<<"not sorted";
    //         return 0;
    //     }
    //     }
    // }
    // cout<<"sorted";


    for(int i=1;i<v.size();i++){
        if(v[i-1]>v[i]){
            cout<<"not sorted"<<endl;
            return 0;
        }
    }
    cout<<"sorted";
}