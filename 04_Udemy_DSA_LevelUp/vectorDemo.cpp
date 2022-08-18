#include<iostream>
#include <vector>

using namespace std;

int main() {
    // Vector Demonstration
    vector<int> arr = {22,35,65,79,84};
    

    // adding element to thje vector

    arr.push_back(22);

    // printing all the elements iof the vector

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << endl;
    }
cout << "..................."<< endl;
    for (auto i : arr) {
        cout << i << endl;
    }

    // Printing the size of the vector
    cout << arr.size() << endl;

    // fill constructor

    vector<int> visited(200, 0);

    for (auto i : visited) {
        cout << i << endl;
    }
    

}
