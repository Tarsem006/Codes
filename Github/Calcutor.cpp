#include <iostream>
using namespace std;

int main(){
    int n1, n2;
    cout<<"Enter your 1st number "<<endl;
    cin>>n1;
    char op;
     cout<<"Enter a operator "<<endl;
    cin>>op;
    cout<<"Enter your 2nd number "<<endl;
    cin>>n2;
   
   
    
    switch(op){
        case '+':
        cout<<"Your result is "<<n1+n2<<endl;
        break;

        case '-':
        cout<<"Your result is "<<n1-n2<<endl;
        break;

        case '*':
        cout<<"Your result is "<<n1*n2<<endl;
        break;

        case '/':
        cout<<"Your result is "<<n1/n2<<endl;
        break;

        case '%':
        cout<<"Your result is "<<n1%n2<<endl;
        break;

        default:

        cout<<"Synatax Error "<<endl;
        break;


    }


}