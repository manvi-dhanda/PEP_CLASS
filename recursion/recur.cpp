#include <bits/stdc++.h>
using namespace std;

void print_rec(const string& str, int indx=0){

    int size = str.size();
    if(indx<0 || indx>(size-1)){//base condicition
        return;
    }
    cout<<str[indx]<<endl;

    print_rec(str,++indx);//again fun call

}

int main(){

    string s;
    cin>>s;

    print_rec(s);
}