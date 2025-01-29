#include<iostream>
using namespace std;
class car {
public:
    string brand;
    string modal;
    int year;
    car(string x, string y, int z){
    brand = x;
    modal = y;
    year = z;
    }
};
int main(){
    car obj1("X","Y",2018);
    car obj2("A","B",2020);
    cout<<obj1.brand<<" "<<obj1.modal<<" "<<obj1.year<<endl;
    cout<<obj2.brand<<" "<<obj2.modal<<" "<<obj1.year<<endl;
return 0;
}
