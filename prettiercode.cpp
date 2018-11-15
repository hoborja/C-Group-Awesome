#include <iostream>
#include <string>
#include <chrono> //add if's to fix while loops not breaking correctly nov-1//
#include <thread>
#include <cstdlib>
#include <fstream> //included libraries
#include <windows.h> //color library
#include <conio.h>

using namespace std;  //std:: not needed while using the standard namespace

void quitMsg (){ 
    cout << "Thank you for using The Resume Screener!" << endl;
    }

int main()
{
    int fail = 4; //initialize the variable "fail" as 4
    int err  = 0; //initialize the variable "err" as 0
    int yrsExp;  
    string in[9] {"N/A","N/A","N/A","N/A","N/A","N/A","N/A","N/A","N/A"};//name=0,phone=1,grammar=2,spelling=3,email=4,skills=5,exp=6,edu=7,qual=8
    string ref[3] {"No References", "Only one Reference", "Two References"};
    string ans;
    string result;                            //variables
    ofstream applicants;
    string candType;
    

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    
    SetConsoleTextAttribute(hConsole, 11);
    cout << "+====================================================+" <<endl;
    cout << "+                  RESUME SCREENER!!                 +" <<endl;
    cout << "+                        by:                         +" <<endl;
    cout << "+                    Jamie Hobor                     +" <<endl;
    cout << "+                    Tina Filion                     +" <<endl;
    cout << "+====================================================+" <<endl;
    SetConsoleTextAttribute(hConsole, 15);
    
    this_thread::sleep_for(chrono::milliseconds(800)); // this is a timed delay before next code is run
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
 

    while (err<=0)
    {
        cout << "Please Enter y/n" <<endl;
        cout << endl; cout << endl; cout << endl;
        cout << "If you would like to quit the program press 'q'" << endl;
        cout << endl; cout << endl; cout << endl;
        this_thread::sleep_for(chrono::milliseconds(400));
        cout << endl; cout << endl; cout << endl;
        cout << "Does the Resume have a name on it?" << endl;
        cin >> ans;

            if (ans == "n")
            {
                cout << "Garbage!" << endl;
                exit(0);
            }
            else if (ans == "y")
            {
                cout << "Please Type In The Name:" << endl;
                cin.ignore();
                getline(cin, in[0]);
                ++err;
            }
            else if (ans== "q")
            {
                quitMsg();
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
                quitMsg();
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
                quitMsg();
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
                quitMsg();
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
                quitMsg();
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
                        quitMsg();
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
                        quitMsg();
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
                        quitMsg();
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
                        quitMsg();
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
                        quitMsg();
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
                        quitMsg();
                        exit(0);
                    }
                    else
                    {
                    cout << "Error!" << endl;
                    }
                }    
            }
            /*
            if (yrsExp == 0){
                candType = "Intern Candidate";
                references(ref, 3);
            }
            else if (yrsExp <= 5){
                 candType = "Junior Candidate"; 
                 references(ref, 3);
            }
            else if (yrsExp >= 5){
                candType = "Senior Candidate";
                references(ref, 3);
            }
            */// Please implement into Job related experience


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
         
         
         
         
         
        quitMsg();



        
        

    
        
    
    
    
    
    
    
    
    
    
    
    
    
















    return 0;
}