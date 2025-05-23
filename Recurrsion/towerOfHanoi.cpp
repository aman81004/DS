#include<iostream>
#include<math.h>
using namespace std;
void towerOfHanoi(int n, char source, char helper, char destination){
    if(n==0) return ;
    towerOfHanoi(n-1, source, destination, helper);
    cout<<source<<"->"<<destination<<endl;
    towerOfHanoi(n-1, helper, source, destination);
}
int main(){
    int n;
    cout<<"Enter number of disk:";
    cin>>n;
    int moves=pow(2,n)-1;
    cout<<"Number of moves for solving:"<<moves<<endl;
    towerOfHanoi(n, 'A', 'B', 'C');
}