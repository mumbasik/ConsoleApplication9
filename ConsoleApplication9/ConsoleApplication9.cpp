

#include <iostream>
#include <cctype>
#include <cmath>
using namespace std;

int main()
{
    //N1!
    int e;
    cout << "Enter a number \n";
    cin >> e;                                     // как определить четное или нечетное значение
    cout << "Result \n";
    cout << e % 2 << "\n";
    //N2
    int j;
    int h;
    int y;
    cout << "First number \n";
    cin >> j;
    cout << "Second number \n";
    cin >> h;
    cout << "third number \n";
    cin >> y;
    cout << "Overall Result: \n";
    int small;
    if (j > h) {
        small = h;
    }                                                    // как узнать самое меньшое значение
    if (small > y) {
        small = y;
    }
    if (small > j) {
        small = j;
    }
    cout << "Smallest are >>  \n";
    cout << small;
    //N3
    int numb;
    cout << "number \n";
    cin >> numb;
    if (numb < 0) {
        cout << "Number negative \n";           // как узнать положительное ли число или отрицательное
    }
    else if (numb > 0) {
        cout << "Number is positive \n";
    }
    //N4!
    int o;
    int p;
    
    cout << "First  \n";
    cin >> o;
    cout << "Second  \n";
    cin >> p;
    cout << "Result with  (+) \n";
    cout << o + p << "\n";
    cout << "Result with  (-) \n";
    cout << o - p << "\n" ;
    cout << "Result with (*) \n";
    cout << o * p << "\n";
    cout << "Result with (/) \n";
    cout << o / p << "\n";
    cout << "Result with (%) \n";
    cout << o % p << "\n";
    //N5!
    int symb;
    cout << "Ur symbol \n";
    cin >> symb;
    if (isdigit(symb)) {
        cout << "Yeah symb is a number \n";
    }
    else if (ispunct(symb)) {
        cout << " Yeah symb is punct \n";

    }
    else if (isalpha(symb)) {
        cout << "Yeah symb is a letter";
    }
    //N6!
    int N;
    int M;
    int number;
    cout << "Number \n";
    cin >> number;
    cout << "Start of range \n";
    cin >> N;
    cout << "End of range \n";
    cin >> M;
    cout << "Result \n";
    if (number >= N &&  number <= M) {
        cout << "Yeah, number is in the range;";

    }
    //N7!
    int firstn;
    int secondn;
    cout << "First number \n";
    cin >> firstn;
    cout << "Second number \n";
    cin >> secondn;
    cout << "Overall \n";
    cout << firstn % secondn << "\n";
    
    //N8!
    int nb;
    cout << "Number \n";
    cin >> nb;
    if (nb % 3 && nb % 5 && nb % 7) {
        cout << "Yeah number is multiple";

    }

    //N9!
    int f;
    cout << "NUmber \n";
    cin >> f;
    cout << "Result \n";
    cout << (abs(f));
    //N10!
    int v;
    cout << "Enter v (4symbols)";
    cin >> v;
    cout << "Result";
    cout << floor(log10(v));
    //N13!;
    int u;
    int g;
    int i;
    int t;
    cout << "enter u \n";
    cin >> u;
    cout << "enter g \n ";
    cin >> g;
    cout << "enter i \n";
    cin >> i;
    cout << "enter t \n";
    cin >> t;
    cout << "Overall \n";
    cout << (u > g) ? u : g > ((i > t) ? i : g) ;
   
    

}
   



