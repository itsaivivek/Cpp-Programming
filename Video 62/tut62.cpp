#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ofstream out;
    out.open("sample62.txt");
    out<<"This is Me"<<endl;
    out<<"This is Me also\n";
    out<<"This is also me";
    out.close();

    ifstream in;
    in.open("sample62.txt");
    string st, st2;
    // in>>st>>st2;
    // cout<<st<<st2;

    while (in.eof() == 0)
    {
        getline(in, st);
        cout<<st<<endl;
    }
    
    return 0;
}