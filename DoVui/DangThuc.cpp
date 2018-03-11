// Language: C++11

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// bool isNagetive = false;

void removeZero(std::vector<int> &v) {
	while(v[v.size() - 1]==0 && v.size() > 1) 
		v.pop_back();
}

void init(string str, vector<int> &v) {
	for(int i = str.length()-1; i>=0; i--) 
		v.push_back(str[i]-'0');
	removeZero(v);
}

// void print(vector<int> v) {
// 	// if(isNagetive)
// 	// 	cout << "-";
// 	for(int i = v.size()-1; i>=0; i--) 
// 		cout << v[i];
// }


void add(vector<int> v1, vector<int> v2, vector<int> &v3) {
	v3.clear();
	int length = v1.size()>v2.size() ? v1.size() : v2.size();
	v1.resize(length);
	v2.resize(length);

	int extra = 0;
	int temp;
	for(int i = 0; i <length; i++) {
		temp = v1[i] + v2[i] + extra;
		v3.push_back(temp%10);
		extra = temp/10;
	}

	if(extra>0)
		v3.push_back(temp);
}

int compare(vector<int> a, vector<int> b) {
	if(a.size() > b.size())
		return -1;
	if(a.size() < b.size())
		return 1;
	for(int i = a.size()-1; i>=0; i--) {
		if(a[i] > b[i])
			return -1;
		if(a[i]<b[i])
			return 1;
	}
	return 0;

}

void subtract(vector<int> v1, vector<int> v2, vector<int> &v3) {
	v3.clear();
	//debug
	if(compare(v1, v2)==1)
	{
		// isNagetive = true;
		v1.swap(v2);
	}
	int length = v1.size();
	v2.resize(length);

	int extra = 0;
	int temp;
	for (int i = 0; i < length; ++i)
	{
		if(v1[i] < v2[i] + extra) {
			v3.push_back(v1[i] - v2[i] - extra + 10);
			extra = 1;
		}
		else {
			v3.push_back(v1[i] - v2[i] - extra);
			extra = 0;
		}
	}
	removeZero(v3);
}


int main() {
	string a,b,c;
	cin >> a >> b >> c;

	std::vector<int> v1, v2, ret;
	
	if(c.find('?')!=string::npos)
	{
		init(a, v1);
		init(b, v2);
		add(v1, v2, ret);
		cout << ret.at(c.length()-c.find('?')-1);
	}
	else if(a.find('?')!=string::npos) {
		init(c, v1);
		init(b, v2);
		subtract(v1, v2, ret);
		cout << ret.at(a.length()-a.find('?')-1);
	} 
	else if(b.find('?')!=string::npos) {
		init(c, v1);
		init(a, v2);
		subtract(v1, v2, ret);
		cout << ret.at(b.length()-b.find('?')-1);
	} 

	// print(ret);

	return 0;
}
