#include <iostream>
#include <string>
#include <chrono> //add if's to fix while loops not breaking correctly nov-1//
#include <thread>
#include <cstdlib>
#include <fstream> //included libraries
#include <windows.h> //color library
#include <conio.h>

using namespace std;  //std:: not needed while using the standard namespace

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

void quitMsg (){ 
        SetConsoleTextAttribute(hConsole, 14);
    cout << "THANK YOU FOR USING THE RESUME SCREENER!" << endl;
        SetConsoleTextAttribute(hConsole, 15);
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
    

    //HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //for colors
    
    
    cout << endl; cout << endl; cout << endl;
        SetConsoleTextAttribute(hConsole, 11);  //color
    cout << "**********************************************************" <<endl;
    cout << "***                                                    ***" <<endl;
    cout << "***                  RESUME SCREENER                   ***" <<endl;
    cout << "***                                                    ***" <<endl;
    cout << "***                        by:                         ***" <<endl;
    cout << "***                    Jamie Hobor                     ***" <<endl;
    cout << "***                    Tina Filion                     ***" <<endl;
    cout << "***                                                    ***" <<endl;
    cout << "***                                                    ***" <<endl;
    cout << "**********************************************************" <<endl;
        SetConsoleTextAttribute(hConsole, 15); 
    
    this_thread::sleep_for(chrono::milliseconds(800)); // this is a timed delay before next code is run
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
 
    while (err<=0)
    {
        cout << "(If you would like to quit the program press 'Q' at any time)" << endl;
        cout << endl; cout << endl; cout << endl; cout << endl;
            SetConsoleTextAttribute(hConsole, 14); 
        cout << "                 PLEASE ENTER Y/N" <<endl;
            SetConsoleTextAttribute(hConsole, 15); 
        //cout << endl;
        this_thread::sleep_for(chrono::milliseconds(400));
        cout << endl; 
            
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

            if (ans == "n" || ans == "N")
            {
                    SetConsoleTextAttribute(hConsole, 12);
                cout << "Garbage!" << endl;
                    SetConsoleTextAttribute(hConsole, 15);
                exit(0);
            }
            else if (ans == "y" || ans == "Y")
            {
               
                cout << "Please enter name:" << endl << endl;
                cin.ignore();
                getline(cin, in[0]);
                ++err;
            }
            else if (ans== "q" || ans == "Q")
            {
                quitMsg();
                exit(0);
            }
            else
            {
                    SetConsoleTextAttribute(hConsole, 12);
                cout << "Error!" << endl;
                    SetConsoleTextAttribute(hConsole, 15);
            }
    }
    err = 0;
        while (err<=0)
    {
        cout << endl; cout << endl; cout << endl; cout << endl; cout << endl; cout << endl; 
        SetConsoleTextAttribute(hConsole, 14); 
        cout << "                 PLEASE ENTER Y/N" <<endl;
        SetConsoleTextAttribute(hConsole, 15); 
        //cout << endl; 
        this_thread::sleep_for(chrono::milliseconds(400));
        cout << endl; 
        this_thread::sleep_for(chrono::milliseconds(400));
        
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
                  SetConsoleTextAttribute(hConsole, 12);
                cout << "Garbage!" << endl;
                  SetConsoleTextAttribute(hConsole, 15);
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
                    SetConsoleTextAttribute(hConsole, 12);
                cout << "Error!" << endl;
                    SetConsoleTextAttribute(hConsole, 15);
            }
    }
    err = 0;
        while (err<=0)
    {
        cout << endl; cout << endl; cout << endl; cout << endl; cout << endl; cout << endl; 
            SetConsoleTextAttribute(hConsole, 14); 
        cout << "                 PLEASE ENTER Y/N" <<endl;
            SetConsoleTextAttribute(hConsole, 15); 
        //cout << endl; 
        this_thread::sleep_for(chrono::milliseconds(400));
        cout << endl; 
        this_thread::sleep_for(chrono::milliseconds(400));
        
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
                    SetConsoleTextAttribute(hConsole, 12);
                cout << "Garbage!" << endl;
                    SetConsoleTextAttribute(hConsole, 15);
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
                    SetConsoleTextAttribute(hConsole, 12);
                cout << "Error!" << endl;
                    SetConsoleTextAttribute(hConsole, 15);
            }
    }
    err = 0;
        while (err<=0)
    {
        cout << endl; cout << endl; cout << endl; cout << endl; cout << endl; cout << endl; 
            SetConsoleTextAttribute(hConsole, 14); 
        cout << "                 PLEASE ENTER Y/N" <<endl;
            SetConsoleTextAttribute(hConsole, 15); 
        //cout << endl; 
        this_thread::sleep_for(chrono::milliseconds(400));
        cout << endl; 
        this_thread::sleep_for(chrono::milliseconds(400));
        
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
                    SetConsoleTextAttribute(hConsole, 12);
                cout << "Garbage!" << endl;
                    SetConsoleTextAttribute(hConsole, 15);
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
                    SetConsoleTextAttribute(hConsole, 12);
                cout << "Error!" << endl;
                    SetConsoleTextAttribute(hConsole, 15);
            }
    }
     err = 0;
        while (err<=0)
    {
        cout << endl; cout << endl; cout << endl; cout << endl; cout << endl;
            SetConsoleTextAttribute(hConsole, 14); 
        cout << "                 PLEASE ENTER Y/N" <<endl;
            SetConsoleTextAttribute(hConsole, 15); 
        //cout << endl; 
        this_thread::sleep_for(chrono::milliseconds(400));
        cout << endl; 
        this_thread::sleep_for(chrono::milliseconds(400));
        
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
                    SetConsoleTextAttribute(hConsole, 12);
                cout << "Garbage!" << endl;
                    SetConsoleTextAttribute(hConsole, 15);
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
                    SetConsoleTextAttribute(hConsole, 12);
                cout << "Error!" << endl;
                    SetConsoleTextAttribute(hConsole, 15);
            }
    }
    err = 0;
        while (fail == 4)
        {
               while (err<=0)
               {
                    cout << endl; cout << endl; cout << endl; cout << endl; cout << endl;
                        SetConsoleTextAttribute(hConsole, 14); 
                    cout << "                 PLEASE ENTER Y/N" <<endl;
                        SetConsoleTextAttribute(hConsole, 15); 
                    //cout << endl; 
                    this_thread::sleep_for(chrono::milliseconds(400));
                    cout << endl; 
                    this_thread::sleep_for(chrono::milliseconds(400));
                    
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
                        fail;
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
                            SetConsoleTextAttribute(hConsole, 12);
                        cout << "Error!" << endl;
                            SetConsoleTextAttribute(hConsole, 15);
                    }
                }   
                err = 0;
                if(fail == 4){
                while (err<=0)
                {
                    cout << endl; cout << endl; cout << endl; cout << endl; cout << endl; cout << endl; 
                        SetConsoleTextAttribute(hConsole, 14); 
                    cout << "                 PLEASE ENTER Y/N" <<endl;
                        SetConsoleTextAttribute(hConsole, 15); 
                    //cout << endl; 
                    this_thread::sleep_for(chrono::milliseconds(400));
                    cout << endl; 
                    this_thread::sleep_for(chrono::milliseconds(400));
                    
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
                            SetConsoleTextAttribute(hConsole, 12);
                        cout << "Error!" << endl;
                            SetConsoleTextAttribute(hConsole, 15);
                    }
                } 
                }
                if(fail == 4){   
                err = 0;
                while (err<=0)
                {
                    cout << endl; cout << endl; cout << endl; cout << endl; cout << endl; cout << endl; 
                        SetConsoleTextAttribute(hConsole, 14); 
                    cout << "                 PLEASE ENTER Y/N" <<endl;
                        SetConsoleTextAttribute(hConsole, 15); 
                    //cout << endl; 
                    this_thread::sleep_for(chrono::milliseconds(400));
                    cout << endl; 
                    this_thread::sleep_for(chrono::milliseconds(400));
                    
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
                            SetConsoleTextAttribute(hConsole, 12);
                        cout << "Error!" << endl;
                            SetConsoleTextAttribute(hConsole, 15);
                    }
                }
                }        
        }
        err = 0;
        while (fail == 3)
        {  
                while (err<=0)
                {
                    cout << endl; cout << endl; cout << endl; cout << endl; cout << endl; cout << endl; 
                        SetConsoleTextAttribute(hConsole, 14); 
                    cout << "                 PLEASE ENTER Y/N" <<endl;
                        SetConsoleTextAttribute(hConsole, 15); 
                    //cout << endl; 
                    this_thread::sleep_for(chrono::milliseconds(400));
                    cout << endl; 
                    this_thread::sleep_for(chrono::milliseconds(400));
                    
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
                            SetConsoleTextAttribute(hConsole, 12);
                        cout << "Error!" << endl;
                            SetConsoleTextAttribute(hConsole, 15);
                    }
                }
                if( fail == 3){    
                err = 0;
                while (err<=0)
                {
                    cout << endl; cout << endl; cout << endl; cout << endl; cout << endl; cout << endl;
                        SetConsoleTextAttribute(hConsole, 14); 
                    cout << "                 PLEASE ENTER Y/N" <<endl;
                        SetConsoleTextAttribute(hConsole, 15); 
                    //cout << endl; 
                    this_thread::sleep_for(chrono::milliseconds(400));
                    cout << endl; 
                    this_thread::sleep_for(chrono::milliseconds(400));
                    
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
                            SetConsoleTextAttribute(hConsole, 12);
                        cout << "Error!" << endl;
                            SetConsoleTextAttribute(hConsole, 15);
                    }
                }
                }
            }
            while (fail == 2)
            {
                 while (err<=0)
                {
                    cout << endl; cout << endl; cout << endl; cout << endl; cout << endl; cout << endl;
                        SetConsoleTextAttribute(hConsole, 14); 
                    cout << "                 PLEASE ENTER Y/N" <<endl;
                        SetConsoleTextAttribute(hConsole, 15); 
                    //cout << endl;
                    this_thread::sleep_for(chrono::milliseconds(400));
                    cout << endl; 
                    this_thread::sleep_for(chrono::milliseconds(400));
                    
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
                            SetConsoleTextAttribute(hConsole, 12);
                        cout << "Error!" << endl;
                            SetConsoleTextAttribute(hConsole, 15);
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
            else if (yrsExp > 5){
                candType = "Senior Candidate";
                references(ref, 3);
            }
            */// Please implement into Job related experience


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
        applicants <<"Phone number: " << in[1] << endl; 
        applicants <<"Email :" << in[4] << "\n\n"; 
        applicants <<"Applicants resume has:" << endl;
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

        


    return 0;
}