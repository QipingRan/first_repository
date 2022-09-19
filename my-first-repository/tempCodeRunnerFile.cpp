#include<iostream>
using namespace std;
int increment(int input);

int main()
{
    int a = 34;
    std::cout<<"Before the function call a = "<<a<<"\n";
    increment(a);
    std::cout<<"After the function call a = "<<a<<"\n";
    return 0;
}

int increment(int input)
{
    input++;
    cout<<&input<<" "<<endl;
    std::cout<<"In the function call a = "<<input<<"\n";    
}