#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream myFile("file.txt");
    myFile << "Amir Hussain Roll no 60090 :";
    myFile.close();
return 0;
}
