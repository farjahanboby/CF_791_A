#include <iostream>

using namespace std;

int main()
{
    int count1=0, a, b;
    cin>>a>>b;

    while(a<=b){
        a*=3;
        b*=2;
        count1++;
    }
    cout<<count1<<endl;
    return 0;
}
