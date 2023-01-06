#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    unsigned int grade = rand()%9;
    cout << "Press Enter 3 times to reveal your future.";
    for(int i =1;i<=3;i++)
    {
        cin.get();
    }
    cout << "You will get ";
    
    switch (grade)
    {
        case 0:
            cout << "A";
            break;
        case 1:
            cout << "B+";
            break;
        case 2:
            cout << "B";
            break;
        case 3:
            cout << "C+";
            break;
        case 4:
            cout << "C";
            break;
        case 5:
            cout << "D+";
            break;
        case 6:
            cout << "D";
            break;
        case 7:
            cout << "F";
            break;
        default:
            cout << "W"; 
            break;
    }
    cout << " in this 261102.";
}
// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
