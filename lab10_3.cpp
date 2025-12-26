#include<iostream>
#include<cmath>
#include<string>
#include<iomanip>
#include<fstream>

using namespace std;

int main(){
    ifstream dest("score.txt");
    string value;
    double mean = 0;
    double SD = 0;
    int N = 0;
    cout << setprecision(3);
    while(getline(dest,value)){
        mean += stod(value);
        N++;
    }
    mean = mean/N;
    dest.close();
    dest.open("score.txt");
    while(getline(dest,value)){
        SD += (stod(value)*stod(value));
    }
    SD = SD/N;
    SD = SD - pow(mean,2);
    SD = sqrt(SD);
    cout << "Number of data = " << N << "\n";
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << SD;
    dest.close();
    return 0;
}