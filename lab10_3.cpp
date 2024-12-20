#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
using namespace std;

int main() {
    int count = 0;
    float sum = 0;
    float sum_of_square = 0;
    string textline;
    ifstream source("score.txt");

    if (!source.is_open()) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    float number;
    while (source >> number) {
        sum += number;
        sum_of_square += number * number;
        count++;
    }

    source.close();

    float mean = sum / count;
    float variance = sum_of_square / count - mean * mean;
    float std_deviation = sqrt(variance);

    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << std_deviation << endl;

    return 0;
}