#include <iostream>
using namespace std;

int main(){
int count, times = 30;

cout << "How big of a flag do you want?";
cin >> times;


for (int k = 0; k < times*3; k++)
    {cout << "_";}
cout << endl;



for (int s = 0; s <= 5; s++)

    {for (int i = 0; i < times; i++)
    {cout << "*";}
    for (int j = 0; j <= times*2; j++)
    {cout << "=";}

cout << "|" << endl;}

for (int q = 0; q <= 5; q++)
{
    for (int y = 0; y <= times*3; y++)
        {cout << "=";}
    cout << "|" << endl;
}

for (int z = 0; z < times*3; z++)
    cout << "-";
cout << endl;

    system("pause");
    return 0;
}