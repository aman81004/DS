#include<iostream>
using namespace std;
class Calculator{
    public:
    int a;
    int b;

    void add(){
        cout<<"Addition is:"<<a+b<<endl;
    }
    void substract(){
        cout<<"Substraction is :"<<a-b<<endl;
    }
    void multiplication(){
        cout<<"Multiplication is :"<<a*b<<endl;
    }
    void division(){
        cout<<"Division is:"<<a/b<<endl;
    }
};
int main(){
    int a;
    cout<<"Enter a number:";
    cin>>a;
    int b;
    cout<<"Enter a number:";
    cin>>b;
    Calculator num;
    num.a=a;
    num.b=b;
    num.add();
    num.substract();
    num.multiplication();
    num.division();
}
