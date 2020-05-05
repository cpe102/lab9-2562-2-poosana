//cout << "-------------------- SOTUS ---------------------";
//cout << textline;
//cout << "-------------------- SOTUS ---------------------";
//Don't forget to change cout to output filestream

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ifstream cheerbook;
    string textline;
    ofstream cheerbook_copy;
    cheerbook.open("cheerbook.txt");
    cheerbook_copy.open("cheerbook_copy.txt");
    cheerbook_copy << "-------------------- SOTUS ---------------------\n";
    while(getline(cheerbook,textline)){
        cheerbook_copy << textline <<"\n";
    }
    cheerbook_copy<<"-------------------- SOTUS ---------------------\n";
    cheerbook_copy.close();
    cheerbook.close();
    return 0;

    }