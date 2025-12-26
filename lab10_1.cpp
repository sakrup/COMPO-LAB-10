#include<iostream>
#include<string>

using namespace std;

int main(){
	string grade;
	int A = 0,B = 0,C = 0,D = 0,F = 0,N = 1;

	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" << N << "]: ";
		cin >> grade; 
		if(grade == "A"){ 
			A++;
		}else if(grade == "B"){ 
			B++;
		}else if(grade == "C"){ 
			C++;
		}else if(grade == "D"){ 
			D++;
		}else if(grade == "F"){ 
			F++;
		}else if(grade == "0"){
			break;
		}
		else{
			cout << "Wrong input. Please input again.\n";
			N--;
		}
		N++;
	}while(grade != "0");
	
	int count[5] = {A,B,C,D,F};

	cout << "In total " << N-1 << " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4];
	
	return 0;
}