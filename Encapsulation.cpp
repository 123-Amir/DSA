#include<iostream>
using namespace std;
class employee{
private:
    int salary;
public:
    void setSalary(int a){ //getter
    salary = a;
    }
    int getSalary(){  //setter
    return salary;
    }
};
int main(){
    employee obj;
    obj.setSalary(60000);
    cout<<obj.getSalary();
return 0;
}
