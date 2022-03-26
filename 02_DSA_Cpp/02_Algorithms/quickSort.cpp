#include <iostream>
#include <vector>

using namespace std;

vector<int> quickSort(vector<int> v){
    vector<int> less;
    vector<int> greater;
    vector<int> ans;
    int pivot;
    if(v.size() < 2){
        return v;
    }
    else{
        pivot = v[0];
        for(int i = 1; i < v.size(); i++){
            if(v[i] <= pivot){
                less.push_back(v[i]);
            }
            else{
                greater.push_back(v[i]);
            }
        }
        less = quickSort(less);
        less.push_back(pivot);
        greater = quickSort(greater);

        less.insert(less.end(), greater.begin(), greater.end());
        return less;
    }
}

void displayVec(vector<int> v){
    for(int i=0; i < v.size(); i++){
        cout << v[i] << " " << endl;
    }
}

int main(){
    vector<int> myList{4,78,32,9,53,12,45,963,657,444,12544,789,2,1,0,3,68,98,100};
    vector <int> ans = quickSort(myList);
    displayVec(ans);
}
