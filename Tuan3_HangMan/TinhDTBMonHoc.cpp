#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const double COEFFICIENTS[] = {1, 1.5, 2, 2.5, 3};

vector<double> scores;
vector<double> coefficients;

double sumOfScores = 0;
double sumOfCoefficients = 0;

string check(double score, double coefficient) {
	if(score > 10.0 || score < 0.0)
		return "Sai diem so";
	if(find(COEFFICIENTS, COEFFICIENTS+5, coefficient)==COEFFICIENTS+5)
		return "Sai he so";
	return "";
}

int input() {
	double score, coefficient;
	cin >> score >> coefficient;
	if(check(score, coefficient)!="")
	{
		cout << check(score, coefficient);
		return -1;
	}
	scores.push_back(score);
	coefficients.push_back(coefficient);
	sumOfScores += score*coefficient;
	sumOfCoefficients += coefficient;
	return 0;
}

void print() {
	cout << "Tong so mon hoc can tinh DTB: " << scores.size() << "\n";
	
	cout.precision(1);
	for(int i = 0; i<scores.size(); ++i) {
		cout << fixed << "Diem mon hoc " << i << ": " << scores[i] << endl; 
		cout << fixed << "He so mon hoc " << i << ": " << coefficients[i] << endl;
	}

		cout << fixed << "Tong so he so: " << sumOfCoefficients << endl;
		cout << fixed << "Diem trung binh cua " << scores.size() << " mon hoc: " <<sumOfScores/sumOfCoefficients;
}

int main() {
	int n;
	cin >> n;

	while(n--) {
		if(input()==-1) {
			return 0;
		}
	}

	print();

	return 0;
}