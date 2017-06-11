#include <sstream>
#include <vector>
#include <iostream>

using namespace std;

vector<int> parseInts(string str) {
    // Complete this function
    vector<int> i;
    istringstream ss(str);
    string token;

    while(getline(ss, token, ',')) {
        i.push_back(stoi(token.c_str()));
    }
    return i;

}



int main() {
    string str;
    cin >> str;

    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    return 0;
}
