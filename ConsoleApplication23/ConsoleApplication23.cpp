
using namespace std;
#include <iostream>

int main()
{
    /* int n;
     cout << "input n\n"; cin >> n;

     for (int a = 0; a<n && n <= 50; a++) {
         cout << "*";
     }
     cout << endl;
     for (int a = 0; a < n && n <= 50; a++) {
         cout << "*";


    int n;
    cout << "input number\n"; cin >> n;
    for (int a = 1; a < n; a++) {
        cout << a << " ";
    }
    cout << n << endl;
      }


    int a, b;
    cout << "input number 1\n"; cin >> a;
    cout << "input number 2\n"; cin >> b;
    for (int n = a; n >= a && n <= b; n++) {
        cout << n << " ";
    }

    int n;
    cout << "input number\n"; cin >> n;
    for (int a = 1; 2* a<= n; a++) {
        cout << "3 " << "5 ";       }

int n;
    cout << "input number\n"; cin >> n;
    for (int a = 1; a <= n; a++) {
        if (!(a % 2 == 0)) {
            cout << a << " ";
        }
    }
    int n;
    int k = 0;
    cout << "input number\n";
    for (int a = 1; a <= 5; a++) {
        cin >> n;

        if (n % 10 == 8) { k = k + 1; }
        if (a == 5) { cout << k; }
    }

    int n;
    int f, s;
    int k = 0;
    cout << "input number\n";
    for (int a = 1; a <= 11; a++) {
        cin >> n;
        f = n / 10;
        s = n % 10;
        if (f * s > 35) { k = k + n; }
        if (a == 11) {
            cout << k;
        }
    }

    int n;
    int k = 0;
    cout << "input number\n";
    for (int a = 1; a <= 5; a++) {
        cin >> n;
        if (n == 5) { k = k + 1; }
    }
    if (k >= 1) { cout << "yes"; }
    else { cout << "no"; }

    int a, b;
    int k = 0;
    cout << "input number 1\n"; cin >> a;
    cout << "input number 2\n"; cin >> b;
    for (int n = a; n >= a && n <= b; n++) {
        k = k + n;
    }
    cout << k;

    int n;
    int k = 0;
    cout << "input number\n";
    for (int a = 1; a <= 10; a++) {
        cin >> n;

        k = n / 3;
        if (k * 3 == n) {
            cout << n << " is multiply to three\n";
        }
     }
     

    int n;
    int k = 0;
    int z;
    int q = 0;
    cout << "input number\n";
    for (int a = 1; a <= 10; a++) {
        cin >> n;
        z = n % 10;
        k = n / 4;
        if ((k * 4 == n) && z == 6) {
            cout << n << " is multiply to 4 and has end to 6\n";
            q = q + 1;
        }
        if (a == 10 && q < 1) {
            cout << "No one is multiply to 4 and has not end to 6";
        }
    }
    */
srand(time(NULL));
int randnum = rand() % 500 + 1;
cout << "Let us play the game.\nThe rules is next:\nYou have to guess the number\nIf you do not want to guess anymore - input 0\n";
cout << "So, let us start \n";
int num;
cout << randnum << endl; //для перевірки себе
for (;;) {
    cout << "input the number... "; cin >> num;
    cout << endl;
    int a; a = num - randnum;
    int b; b = randnum - num;

    if (num > 500) { cout << "Only from 1 to 500. Try again\n"; }
    if ((500 >= a) && (a >= 200) && num != 0) { cout << "The number you must guess is so lesser\n\n"; }
    else if ((200 > a) && (a >= 100) && num != 0) { cout << "The number you must guess a little bit lesser\n\n"; }
    else if ((100 > a) && (a >= 1) && num != 0) { cout << "You are very near the guessed number. Try just a little bit lesser\n\n"; }
    else if ((500 >=b) && (b >= 200) && num != 0) { cout << "The number you must guess is so bigger\n\n"; }
    else if ((200 > b) && (b >= 100) && num != 0) { cout << "The number you must guess a little bit bigger\n\n"; }
    else if ((100 > b) && (b >= 1) && num != 0) { cout << "You are very near the guessed number. Try just a little bit bigger\n\n"; }
    else if (num == randnum) { cout << "You won\n"; break; }
    else if (num == 0) { cout << "Ok. See you later\n"; break; }
    
}


}





