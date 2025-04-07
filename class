#include <iostream>
#include <string>

using namespace std;

class calculator{
    private:
        int a, b, sum, raznost, mnoze, del;
    public:
        calculator(int number_1, int number_2)
        {
            a = number_1; b = number_2;
        }
        void Sum()
        {
            sum = a + b;
            cout << a << " + " << b << " = " << sum << endl;
        }
        void Raz()
        {
            raznost = a - b;
            cout << a << " - " << b << " = " << raznost << endl;
        }
        void Mnoz()
        {
            mnoze = a * b;
            cout << a << " * " << b << " = " << mnoze << endl;
        }
        void Delen()
        {
            del = a / b;
            cout << a << " / " << b << " = " << del << endl;
        }
};

int main() {
    calculator c1(100, 2);
    c1.Sum();
    c1.Raz();
    c1.Mnoz();
    c1.Delen();
    cout << endl;
    calculator c2(10, 2);
    c2.Sum();
    c2.Raz();
    c2.Mnoz();
    c2.Delen();
    
    return 0;
}
