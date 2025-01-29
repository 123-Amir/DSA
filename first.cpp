#include<iostream>
using namespace std;
int sum(int k){
    if(k>0){
        return k + sum(k-1);
    }else{
    return 0;
    }
}
int main(){
    int res = sum(10);
    cout<<"Sum is "<<res;
return 0;
}
