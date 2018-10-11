#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
   


    
    restart:
    
    string ans;
    ans.clear();

        cout <<"===================================" << endl;
        cout <<"+          Resume Screener!       +" << endl;
        cout <<"+     Please enter true or false  +" << endl;
        cout <<"===================================" << endl;

        cout <<"Does the resume have a name on it? " << endl;
        cin >> ans;
        cout << endl;

            if (ans == "false" || "False" || "f" || "F" || "no" || "No" || "n" || "N")
            {
                cout <<"GARBAGE!" << endl;
                goto restart;
            }    
            else if (ans == "true" || "yes" || "y" || "Y" || "True" || "Yes" || "t" || "T")
            {
                    string ans;
                    ans.clear();
                cout <<"Does the resume have a phone number?" << endl;

                cin >> ans;
                cout << endl;
            
            if (ans == "false" || "False" || "f" || "F" || "no" || "No" || "n" || "N")
            {
                cout <<"GARBAGE!" << endl;
                goto restart;
            }
            else if (ans == "true" || "yes" || "y" || "Y" || "True" || "Yes" || "t" || "T")
            {
                cout <<"Does the resume have an email? " << endl;
                    string ans;
                    ans.clear();
                cin >> ans;
                cout << endl;
            }
            if (ans == "false" || "False" || "f" || "F" || "no" || "No" || "n" || "N")
            {
                cout <<"GARBAGE!" << endl;
                goto restart;
            }
            else if (ans == "true" || "yes" || "y" || "Y" || "True" || "Yes" || "t" || "T")
            {
                cout <<"Does the resume have any spelling errors? " << endl;
                    string ans;
                    ans.clear();
                cin >> ans;
                cout << endl;
                goto stop:
            }
        
    
stop:
return 0;
}