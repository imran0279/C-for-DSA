#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int main()
{
    //Just normally input output without space 
    /*char s[100];
    cin>>s;
    cout<<s<<endl;*/

    //Input Output with space
    /*char s[100];
    cin.getline(s,100);
    cout<<s<<endl;*/
    
    //remove enter 
    int a;
    char s[100];
    cin>>a;
    getchar(); //for removing enter
    cin.getline(s,100);
    cout<<a<<endl;
    cout<<s<<endl;
}