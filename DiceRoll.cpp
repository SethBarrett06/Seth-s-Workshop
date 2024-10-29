#include <random>
#include <iostream>

using namespace std;

void d4(int &time);
void d6(int &time);
void d8(int &time);
void d10(int &time);
void d12(int &time);
void d20(int &time, int &num);




int main(){
int num, roll, lb, ub, times, numb;


cout << "How many sides does the dice have?: ";
cin >> num;
cout << "How many times do you want the dice rolled?: ";
cin >> times;

if (times > 0)
{switch (num){
case 4:
    d4(times);
break;

case 6:
    d6(times);
break;

case 8:
    d8(times);
break;

case 10:
    d10(times);
break;

case 12:
    d12(times);
break;

case 20:
    d20(times,numb);
break;

default:
cout << "Invalid number of d# Try again";
break;
}
}

else
cout << "Invalid # of rolls (>=0) Try again!";

cout << endl;
 system("pause");
    return 0;
}

void d4(int &time)
{
    int ub;
ub = 3;
for (int i = 0; i < time; i++) {
cout << (rand() % (ub + 1)+1)<< " ";

}
}

void d6(int &time)
{
    int ub;
ub = 5;
for (int i = 0; i < time; i++) {
cout << (rand() % (ub + 1)+1)<< " ";

}
}

void d8(int &time)
{
    int ub;
ub = 7;
for (int i = 0; i < time; i++) {
cout << (rand() % (ub + 1)+1)<< " ";

}
}

void d10(int &time)
{
    int ub;
ub = 9;
for (int i = 0; i < time; i++) {
cout << (rand() % (ub + 1)+1)<< " ";

}
}

void d12(int &time)
{
    int ub;
ub = 11;
for (int i = 0; i < time; i++) {
cout << (rand() % (ub + 1)+1)<< " ";

}
}

void d20(int &time,int &numb)
{
    int ub;
ub = 19;
for (int i = 0; i < time; i++) {
numb = (rand() % (ub + 1)+1);

if (numb == 20)
cout << " CRIT ";

else 
cout << numb << " ";

}
}


