#include <iostream>
#include <string>
#include <chrono> //add if's to fix while loops not breaking correctly nov-1//
#include <thread>
#include <cstdlib>
#include <fstream> //included libraries

using namespace std;  //std:: not needed while using the standard namespace

void references(string ref[3],int refCount) {
    cin.ignore();
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
} //function for references

void referencesWrite(string ref[3],string in[9], int refCount, ofstream& refFile) {
    for(int refCount = 0; refCount < 3; ++refCount){
        
        refFile.open ("references.txt", fstream::app);
        refFile << "Candidate name: " << in[0] << "\nReference number: " << "(" << refCount<< ")" << "\n\n\n";
        refFile << "Reference: " << ref[refCount] << endl;
        refFile.close();
    }
}//function for reference

int main()
{
    int fail = 4; //initialize the variable "fail" as 4
    int err  = 0; //initialize the variable "err" as 0
    int yrsExp;  
    string in[9] {"N/A","N/A","N/A","N/A","N/A","N/A","N/A","N/A","N/A"};//name=0,phone=1,grammar=2,spelling=3,email=4,skills=5,exp=6,edu=7,qual=8
    string ref[3] {"No References", "Only one Reference", "Two References"};
    string refName[3] {"No References", "No References", "No References"};
    string ans;
    string result;                            //variables
    ofstream applicants;
    ofstream refFile;
    string candType;

    cout << "+====================================================+" <<endl;
    cout << "+                  RESUME SCREENER!!                 +" <<endl;
    cout << "+                        by:                         +" <<endl;
    cout << "+                     Jamie Hobor                    +" <<endl;
    cout << "+                     Tina Filion                    +" <<endl;
    cout << "+                    Alex Bonhomme                   +" <<endl;
    cout << "+====================================================+" <<endl;
    this_thread::sleep_for(chrono::milliseconds(800)); // this is a timed delay before next code is run
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;


    while (err<=0) //while the variable "err" equals 0 this loop will run
    {
        cout << "Please Enter y/n" <<endl; //instructions for user
        cout << endl; cout << endl; cout << endl; //user input
        cout << "If you would like to quit the program press 'q'" << endl;//instructions for user
        cout << endl; cout << endl; cout << endl;//user input
        this_thread::sleep_for(chrono::milliseconds(400));// this is a timed delay before next code is run
        cout << endl; cout << endl; cout << endl;//user input
        cout << "Does the Resume have a name on it?" << endl; //question for user
        cin >> ans; //user answer

            if (ans == "n") //if user types "n" for ans input, play this loop
            {
                cout << "Garbage!" << endl; //text for user
                exit(0); //exits the program
            }
            else if (ans == "y") //if user types "y" for ans input, play this loop
            {
                cout << "Please Type In The Name:" << endl; //instructions for user
                cin.ignore();
                getline(cin, in[0]);
                ++err;
            }
            else if (ans== "q")//if user types "q" for ans input, play this loop
            {
                cout << "Thank You For Using The Resume Screener" <<endl; //exit message
                exit(0); //exits the program
            }
            else //if ans doesn't equal n,y, or q this plays
            {
                cout << "Error!" << endl; //error message
            }
    }
    err = 0;
        while (err<=0)
    {
        cout << "Please Enter y/n" <<endl;
        cout << endl; cout << endl; cout << endl;
        this_thread::sleep_for(chrono::milliseconds(400));
        cout << endl; cout << endl; cout << endl;
        this_thread::sleep_for(chrono::milliseconds(400));
        cout << "Does the Resume have a Phone Number?" << endl;
        cin >> ans;

            if (ans == "n")
            {
                cout << "Garbage!" << endl;
                exit(0);
            }
            else if (ans == "y")
            {
                cout << "Please Type In The Phone Number:" << endl;
                cin.ignore();
                getline(cin, in[1]);
                ++err;
            }
            else if (ans== "q")
            {
                cout << "Thank You For Using The Resume Screener" <<endl;
                exit(0);
            }
            else
            {
                cout << "Error!" << endl;
            }
    }
    err = 0;
        while (err<=0)
    {
        cout << "Please Enter y/n" <<endl;
        cout << endl; cout << endl; cout << endl;
        this_thread::sleep_for(chrono::milliseconds(400));
        cout << endl; cout << endl; cout << endl;
        this_thread::sleep_for(chrono::milliseconds(400));
        cout << "Does the Resume have a Email?" << endl;
        cin >> ans;

            if (ans == "n")
            {
                cout << "Garbage!" << endl;
                exit(0);
            }
            else if (ans == "y")
            {
                cout << "Please Type In The Email:" << endl;
                cin.ignore();
                getline(cin, in[4]);
                ++err;
            }
            else if (ans== "q")
            {
                cout << "Thank You For Using The Resume Screener" <<endl;
                exit(0);
            }
            else
            {
                cout << "Error!" << endl;
            }
    }
    err = 0;
        while (err<=0)
    {
        cout << "Please Enter y/n" <<endl;
        cout << endl; cout << endl; cout << endl;
        this_thread::sleep_for(chrono::milliseconds(400));
        cout << endl; cout << endl; cout << endl;
        this_thread::sleep_for(chrono::milliseconds(400));
        cout << "Does the Resume have any Spelling errors?" << endl;
        cin >> ans;

            if (ans == "y")
            {
                cout << "Garbage!" << endl;
                exit(0);
            }
            else if (ans == "n")
            {
                in[3] = "No Spelling Errors."; //spelling=3
                ++err;
            }
            else if (ans== "q")
            {
                cout << "Thank You For Using The Resume Screener" <<endl;
                exit(0);
            }
            else
            {
                cout << "Error!" << endl;
            }
    }
     err = 0;
        while (err<=0)
    {
        cout << "Please Enter y/n" <<endl;
        cout << endl; cout << endl; cout << endl;
        this_thread::sleep_for(chrono::milliseconds(400));
        cout << endl; cout << endl; cout << endl;
        this_thread::sleep_for(chrono::milliseconds(400));
        cout << "Does the Resume have any Grammatical errors?" << endl;
        cin >> ans;

            if (ans == "y")
            {
                cout << "Garbage!" << endl;
                exit(0);
            }
            else if (ans == "n")
            {
                in[2] = "No Grammatical Errors."; //grammar=2
                ++err;
            }
            else if (ans== "q")
            {
                cout << "Thank You For Using The Resume Screener" <<endl;
                exit(0);
            }
            else
            {
                cout << "Error!" << endl;
            }
    }
    err = 0;
        while (fail == 4)
        {
               while (err<=0)
               {
                    cout << "Please Enter y/n" <<endl;
                    cout << endl; cout << endl; cout << endl;
                    this_thread::sleep_for(chrono::milliseconds(400));
                    cout << endl; cout << endl; cout << endl;
                    this_thread::sleep_for(chrono::milliseconds(400));
                    cout << "Does the Resume have any Qualifying skills?" << endl;
                    cin >> ans;

                    if (ans == "n")
                    {
                        
                        --fail;
                        break;
                    }
                    else if (ans == "y")
                    {
                        in[5] = "Qualifying skills."; //skills=5
                        err++;
                        
                    }
                    else if (ans== "q")
                    {
                        cout << "Thank You For Using The Resume Screener" <<endl;
                        exit(0);
                    }
                    else
                    {
                    cout << "Error!" << endl;
                    }
                }   
                err = 0;
                if(fail == 4){
                while (err<=0)
                {
                    cout << "Please Enter y/n" <<endl;
                    cout << endl; cout << endl; cout << endl;
                    this_thread::sleep_for(chrono::milliseconds(400));
                    cout << endl; cout << endl; cout << endl;
                    this_thread::sleep_for(chrono::milliseconds(400));
                    cout << "Does the Resume have Job related experience?" << endl;
                    cin >> ans;

                    if (ans == "n")
                    {
                        
                        fail = 2;
                        break;
                    }
                    else if (ans == "y")
                    {
                        in[6] = "Job related experience."; //exp=6
                        err++;
                        
                    }
                    else if (ans== "q")
                    {
                        cout << "Thank You For Using The Resume Screener" <<endl;
                        exit(0);
                    }
                    else
                    {
                    cout << "Error!" << endl;
                    }
                } 
                }
                if(fail == 4){   
                err = 0;
                while (err<=0)
                {
                    cout << "Please Enter y/n" <<endl;
                    cout << endl; cout << endl; cout << endl;
                    this_thread::sleep_for(chrono::milliseconds(400));
                    cout << endl; cout << endl; cout << endl;
                    this_thread::sleep_for(chrono::milliseconds(400));
                    cout << "Does the Resume have a Job related education?" << endl;
                    cin >> ans;

                    if (ans == "n")
                    {
                        
                        fail = 5;
                        break;
                    }
                    else if (ans == "y")
                    {
                        in[7] = "Job related education."; //edu=7
                        ++err;
                        fail = 6;
                    }
                    else if (ans== "q")
                    {
                        cout << "Thank You For Using The Resume Screener" <<endl;
                        exit(0);
                    }
                    else
                    {
                    cout << "Error!" << endl;
                    }
                }
                }        
        }
        err = 0;
        while (fail == 3)
        {  
                while (err<=0)
                {
                    cout << "Please Enter y/n" <<endl;
                    cout << endl; cout << endl; cout << endl;
                    this_thread::sleep_for(chrono::milliseconds(400));
                    cout << endl; cout << endl; cout << endl;
                    this_thread::sleep_for(chrono::milliseconds(400));
                    cout << "Does the Resume have Job related experience?" << endl;
                    cin >> ans;

                    if (ans == "n")
                    {
                        
                        fail = 0;
                        break;
                    }
                    else if (ans == "y")
                    {
                        in[6] = "Job related experience."; //exp=6
                        ++err;
                    }
                    else if (ans== "q")
                    {
                        cout << "Thank You For Using The Resume Screener" <<endl;
                        exit(0);
                    }
                    else
                    {
                    cout << "Error!" << endl;
                    }
                }
                if( fail == 3){    
                err = 0;
                while (err<=0)
                {
                    cout << "Please Enter y/n" <<endl;
                    cout << endl; cout << endl; cout << endl;
                    this_thread::sleep_for(chrono::milliseconds(400));
                    cout << endl; cout << endl; cout << endl;
                    this_thread::sleep_for(chrono::milliseconds(400));
                    cout << "Does the Resume have a Job related education?" << endl;
                    cin >> ans;

                    if (ans == "n")
                    {
                        
                        fail = 0;
                        break;
                    }
                    else if (ans == "y")
                    {
                        in[7] = "Job related education."; //edu=7
                        ++err;
                        fail = 5;
                    }
                    else if (ans== "q")
                    {
                        cout << "Thank You For Using The Resume Screener" <<endl;
                        exit(0);
                    }
                    else
                    {
                    cout << "Error!" << endl;
                    }
                }
                }
            }
            while (fail == 2)
            {
                 while (err<=0)
                {
                    cout << "Please Enter y/n" <<endl;
                    cout << endl; cout << endl; cout << endl;
                    this_thread::sleep_for(chrono::milliseconds(400));
                    cout << endl; cout << endl; cout << endl;
                    this_thread::sleep_for(chrono::milliseconds(400));
                    cout << "Does the Resume have Job related education?" << endl;
                    cin >> ans;

                    if (ans == "n")
                    {
                        
                        fail = 0;
                        break;
                    }
                    else if (ans == "y")
                    {
                        in[7] = "Job related education."; //edu-7
                        ++err;
                        fail = 5;
                    }
                    else if (ans== "q")
                    {
                        cout << "Thank You For Using The Resume Screener" <<endl;
                        exit(0);
                    }
                    else
                    {
                    cout << "Error!" << endl;
                    }
                }    
            }
            if (yrsExp == 0){
                candType = "Intern Candidate";
                references(refName, 3);
                for(int i=0; i < 3; ++i) {
                    cout <<"\n\n\n\n";
                    cout << refName[i] << endl;
                }
                referencesWrite(refName, in, 3, refFile);
            }
            else if (yrsExp <= 5 && yrsExp > 0){
                 candType = "Junior Candidate"; 
                 references(refName, 3);
                for(int i=0; i < 3; ++i) {
                    cout <<"\n\n\n\n";
                    cout << refName[i] << endl;
                }
                referencesWrite(refName, in, 3, refFile);
            }
            else if (yrsExp > 5){
                candType = "Senior Candidate";
                references(refName, 3);
                for(int i=0; i < 3; ++i) {
                    cout <<"\n\n\n\n";
                    cout << refName[i] << endl;
                }
                referencesWrite(refName, in, 3, refFile);
            }
            


        cout << endl; cout << endl; cout << endl; cout << endl; cout << endl; cout << endl;
        this_thread::sleep_for(chrono::milliseconds(1800));
        
        if (fail == 6)
        {
            in[8] = "This Applicant is Incredibly qualified!"; //qual=8
            cout << in[8] << endl;
        }
        else if (fail == 5)
        {
            in[8] = "This Applicant is qualified!"; 
            cout << in[8] << endl;
        }
        else
        {
            in[8] = "This Applicant is not qualified";
            cout << in[8] << endl;
        }
//name=0,phone=1,grammar=2,spelling=3,email=4,skills=5,exp=6,edu=7,qual=8
        applicants.open ("applicants.txt", fstream::app);
        applicants <<"Name: " << in[0] << endl; 
        applicants <<"Phone Number: " << in[1] << endl; 
        applicants <<"Email :" << in[4] << "\n\n"; 
        applicants <<"Applicants Resume has:" << endl;
        applicants << in[2] << endl;
        applicants << in[3] << endl;
        applicants << in[5] << endl;
        applicants << in[6] << endl;
        applicants << in[7] << endl;
        applicants << in[8] << endl;
        applicants << "\n\n\n\n";
        applicants.close();
         
         
         
         
         
        cout << "Thank You For Using The Resume Screener!" <<endl;



        
        

    
        
    
    
    
    
    
    
    
    
    
    
    
    
















    return 0;
}