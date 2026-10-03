#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={10,6,3,77,9};
    int largest=INT_MIN;
    int second_lar=0;
    for(int i=0;i<=v.size();i++){
        if(largest < v[i]){
            second_lar=largest;
            largest=v[i];
        }
        else if(largest>v[i]&&second_lar<v[i]){
            second_lar=v[i];
        }
    }
    cout<<second_lar;
}