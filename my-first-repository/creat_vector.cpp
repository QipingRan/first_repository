#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> g1;
    for(int i=0;i<=10;i++){
        g1.push_back(i);
    }
    for(auto i=g1.begin();i!=g1.end();i++){
        cout<<*i<<" ";
    }
    cout<<"22"<<endl;
    for(int i=0;i<=10;i++){
        cout<<g1[i]<<" ";
    }

    return 0;
}