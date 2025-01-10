#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count=1;
    do{
        cout<<n<<" * "<<count<<" = "<<n*count<<endl;
        count++;
    }while(count<=10);
    return 0;
}