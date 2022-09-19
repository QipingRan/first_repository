#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m;
    vector<string> msg{"aa","bb","cc","dd"};
    for(const string&word:msg){
        cout<<word<<" ";
    }
    cin>>m;
    cout<<m+10;


    return 0;
}