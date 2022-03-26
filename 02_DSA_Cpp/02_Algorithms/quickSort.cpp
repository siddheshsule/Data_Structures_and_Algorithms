#include <iostream>
#include <vector>

using namespace std;

vector<int> quickSort(vector<int> v){
    vector<int> less, greater, ans;
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
        ans = quickSort(less);
        ans.push_back(pivot);
        greater = quickSort(greater);

        ans.insert(ans.end(), greater.begin(), greater.end());
        return ans;
    }
}

void displayVec(vector<int> v){
    for(auto i: v){
        cout << i << " ";
    }
}

int main(){
    vector<int> myList{4,78,32,9,53,12,45,963,657,444,12544,789,2,1,0,3,68,98,100};
    displayVec(quickSort(myList));
}
