#include <iostream>
#include <math.h>
using namespace std;
// int main(){////////////////////armstrong number//////////
//     int n;
//     cin>>n;
//     int reverse=0;
//     while(n>0){
//         int lastdigit=n%10;
//         reverse=reverse*10+lastdigit;
//         n=n/10;
//     }
//     cout<<reverse;
//     return 0;
// }
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int original = n;
    while (n > 0)
    {
        int lastdigit = n % 10;
        sum += pow(lastdigit, 3);
        n=n/10;
    }
    if (sum == original)
    {
        cout << "armstrong number";
    }
    else
    {
        cout << "nah munnaaa";
    }
    return 0;
}