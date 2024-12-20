#include<iostream>
using namespace std;

int main(){
	int count[5] = {}; 
	char grade;

	cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;
	int  studentCount = 0;

	do{
		cout << "Student [" << studentCount + 1 << "]: ";
		cin >> grade; 

		if(grade == '0'){
			break; 
		}else if(grade == 'A' || grade == 'a') {
			count[0]++;
		}else if(grade == 'B' || grade == 'b') {
			count[1]++;
		}else if(grade == 'C' || grade == 'c') {
			count[2]++;
		}else if(grade == 'D' || grade == 'd') {
			count[3]++;
		}else if(grade == 'F' || grade == 'f') {
			count[4]++;
		}else{ 
			cout << "Wrong input. Please input again." << endl;
			continue;
		} 

		studentCount++;
		
	}while(true);
	cout << "In total " << studentCount << " students." << endl;
    cout << "A = " << count[0] << ", ";
    cout << "B = " << count[1] << ", ";
    cout << "C = " << count[2] << ", ";
    cout << "D = " << count[3] << ", ";
    cout << "F = " << count[4] << endl;

    return 0;
}