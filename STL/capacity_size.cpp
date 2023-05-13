#include<iostream>
#include<vector>
using namespace std;

int main (){

   vector <int> v;
   for(int i =1; i<=10; i++)
   v.push_back(i*13%10);

// To find the capacity of the given vector
   cout<<v.capacity()<<" "<<endl;
 

// to find the size of the given vector
cout<<v.size()<<" "<<endl;

// removing the elements from the vector by using v.pop_back

// if we will use it for one time then only one element will get remove 
// if we use it multiple times then multiple elements will be removed from the vector
v.pop_back();

// nOw after using pop back the size of the vector also get reduced from 10 to 9 
cout<<v.size()<<" "<<endl;

   for(int i =0; i<v.size(); i++){
    cout<<v[i]<<" ";
   }
   return 0;
}