#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> king {10,20,30};
    cout<< king[0]<<endl;
    cout<< king[1]<<endl;
    cout<< king[2]<<endl;
    king.push_back(40);
    cout<<king[3]<<endl;
    
    cout<<"Current Capacity is :"<<king.capacity();

}