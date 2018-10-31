#include <iostream>

using namespace std;
int main()
{int N,X,T,Batas;
N = 04;
Batas = N + 100;
X = 10;
T = N;
while( T <= Batas)
    {   T = T + X;
        X = X + 10;
    }
    cout << T;
}
