#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    ofstream qualFile;
    qualFile.open ("qualFile.txt");
    int yrsExp;
    bool references = true;
    int numRef;
    cout << "How many years experience does the candidate have? " << endl;
    cin >> yrsExp;
    qualFile << "How many years experience does the candidate have? " << yrsExp << endl;
    
    cout << "How many references does this candidate have? " << endl;
    cin >> numRef;
    qualFile << "How many references does this candidate have? " << numRef << endl;
    
    if (numRef >0) {
        references = true;
    }
    else{
        references = false;
    }

    while (yrsExp == 0) {
      if (references == true) {
      cout << "Qualified intern candidate" << endl;
      qualFile << "Qualified intern candidate" << endl;
      break;
      }
      
      else if(references == false) {
          cout << "Candidate not a good fit" << endl;
          qualFile << "Candidate not a good fit" << endl;
          break;
      }
    }

    while (yrsExp <= 5 && yrsExp >0) {
    if (references == true) {
        cout << "Qualified junior candidate" << endl;
      qualFile << "Qualified junior candidate" << endl;
      break;
      }
      else if(references == false) {
          cout << "Candidate not a good fit" << endl;
          qualFile << "Candidate not a good fit" << endl;
          break;
      }
    }

    while (yrsExp > 5) {
    if (references == true) {
      cout << "Qualified senior candidate" << endl;
      qualFile << "Qualified senior candidate" << endl;
      break;
      }
      else if(references == false) {
          cout << "Candidate not a good fit" << endl;
          qualFile << "Candidate not a good fit" << endl;
          break;
      }
    }

    
     

    
    return 0;
}