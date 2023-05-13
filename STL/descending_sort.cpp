#include<iostream>
#include<vector>
using namespace std;

int main (){
    vector<int>v;

    for(int i =0;i<10;i++)
    v.push_back(i*13%10);

// To reverse the sorting just write (rbegin and rend)

sort(v.rbegin(), v.rend());

    for(int i =0; i<v.size();i++){
    cout<<v[i]<<" ";
    }
    return 0;

}