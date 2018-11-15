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

void referencesWrite(string ref[3], int refCount, ofstream& refFile) {
    for(int refCount = 0; refCount < 3; ++refCount){
        
        refFile.open ("test.txt", fstream::app);
        refFile << "Reference: " << ref[refCount] << endl;
        refFile.close();
    }
}

int main(){
     ofstream refFile;
    string ref[3] {"No References", "No References", "No References"};
    references(ref, 3);
    for(int i=0; i < 3; ++i) {
        cout <<"\n\n\n\n";
        cout << ref[i] << endl;
    }
    referencesWrite(ref, 3, refFile);
   
return 0;
}