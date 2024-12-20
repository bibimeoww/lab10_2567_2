#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt");
	dest.open("cheerbook_copy.txt");
	if (!source.is_open()) {
        cout << "Error opening files!" << endl;
        return 1;
    }
    dest << "-------------------- BOOM ---------------------\n";

    string line;
    while (getline(source, line)) {
        dest << line << endl;
    }
    
    dest << "-------------------- HA!! ---------------------\n";
    source.close();
    dest.close();
	return 0;
}