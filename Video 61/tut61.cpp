#include<iostream>
#include<fstream>

using namespace std;

int main(){
    // Connecting our file with hout stream 
    ofstream hout("sample61.txt");

    // Creating a name string and filing it with the string entered by the user
    string name;
    cout<<"Enter your name: ";
    getline(cin, name); // Reads the entire line including spaces
    // cin>>name;
    // getline in C++ is a function used to read an entire line of input from an input stream, including spaces, and store it into a string variable

    // Writing a string to the file
    hout<<name + " is my name.";

    hout.close();

    ifstream hin("sample61.txt");
    string content;
    // hin>>content;
    getline(hin, content);
    cout<<"The content of this file is: "<<content<<endl;
    return 0;
}