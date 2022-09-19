#include<iostream>
using namespace std;

int printProduct(int m1, int m2, int product){
    cout<<m1<<"*"<<m2<<"="<<product;
}

int main()
{
    int m1 = 4;
    int m2 = 5;
    int product;

    product = m1 * m2;
    
    printProduct(m1, m2, product);
    return 0;
}
