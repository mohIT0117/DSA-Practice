#include <iostream>
#include <vector>
using namespace std;

int main(){

    int i;
    vector <int> v;
    for( i=0; i<10; i++){
        v.push_back(i+1);
    }

    v[4]=11;

    for(i=0; i<10; i++){
        
        cout<<v[i]<<endl;
    }
    return 0;
}