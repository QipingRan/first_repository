#include<iostream>
using namespace std;

int main(){
    int age=19;
    cout<<age<<endl;
    int *pAge=&age;
    cout<<pAge<<endl;
    cout<<*pAge<<endl;  

    return 0;
}