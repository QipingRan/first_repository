#include <stdio.h>
#include <iostream>
#include <cstring>
#include <string>
#include <fstream>

using namespace std;




int main()
{
    int grid[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    string nameX;
    string nameO;
    int row;
    int column;

    int op=1;

    for(int i=1;i<=3;i++){
        
        if(op==1){
            cout<<"x's turn to input row and colomn: "<<endl;
            cin>>row;
            cin>>column;
            op=0;
            grid[row][column]=1;
        }else{
            cout<<"o's turn to input row and colomn: "<<endl;
            cin>>row;
            cin>>column;
            op=1;
            grid[row][column]=2;
        }
        for(int i=0;i<4;i++){
            int xsum=0;
            int osum=0;
            for(int j=0;j<4;j++){
                if(grid[i][j]==1){
                    xsum+=1;
                }
            }
            if (xsum==2){
                cout<<"X wins!"<<"\n";
            }
            
        }

        
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<grid[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}



