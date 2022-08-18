#include <iostream>
#include <vector>
using namespace std;

int higest_mountain(vector<int> arr) {
    int n = arr.size();
    int largest = 0;

    for (int i = 1; i < n - 1;) {

        // Check if arr[i] is a peak
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            // do something 
            int count = 1;
            int j = i;
            // Count backwards
            while (j >= 1 && arr[j] > arr[j-1]) {
                j--;
                count++;
            }

            // count forwards   
            while (i < n-1 && arr[i] > arr[i+1]) {
                i++;
                count++;
            }
            largest = max(largest, count);
        }
        else {
            i++;
        }
    }
    return largest;

}

int main() {
    vector<int> arr{5,6,1,2,3,4,5,3,2,0,1,2,3,-2,4};

    cout << higest_mountain(arr) << endl;

}