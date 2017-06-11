#include <iostream>
#include <vector>
using namespace std;

string findNumber(vector < int > arr, int k) {

    for(int Vn : arr) {
        if(Vn == k) {
            return "YES";
        }
    }
    return "NO";

}

int main()
{
    // Create a vector containing integers
    vector<int> v = {7, 5, 16, 8};
    cout << findNumber(v, 3) << endl;

}