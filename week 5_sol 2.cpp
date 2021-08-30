#include<iostream>
#include<string>
using namespace std;

main()
{
    string s;
    cout << "Input String : " ;
    getline(cin,s);

    int l=s.length();
    int i;

    for(i=0;i<l;i++)
    {
        for(int j=0;j<l-i;j++) cout << s[j];
        cout << "\n";
    }
    return 0;
}
