#include<iostream>
using namespace std;
int pallindrome(int x);
int main(){
    int x;
    cout<<"enter the number:";
    cin>>x;
    int result=pallindrome(x);
    if(result==1){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}
int pallindrome(int x){
    int  y=x;
    int n1,reverse=0;
    while(x>0){
        n1=x%10;
        reverse=reverse*10+n1;
        x=x/10;
    }
    if(y==reverse){
        return 1;
    }
    else{
        return 0;
    }
}