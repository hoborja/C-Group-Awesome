#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
   


    string ans;
    restart:
    {
    string ans;
    ans.clear();

        cout <<"===================================" << endl;
        cout <<"+          Resume Screener!       +" << endl;
        cout <<"+     Please enter true or false  +" << endl;
        cout <<"===================================" << endl;

        cout <<"Does the resume have a name on it? " << endl;
        cin >> ans;
        cout << endl;

            if (ans == "false")
            {
                cout <<"GARBAGE!" << endl;
                goto restart;
            }    
            else if (ans == "true")
            {
                    string ans;
                    ans.clear();
                cout <<"Does the resume have a email?" << endl;

                cin >> ans;
                cout << endl;

            if (ans == "false")
            {
                cout <<"GARBAGE!" << endl;
                goto restart;
            }
            else if (ans == "true")
            {
                cout <<"Test Complete!" << endl;
                goto stop;
            }
        }
    }
stop:
return 0;
            

}