#include <iostream>
#include <string>
#include <chrono> //add if's to fix while loops not breaking correctly nov-1//
#include <thread>
#include <cstdlib>
#include <fstream> //included libraries
#include <windows.h> //color library
#include <conio.h>

using namespace std;  //std:: not needed while using the standard namespace

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //for colors

void quitMsg (){ 
        SetConsoleTextAttribute(hConsole, 14);
    cout << "THANK YOU FOR USING THE RESUME SCREENER!" << endl;
        SetConsoleTextAttribute(hConsole, 15);
    }
 

void references(string ref[3],int refCount) {
    cin.ignore();
    for(int refCount = 0; refCount < 3; ++refCount) {
        string name;
        string address;
        string phone;
        string email;
        string company;
        string position; 
        cout << endl << endl << endl;
                   SetConsoleTextAttribute(hConsole, 13);
        cout << "====================================================" <<endl;
        cout << "                                                    " <<endl;
        cout << "             ENTER APPLICANTS REFERENCES            " <<endl;
        cout << "                                                    " <<endl;
        cout << "====================================================" <<endl;
                   SetConsoleTextAttribute(hConsole, 15);  
        this_thread::sleep_for(chrono::milliseconds(400));
        cout << endl << endl << endl;     
        cout << "Please enter reference Name: " << endl << endl;
        getline(cin, name);
        cout << endl << endl;
        cout << "Please enter the company " << name << " worked at: " << endl << endl;
        getline(cin, company);
        cout << endl << endl;
        cout << "Please enter "<< company << "'s Address: " << endl << endl;
        getline(cin, address);
        cout << endl << endl;
        cout << "Please enter "<< name << "'s phone number: " << endl << endl;
        getline(cin, phone);
        cout << endl << endl;
        cout << "Please enter "<< name << "'s Email: " << endl << endl;
        getline(cin, email);
        cout << endl << endl;
        cout << "Please enter " << name << "'s Position in " << company << ": " << endl << endl;
        getline(cin, position);
        cout << endl << endl;
        ref[refCount] = "Referance's name: " + name + "\nReference's company: " + company + "\nReference's address: " + address + 
        "\nReference's phone number: " + phone + "\nReference's email address: " + email + "\nReference's position: " + position + "\n";
    }
} //function to write references to file

