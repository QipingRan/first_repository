#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector <int> v;
    for(int i=0;i<=5;i++){
        v.push_back(i);
    }
    for(int i=0;i<=5;i++){
        std::cout<<v[i]<<" ";
    }
    std::cout<<"Hello World!"<<endl;
    cout<<v.size()<<" "<<v.capacity()<<" "<<v.max_size();
    return 0;
}
