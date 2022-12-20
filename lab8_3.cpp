#include <iostream>
#include <string>

using namespace std;

char before(char x){
    int numK = x;
    char text = numK ;
    if(numK <= 91 && numK >48)
    {
        numK--;
        if(numK < 65)
        {
            numK += 26;
        }
    }
    else
    {
        numK = 48;
    }
    text = numK;
    return text;
}
int main(){
    cout << before('A') << "\n";
    cout << before('B') << "\n";
    cout << before('P') << "\n";
    cout << before('T') << "\n";
    cout << before('Z') << "\n";
    cout << before('a') << "\n";
    cout << before('0') << "\n";
    cout << before('c') << "\n";
    return 0;
}
