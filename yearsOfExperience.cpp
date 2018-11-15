#include <iostream>
#include <string>

using namespace std;

int main (){
    
int yrsExp;
string candType;

    if (yrsExp == 0){
        candType = "Intern Candidate";
        references(ref, 3);
    }
    else if (yrsExp <= 5){
        candType = "Junior Candidate"; 
        references(ref, 3);
    }
    else if (yrsExp >=5){
        candType = "Senior Candidate";
        references(ref, 3);
    }

    

return 0;    
}