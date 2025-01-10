#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the First Number - ";
    cin>>n;
    int ans=n;
    int k=0,choice,temp;
    do{
        cout<<"1.Addition"<<endl;
        cout<<"2.Substraction"<<endl;
        cout<<"3.Multiplication"<<endl;
        cout<<"4.Division"<<endl;
        cout<<"5.Exit"<<endl;
        cin>>choice;
        if(choice!=5){
            cout<<"Enter the Number :";
            cin>>temp;
        }
        switch(choice){
            case 1:
                ans+=temp;
                break;
            case 2:
                ans-=temp;
                break;
            case 3:
                ans*=temp;
                break;
            case 4:
                ans/=temp;
                break;
            case 5:
                k=1;
                break;
        }
        if(k==0) cout<<"Updated Value : "<<ans<<endl;
    }while(k==0);
    return 0;
}