#include<iostream>
#include<algorithm>
#include<utility>
using namespace std;
/*
//Sawp using function call
int swap_value(int *a,int *b)
{
    int tmp=*a;
    *a=*b;
    *b=tmp;
}*/
int main(){
    //Max Min from two variable 
    /*int a,b;
    cin>>a>>b;
    int mn= min(a,b);
    cout<<"Min Value"<<" "<<mn<<endl;
    int mx = max(a,b);
    cout<<"Max Value"<<" "<<mx<<endl;*/
    //Max Min from 4 variable 
    /*int a,b,c,d;
    cin>>a>>b>>c>>d;
    int mn= min({a,b,c,d});
    cout<<"Min Value "<<mn<<endl;
    int mx= max({a,b,c,d});
    cout<<"Max Value "<<mx<<endl;*/

    //Sawp
    int a,b;
    cin>>a>>b;
    //swap_value(&a,&b);
    /*int tmp=a;
    a=b;
    b=tmp;*/
    swap(a,b);
    cout<<a<<" "<<b<<endl;

    return 0;

}