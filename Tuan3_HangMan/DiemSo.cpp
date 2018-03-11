#include <iostream>
#include <vector>
#include <algorithm>

#define tab "    "

using namespace std;

void init(vector<int>& id) {
	for(int i = 0; i < id.size(); ++i)
		id[i] = i;
}

bool check(double number) {
    return (number < 0 || number > 10);
}

void sortBy(vector<int>& id, vector<double> v) {
    int n = id.size();
    for(int i = 0; i < n - 1; ++i){
        for(int j = i+1; j < n; j++)
            if(v[i] < v[j])
                swap(id[i], id[j]);
    }

}

void printSub(vector<int> id, vector<double> math, vector<double> physic, vector<double> english) {
    cout << "SV" << tab << "Toan" << tab << "Ly" << tab << "Anh\n";
    int n = id.size();
    for (int i = 0; i < n; i++) {
        cout << id[i] + 1 << tab;
        cout << fixed << math[id[i]] << tab << physic[id[i]] << tab << english[id[i]] << endl;
    }
}


void printAv(vector<int> id, vector<double> math, vector<double> physic, vector<double> english, vector<double> av) {
    cout << "SV" << tab << "TB" << tab << "Toan" << tab << "Ly" << tab << "Anh\n";
    int n = id.size();
    for (int i = 0; i < n; i++) {
        cout << id[i] + 1 << tab;
        cout << fixed << av[id[i]] << tab << math[id[i]] << tab << physic[id[i]] << tab << english[id[i]] << endl;
    }
}

int main() {
    int n;
    cin >> n;
    vector<double> math(n), english(n), physic(n), av(n);
    vector<int> id;
    for(int i = 0; i < n; ++i) {
        cin >> math[i] >> physic[i] >> english[i];
        if(check(math[i]) || check(physic[i]) || check(english[i])) {
            cout << "invalid";
            return -1;
        }
        av[i] = (math[i] + english[i] + physic[i]) / 3;
        id.push_back(i);
    }

    cout.precision(1);
    sortBy(id, math);
    cout << "Theo diem mon Toan:" << endl;
    printSub(id, math, physic, english);
    init(id);
    sortBy(id, english);
    cout << endl << "Theo diem mon Anh:" << endl;
    printSub(id, math, physic, english);
    init(id);
    sortBy(id, av);
    cout << endl << "Theo diem trung binh:" << endl;
    printAv(id, math, physic, english, av);
    return 0;
}