#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    switch(x%2)
    {
        case 0:
        cout<<"EVEN"<<endl;
        case 1:
        cout<<"ODD"<<endl;
    }
    
}