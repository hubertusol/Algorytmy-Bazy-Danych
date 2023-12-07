#include <iostream>

using namespace std;

int main()
{
    function nwd(a,b){
        while(a!=b){
            if(a>b){a-=b;}
            else{b-=a;}
        }
        return a;
    }
    int a,b;
    cout << "Wpisz liczbê a";
    cin >> a;
    cout << "Wpisz liczbê b";
    cin >> b;
    cout<<nwd(a,b);

    return 0;
}
