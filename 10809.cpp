#include <iostream>
#include <string>
using namespace std;
int main()
{
    string S;
    int alphabet[26];
    cin>>S;

    for(int i=0 ; i < 26 ; i++){
        alphabet[i]=-1;
    }
    for(int i=0 ; i< S.length() ; i++){
        if (alphabet[S[i]-97] == -1)
            alphabet[S[i]-97]=i;
    }

    for(int i=0 ; i < 26 ; i++){
        cout<<alphabet[i]<<" ";
    }
    return 0;
}s