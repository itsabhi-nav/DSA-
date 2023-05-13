#include<iostream>
#include<vector>
using namespace std;

int main(){

    string str1="Abhinav Dubey";
    string str2="Khushboo";

    sort(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());
    
    cout<<str1<<endl<<str2;
    return 0;
}
