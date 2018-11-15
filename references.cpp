#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void references(string ref[3],int refCount) {
    for(int refCount = 0; refCount < 3; ++refCount) {
        cout << "Please enter reference: " << refCount << endl;
        getline(cin, ref[refCount]);
    }
}


int main(){
    string ref[3] {"No References", "No References", "No References"};
    references(ref, 3);
    for(int i=0; i < 3; ++i) {
        cout <<"\n\n\n\n";
        cout << ref[i] << endl;
    }
return 0;
}