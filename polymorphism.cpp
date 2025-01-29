#include<iostream>
using namespace std;
class animal{
public:
    void animalsound(){
        cout<<"The animal make sound \n";
    }
};
class pig : public animal{
public:
    void animalsound(){
    cout<<"The pig says: wee wee \n";
    }
};
class dog : public animal{
public:
    void animalsound(){
    cout<<"The dog says: bho bho \n";
    }
};
int main(){
    animal a;
    pig b;
    dog c;
    a.animalsound();
    b.animalsound();
    c.animalsound();
return 0;
}
