#include<bits/stdc++.h>
using namespace std;

bool ratInMaze(char maze[][5], int soln[][5], int i, int j, int m, int n){       //doubt
    if(i==m && j==n){
        soln[m][n]=1;
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){           //rat in a maze
            cout<<soln[i][j];
        }
        cout<<endl;
        }
        cout<<endl;
        return true;      //for 1 path hme mil gya
    }

    if(i>m || j>n){             //rat should be inside grid
        return false;
    }

    if(maze[i][j]=='X'){       //cell of maze should not be blocked
        return false;
    }

    soln[i][j]=1;      //assume sol exist through current cell  


    bool rightSuccess= ratInMaze(maze,soln,i,j+1,m,n);     //by taking one step we are reducing the size of grid
    bool downSuccess= ratInMaze(maze,soln,i+1,j,m,n);

    soln[i][j]=0;                //backtracking

    if(rightSuccess || downSuccess){
        return true;
    }
    return false;
}

int main(){
    char maze[][5]={                         //given matrix
                       "0000",
                       "00X0",
                       "000X",
                       "0X00"
                    };

    int soln[4][5]={0};     //path matrix            //by defaut 0(koi bhi element fill nhi kiya hmne isme)
    int m=4,n=4;
    bool ans= ratInMaze(maze,soln,0,0,m-1,n-1);
    if(ans==false){
        cout<<"Path does not exist!";

    }

return 0;
}