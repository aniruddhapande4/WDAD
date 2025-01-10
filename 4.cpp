#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin>>a;
    int i=0,j=a.size()-1;
    while(i<=j){
        swap(a[i],a[j]);
        i++;
        j--;
    }
    cout<<a<<endl;
    return 0;
}