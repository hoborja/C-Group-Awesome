#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void references(string ref[3],int refCount) {
    for(int refCount = 0; refCount < 3; ++refCount) {
        string name;
        string address;
        string phone;
        string email;
        string company;
        string position;
        cout << "Please enter reference Name: " << endl;
        getline(cin, name);
        cout << "Please enter the company " << name << " worked at: " << endl;
        getline(cin, company);
        cout << "Please enter "<< name << "'s Address: " << endl;
        getline(cin, address);
        cout << "Please enter "<< name << "'s phone number: " << endl;
        getline(cin, phone);
        cout << "Please enter "<< name << "'s Email: " << endl;
        getline(cin, email);
        cout << "Please enter " << name << "'s Position in " << company << ": " << endl;
        getline(cin, position);
        ref[refCount] = "Referance's name: " + name + "\nReference's company: " + company + "\nReference's address: " + address + 
        "\nReference's phone number: " + phone + "\nReference's email address: " + email + "\nReference's position: " + position + "\n";
    }
}

void referencesWrite(string ref[3],/*string in[9],*/ int refCount, ofstream& refFile) {
    for(int refCount = 0; refCount < 3; ++refCount){
        
        refFile.open ("test.txt", fstream::app);
        //refFile << "Candidate name: " << in[0] "\n\n\n";
        refFile << "Reference: " << ref[refCount] << endl;
        refFile.close();
    }
}

int main(){
     ofstream refFile;
    string refName[3] {"No References", "No References", "No References"};
    string refDetails[] {"Name", "Company", "Address", "Phone", "Email", "Position"};
    references(refName, 3);
    for(int i=0; i < 3; ++i) {
        cout <<"\n\n\n\n";
        cout << refName[i] << endl;
    }
    referencesWrite(refName, 3, refFile);
   
return 0;
}