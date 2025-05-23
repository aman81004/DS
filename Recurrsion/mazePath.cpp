#include<iostream>
using namespace std;
int maze(int sr,int sc,int er,int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int right=maze(sr,sc+1,er,ec);
    int down=maze(sr+1,sc,er,ec);
    return right+down;
}
int maze1(int row,int col){
    if(row<1 || col<1) return 0;
    if(row==1 && col==1) return 1;
    int right=maze1(row,col-1);
    int down=maze1(row-1,col);
    return right+down;
}
void printPath(int sr,int sc,int er,int ec,string s){
    if(sr>er || sc>ec) return ;
    if(sr==er && sc==ec){
        cout<<s<<endl;
        return ;
    }
    printPath(sr,sc+1,er,ec,s+'R');
    printPath(sr+1,sc,er,ec,s+'D');
}
int main(){
    cout<<"No of ways:"<<maze(1,1,3,3);
    printPath(1,1,3,3,"");
}