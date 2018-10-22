#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <cstdlib>
#include <fstream>

using namespace std;

int main()
{
    int fail = 4;
    int err  = 0;
    string ans;
    string result;
    string name     = "N/A";
    string phone    = "N/A";
    string grammer  = "N/A";
    string spelling = "N/A";
    string email    = "N/A";
    string skills   = "N/A";
    string exp      = "N/A";
    string edu      = "N/A";
    string qual     = "N/A";
    ofstream applicants;

    cout << "+====================================================+" <<endl;
    cout << "+                  RESUME SCREENER!!                 +" <<endl;
    cout << "+                        by:                         +" <<endl;
    cout << "+                    Jamie Hobor                     +" <<endl;
    cout << "+====================================================+" <<endl;
    this_thread::sleep_for(chrono::milliseconds(800));
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
                getline(cin, name);
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
                getline(cin, phone);
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
                getline(cin, email);
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
                spelling = "No Spelling Errors.";
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
                grammer = "No Grammatical Errors.";
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
                        
                        fail = 3;
                    }
                    else if (ans == "y")
                    {
                        skills = "Qualifying skills.";
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
                    cout << "Does the Resume have Job related experience?" << endl;
                    cin >> ans;

                    if (ans == "n")
                    {
                        
                        fail = 2;
                    }
                    else if (ans == "y")
                    {
                        exp = "Job related experience.";
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
                    cout << "Does the Resume have a Job related education?" << endl;
                    cin >> ans;

                    if (ans == "n")
                    {
                        
                        fail = 5;
                    }
                    else if (ans == "y")
                    {
                        edu = "Job related education.";
                        ++err;
                        fail = 4;
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
                    }
                    else if (ans == "y")
                    {
                        exp = "Job related experience.";
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
                    cout << "Does the Resume have a Job related education?" << endl;
                    cin >> ans;

                    if (ans == "n")
                    {
                        
                        fail = 0;
                    }
                    else if (ans == "y")
                    {
                        edu = "Job related education.";
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
                    }
                    else if (ans == "y")
                    {
                        exp = "Job related education.";
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







        cout << endl; cout << endl; cout << endl; cout << endl; cout << endl; cout << endl;
        this_thread::sleep_for(chrono::milliseconds(1800));
        
        if (fail == 4)
        {
            qual = "This Applicant is Incredibly qualified!";
            cout << qual << endl;
        }
        else if (fail == 5)
        {
            qual = "This Applicant is qualified!";
            cout << qual << endl;
        }
        else
        {
            qual = "This Applicant is not qualified";
            cout << qual << endl;
        }

        applicants.open ("applicants.txt");
        applicants <<"Name: " << name << endl;
        applicants <<"Phone Number: " << phone << endl;
        applicants <<"Email :" << email << "\n\n";
        applicants <<"Applicants Resume has:" << endl;
        applicants << grammer << endl;
        applicants << spelling << endl;
        applicants << skills << endl;
        applicants << exp << endl;
        applicants << edu << endl;
        applicants << qual << endl;
        applicants << "\n\n\n\n";
        applicants.close();
         
         
         
         
         
        cout << "Thank You For Using The Resume Screener!" <<endl;



        
        

    
        
    
    
    
    
    
    
    
    
    
    
    
    
















    return 0;
}