void referencesWrite(string ref[3],string in[9], int refCount, ofstream& refFile) {
    for(int refCount = 0; refCount < 3; ++refCount){
        
        refFile.open ("references.txt", fstream::app);
        refFile << "Candidate name: " << in[0] << "\nReference number: " << "(" << refCount<< ")" << "\n\n\n";
        refFile << "Reference: " << ref[refCount] << endl;
        refFile.close();
    }
}//function for error message
void errorMsg() {
    SetConsoleTextAttribute(hConsole, 12);
    cout << "Error!" << endl; //error message
    SetConsoleTextAttribute(hConsole, 15);
}
// function to out put garbage on no input
void garbage() {
    cout << "Garbage!" << endl;
    this_thread::sleep_for(chrono::milliseconds(800));
}
// Function to prompt user to enter yes or no.
void yesNoMsg() {
    cout << endl; cout << endl; cout << endl; cout << endl; cout << endl; cout << endl; 
        SetConsoleTextAttribute(hConsole, 14); 
        cout << "                 PLEASE ENTER Y/N" <<endl;
        SetConsoleTextAttribute(hConsole, 15); 
        
        this_thread::sleep_for(chrono::milliseconds(400));// this is a timed delay before next code is run
        cout << endl;
        this_thread::sleep_for(chrono::milliseconds(400)); 
}
int main()
{
    int fail = 4; //initialize the variable "fail" as 4
    int err  = 0; //initialize the variable "err" as 0
    int yrsExp;  //initialize the variable "yrsExp"
    string in[9] {"N/A","N/A","N/A","N/A","N/A","N/A","N/A","N/A","N/A"};//name=0,phone=1,grammar=2,spelling=3,email=4,skills=5,exp=6,edu=7,qual=8
    string ref[3] {"No References", "Only one Reference", "Two References"};
    string refName[3] {"No References", "No References", "No References"};
    string ans;
    string result;                            //variables
    ofstream applicants;
    ofstream refFile;
    string candType;
    //send to the screen the header below
    
    cout << endl; cout << endl; cout << endl;
        SetConsoleTextAttribute(hConsole, 11);  //color
    cout << "**********************************************************" <<endl;
    cout << "***                                                    ***" <<endl;
    cout << "***                  RESUME SCREENER                   ***" <<endl;
    cout << "***                                                    ***" <<endl;
    cout << "***                        by:                         ***" <<endl;
    cout << "***                    Jamie Hobor                     ***" <<endl;
    cout << "***                    Tina Filion                     ***" <<endl;
    cout << "***                    Alex Bonhomme                   ***" <<endl;
    cout << "***                    Zachary Scott                   ***" <<endl;
    cout << "***                                                    ***" <<endl;
    cout << "**********************************************************" <<endl;
        SetConsoleTextAttribute(hConsole, 15); 
    
    this_thread::sleep_for(chrono::milliseconds(800)); // this is a timed delay before next code is run
    
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;


    while (err<=0) //while the variable "err" equals 0 this loop will run
    {
        cout << "(If you would like to quit the program press 'Q' at any time)" << endl;
        yesNoMsg();
        
           SetConsoleTextAttribute(hConsole, 13);
        cout << "====================================================" <<endl;
        cout << "                                                    " <<endl;
        cout << "         Does the resume have a name on it?         " <<endl;
        cout << "                                                    " <<endl;
        cout << "====================================================" <<endl;
            SetConsoleTextAttribute(hConsole, 15);
        cout << endl;
        cin >> ans;
        cout << endl; cout << endl;       

            if (ans == "n" || ans == "N") //if user types "n" for ans input, play this loop
            {
                garbage();
                exit(0); //exits the program
            }
            else if (ans == "y" || ans == "Y") //if user types "y" for ans input, play this loop
            {
                cout << "Please enter name:" << endl << endl; //instructions for user
                cin.ignore();
                getline(cin, in[0]);
                ++err;
            }
            else if (ans== "q" || ans == "Q")//if user types "q" for ans input, play this loop
            {
                quitMsg(); //exit message
                exit(0); //exits the program
            }
            else //if ans doesn't equal n,y, or q this plays
            {
            errorMsg();
            }
    }
    err = 0;
        while (err<=0)
    { //function to check for phone number or not, if the user provides one enter it
        yesNoMsg();
        
        SetConsoleTextAttribute(hConsole, 13);
        cout << "====================================================" <<endl;
        cout << "                                                    " <<endl;
        cout << "        Does the resume have a phone number?        " <<endl;
        cout << "                                                    " <<endl;
        cout << "====================================================" <<endl;
            SetConsoleTextAttribute(hConsole, 15);         
        cout << endl;        
        cin >> ans;
        cout << endl; cout << endl;

            if (ans == "n" || ans == "N")
            {
                garbage();
                exit(0);
            }
            else if (ans == "y" || ans == "Y")
            {
                cout << "Please enter phone number:" << endl << endl;
                cin.ignore();
                getline(cin, in[1]);
                ++err;
            }
            else if (ans== "q" || ans == "Q")
            {
                quitMsg();
                exit(0);
            }
            else
            {
                errorMsg();
            }
    }
    err = 0;
        while (err<=0)
    { //function to check for email or not, if the user provides one enter it
        yesNoMsg();
        
            SetConsoleTextAttribute(hConsole, 13);
        cout << "====================================================" <<endl;
        cout << "                                                    " <<endl;
        cout << "       Does the resume have a e-mail address?       " <<endl;
        cout << "                                                    " <<endl;
        cout << "====================================================" <<endl;
            SetConsoleTextAttribute(hConsole, 15);
        cout << endl;
        cin >> ans;
        cout << endl; cout << endl;

            if (ans == "n" || ans == "N")
            {
                    garbage();
                exit(0);
            }
            else if (ans == "y" || ans == "Y")
            {
                cout << "Please enter e-mail address:" << endl << endl;
                cin.ignore();
                getline(cin, in[4]);
                ++err;
            }
            else if (ans== "q" || ans == "Q")
            {
                quitMsg();
                exit(0);
            }
            else
            {
                errorMsg();
            }
    }
    err = 0;
        while (err<=0)
    { //function to check for spelling errors or not, if the user does, enter "Garbage", if not enter "No Spelling Errors"
        yesNoMsg();
        
            SetConsoleTextAttribute(hConsole, 12);
        cout << "====================================================" <<endl;
        cout << "                                                    " <<endl;
        cout << "      Does the resume have any spelling errors?     " <<endl;
        cout << "                                                    " <<endl;
        cout << "====================================================" <<endl;
            SetConsoleTextAttribute(hConsole, 15);
        cout << endl;
        cin >> ans;
        
            if (ans == "y" || ans == "Y")
            {
                garbage();
                exit(0);
            }
            else if (ans == "n" || ans == "N")
            {
                in[3] = "No spelling errors."; //spelling=3
                ++err;
            }
            else if (ans== "q" || ans == "Q")
            {
                quitMsg();
                exit(0);
            }
            else
            {
                errorMsg();
            }
    }
     err = 0;
        while (err<=0)
    { //function to check for Grammatical errors or not, if the user does, enter "Garbage", if not enter "No Grammatical Errors"
        yesNoMsg();
        
            SetConsoleTextAttribute(hConsole, 12);
        cout << "====================================================" <<endl;
        cout << "                                                    " <<endl;
        cout << "    Does the resume have any grammatical errors?    " <<endl;
        cout << "                                                    " <<endl;
        cout << "====================================================" <<endl;
            SetConsoleTextAttribute(hConsole, 15);
        cout << endl;
        cin >> ans;
       
            if (ans == "y" || ans == "Y")
            {
                garbage();
                exit(0);
            }
            else if (ans == "n" || ans == "N")
            {
                in[2] = "No grammatical errors."; //grammar=2
                ++err;
            }
            else if (ans== "q" || ans == "Q")
            {
                quitMsg();
                exit(0);
            }
            else
            {
                errorMsg();
            }
    }
    err = 0; //function to check for qualifying skills or not, if the user does, enter move onto next section, if not break program
        while (fail == 4)
        {
               while (err<=0)
               {
                    yesNoMsg();
                    
                        SetConsoleTextAttribute(hConsole, 9);
                    cout << "====================================================" <<endl;
                    cout << "                                                    " <<endl;
                    cout << "      Does the resume have qualifying skills?       " <<endl;
                    cout << "                                                    " <<endl;
                    cout << "====================================================" <<endl;
                        SetConsoleTextAttribute(hConsole, 15);
                    cout << endl;
                    cin >> ans;

                    if (ans == "n" || ans == "N")
                    {
                        --fail;
                        break;
                    }
                    else if (ans == "y" || ans == "Y")
                    {
                        in[5] = "Qualifying skills."; //skills=5
                        err++;
                        
                    }
                    else if (ans == "q" || ans == "Q")
                    {
                        quitMsg();
                        exit(0);
                    }
                    else
                    {
                        errorMsg();
                    }
                }   
                err = 0;
                if(fail == 4){
                while (err<=0)
                {
                    yesNoMsg();
                    
                    SetConsoleTextAttribute(hConsole, 9);
                    cout << "====================================================" <<endl;
                    cout << "                                                    " <<endl;
                    cout << "    Does the resume have job related experience?    " <<endl;
                    cout << "                                                    " <<endl;
                    cout << "====================================================" <<endl;
                    SetConsoleTextAttribute(hConsole, 15);
                    cout << endl;
                    cin >> ans;
                    
                    if (ans == "n" || ans == "N")
                    {
                        
                        fail = 2;
                        break;
                    }
                    else if (ans == "y" || ans == "Y")
                    {
                        in[6] = "Job related experience."; //exp=6
                        err++;
                        
                    }
                    else if (ans == "q"|| ans == "Q")
                    {
                        quitMsg();
                        exit(0);
                    }
                    else
                    {
                        errorMsg();
                    }
                } 
                }
                if(fail == 4){   
                err = 0;
                while (err<=0)
                {  
                
                    yesNoMsg();
                    
                   SetConsoleTextAttribute(hConsole, 9);
                    cout << "====================================================" <<endl;
                    cout << "                                                    " <<endl;
                    cout << "   Does the resume have job related education?      " <<endl;
                    cout << "                                                    " <<endl;
                    cout << "====================================================" <<endl;
                    SetConsoleTextAttribute(hConsole, 15);
                    cout << endl;
                    cin >> ans;

                    if (ans == "n" || ans == "N")
                    {
                        
                        fail = 5;
                        break;
                    }
                    else if (ans == "y" || ans == "Y")
                    {
                        in[7] = "Job related education."; //edu=7
                        ++err;
                        fail = 6;
                    }
                    else if (ans == "q" || ans == "Q")
                    {
                        quitMsg();
                        exit(0);
                    }
                    else
                    {
                        errorMsg();
                    }
                }
                }        
        }
        err = 0;
        while (fail == 3)
        {  
                while (err<=0)
                {
                    yesNoMsg();
                    
                    SetConsoleTextAttribute(hConsole, 9);
                    cout << "====================================================" <<endl;
                    cout << "                                                    " <<endl;
                    cout << "    Does the resume have job related experience?    " <<endl;
                    cout << "                                                    " <<endl;
                    cout << "====================================================" <<endl;
                    SetConsoleTextAttribute(hConsole, 15);
                    cout << endl;
                    cin >> ans;

                    if (ans == "n" || ans == "N")
                    {
                        
                        fail = 0;
                        break;
                    }
                    else if (ans == "y" || ans == "Y")
                    {
                        in[6] = "Job related experience."; //exp=6
                        ++err;
                    }
                    else if (ans == "q"|| ans == "Q")
                    {
                        quitMsg();
                        exit(0);
                    }
                    else
                    {
                        errorMsg();
                    }
                }
                if( fail == 3){    
                err = 0;
                while (err<=0)
                {
                   yesNoMsg();

                    SetConsoleTextAttribute(hConsole, 9);
                    cout << "====================================================" <<endl;
                    cout << "                                                    " <<endl;
                    cout << "    Does the resume have job related education?     " <<endl;
                    cout << "                                                    " <<endl;
                    cout << "====================================================" <<endl;
                    SetConsoleTextAttribute(hConsole, 15);
                    cout << endl;
                    cin >> ans;

                    if (ans == "n" || ans == "N")
                    {
                        
                        fail = 0;
                        break;
                    }
                    else if (ans == "y" || ans == "Y")
                    {
                        in[7] = "Job related education."; //edu=7
                        ++err;
                        fail = 5;
                    }
                    else if (ans== "q"|| ans == "Q")
                    {
                        quitMsg();
                        exit(0);
                    }
                    else
                    {
                        errorMsg();
                    }
                }
                }
            }
            while (fail == 2)
            {
                 while (err<=0)
                {
                    yesNoMsg();

                    SetConsoleTextAttribute(hConsole, 9);
                    cout << "====================================================" <<endl;
                    cout << "                                                    " <<endl;
                    cout << "    Does the resume have job related education?     " <<endl;
                    cout << "                                                    " <<endl;
                    cout << "====================================================" <<endl;
                    SetConsoleTextAttribute(hConsole, 15);
                    cout << endl;
                    cin >> ans;

                    if (ans == "n" || ans == "N")
                    {
                        fail = 0;
                        break;
                    }
                    else if (ans == "y" || ans == "Y")
                    {
                        in[7] = "Job related education."; //edu-7
                        ++err;
                        fail = 5;
                    }
                    else if (ans == "q" || ans == "Q")
                    {
                        quitMsg();
                        exit(0);
                    }
                    else
                    {
                        errorMsg();
                    }
                }    
            }
            if (yrsExp == 0){
                candType = "Intern Candidate";
                references(refName, 3);
                //for(int i=0; i < 3; ++i) {
                    //cout <<"\n\n\n\n";
                    //cout << refName[i] << endl;
                //}
                referencesWrite(refName, in, 3, refFile);
            }
            else if (yrsExp <= 5 && yrsExp > 0){
                 candType = "Junior Candidate"; 
                 references(refName, 3);
                //for(int i=0; i < 3; ++i) {
                    //cout <<"\n\n\n\n";
                    //cout << refName[i] << endl;
                //}
                referencesWrite(refName, in, 3, refFile);
            }
            else if (yrsExp > 5){
                candType = "Senior Candidate";
                references(refName, 3);
                //for(int i=0; i < 3; ++i) {
                    //cout <<"\n\n\n\n";
                    //cout << refName[i] << endl;
                //}
                referencesWrite(refName, in, 3, refFile);
            }
            


        cout << endl; cout << endl; cout << endl; cout << endl; cout << endl; cout << endl;
        this_thread::sleep_for(chrono::milliseconds(1800));
        
        if (fail == 6)
        {
            in[8] = "This applicant is incredibly qualified!"; //qual=8
                SetConsoleTextAttribute(hConsole, 10);
            cout << in[8] << endl;
                SetConsoleTextAttribute(hConsole, 15);
        }
        else if (fail == 5)
        {
            in[8] = "This applicant is qualified!"; 
                SetConsoleTextAttribute(hConsole, 10);
            cout << in[8] << endl;
                SetConsoleTextAttribute(hConsole, 15);
        }
        else
        {
            in[8] = "This applicant is not qualified";
                SetConsoleTextAttribute(hConsole, 12);
            cout << in[8] << endl;
                SetConsoleTextAttribute(hConsole, 15);
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
         
         SetConsoleTextAttribute(hConsole, 14);
        cout << "                                               000000000                         " << endl;
        cout << "                                          0000000000000000000                    " << endl;
        cout << "                                       0000000000000000000000000                 " << endl;
        cout << "                                    0000000000000000000000000000000              " << endl;
        cout << "                                  000000000   00000000000   000000000            " << endl;
        cout << "                                 000000000     000000000     000000000           " << endl;
        cout << "                                000000000       0000000       000000000          " << endl;
        cout << "                               00000000000     000000000     00000000000         " << endl;
        cout << "                              0000000000000   00000000000   0000000000000        " << endl;
        cout << "                              0000000000000000000000000000000000000000000        " << endl;
        cout << "                              0000000000000000000000000000000000000000000        " << endl;
        cout << "                               00000000                         00000000         " << endl;
        cout << "                                00000000                       00000000          " << endl;
        cout << "                                  00000000                    00000000           " << endl;
        cout << "                                   0000000000              0000000000            " << endl;
        cout << "                                     000000000000000000000000000000              " << endl;
        cout << "                                        000000000000000000000000                 " << endl;
        cout << "                                           000000000000000000                    " << endl;
        cout << "                                               0000000000                        " << endl;
        SetConsoleTextAttribute(hConsole, 15); 
         
        cout << endl;
        quitMsg();
    system("PAUSE");
    return 0;
}