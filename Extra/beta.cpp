#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    restart:
    string ans;

        cout <<"===================================" << endl;
        cout <<"+          Resume Screener!       +" << endl;
        cout <<"+     Please enter true or false  +" << endl;
        cout <<"===================================" << endl;

        cout <<"Does the Resume have a Name?" << endl;
        cin >> ans;

            if (ans == "false")
            {
                cout << "GARBAGE!" << endl;
                goto restart;
            }
            else if (ans == "true")
            {
                cout << "Does the Resume have a Phone Number?" <<endl;
                cin >> ans;
            }
                if (ans == "false")
                {
                    cout << "GARBAGE!" << endl;
                    goto restart;
                }
                else if (ans == "true")
                {
                    cout << "Does the Resume have an Email?" <<endl;
                    cin >> ans;
                }
                    if (ans == "false")
                    {
                        cout << "GARBAGE!" << endl;
                        goto restart;
                    }
                    else if (ans == "true")
                    {
                        cout << "Does the Resume have Grammatical errors?" << endl;
                        cin >> ans;
                    }
                        if (ans == "true")
                        {
                            cout << "GARBAGE!" << endl;
                            goto restart;
                        }
                        else if (ans == "false")
                        {
                            cout << "Does the Resume have spelling errors?" << endl;
                            cin >> ans;
                        }
                            if (ans == "true")
                            {
                                cout << "GARBAGE!" << endl;
                                goto restart;
                            }
                            else if (ans == "false")
                            {
                                cout << "Does the Resume have qualifying skills?" << endl;
                                cin >> ans;
                            }
                                if (ans == "true")
                                {
                                    cout << "Does the resume have job related experience?" << endl;
                                    cin >> ans;
                                        
                                        if (ans == "true")
                                        {
                                            cout << "Does the Resume have job related education?" << endl;
                                            cin >> ans;
                                        }
                                        else if (ans == "false")
                                        {
                                            goto loser;
                                        }
                                            if (ans == "true")
                                            {
                                                cout << "EXCELLENT CANDIDATE!!!!" << endl;
                                                goto restart;
                                            }
                                            else if (ans == "false")
                                            {
                                                cout << "QUALIFIED CANDIDATE" << endl;
                                                goto restart;
                                            }
                                }
                                else if (ans == "false")
                                {
                                    cout << "Does the Resume have job related experience?" << endl;
                                    cin >> ans;

                                        if (ans == "true")
                                        {
                                            loser:
                                            cout << "Does the resume have job related education?" << endl;
                                            cin >> ans;
                                        }
                                        else if (ans == "false")
                                        {
                                            cout << "GARBAGE!" << endl;
                                            goto restart;
                                        }
                                            if (ans == "true")
                                            {
                                                cout << "QUALIFIED CANDIDATE" << endl;
                                                goto restart;
                                            }
                                            else if (ans == "false")
                                            {
                                                cout << "GARBAGE!" << endl;
                                                goto restart;

                                            }
                            
                                }
            






















    return 0;
}