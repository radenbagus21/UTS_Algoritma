# UTS_Algoritma

UTS

Soal 1
	mendeklarasikan masalah bialangan int X,Y,A,B

alur alogaritma
	1. mendeklarsikan bilangan X,Y,A,B
	2. mengisi nilai variabel A = 2 dan B = 4
	3. menghitung bilangan dengan menggunakan rumus
X = A;
    Y = B;
    {if(X != Y )
        {if ( X < Y  )
                {  X = X + A;}
        else
                { Y = Y + B;}

Bahasa C++ nya

#include <iostream>

using namespace std;

int main()
{
    int A,B,X,Y;

    cout << "masukan bilangan A: ";
    cin >> A;
    cout << "masukan bilangan B: ";
    cin >> B;

    X = A;
    Y = B;
    {if(X != Y )
        {if ( X < Y  )
                {  X = X + A;}
        else
                { Y = Y + B;}
    }

    cout << X;

    }
}

**SCREENSHOOT**
![SCREENSHOOT](https://raw.githubusercontent.com/radenbagus21/UTS_Algoritma/master/SS%20Soal%201.png)

Soal 2
	mencari nilai syntak jika N di isi dengan NIM mahasiswa
Alur alogaritma
	1. mendeklarasikan int N,X,T,Batas
	2. mengisi nilai variabel
		N= 04
		Batas = N + 100
		X = 10
		T = N 
	3. menghitung bilangan dengan rumus
while( T <= Batas)
    {   T = T + X;
        X = X + 10;

Bahasa C++ nya

#include <iostream>

using namespace std;
int main()
{int N,X,T,Batas;
N =04;
Batas = N + 100;
X = 20
T = N;
while( T <= Batas)
    {   T = T + X;
        X = X + 10;
    }
    cout << T;
}

**SCREENSHOOT**
![SCREENSHOOT](https://raw.githubusercontent.com/radenbagus21/UTS_Algoritma/master/SS%20Soal%202.png)
