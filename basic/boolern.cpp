#include<iostream>
using namespace std;
int glo=6;
void sum(){
    cout<<glo;
}
int main(){
    int glo=8;
     glo=65;
    bool c=true;
    sum();
    cout<<glo<<c;
    return 0;
}
