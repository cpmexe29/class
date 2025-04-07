#include <iostream>
#include <string>
#include <math.h>


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

class Treygolnic
{
    private:
        int a,  b, c, p;
        float s, pol;
    public:
        Treygolnic(int s_1, int s_2, int s_3)
        {
            a = s_1;
            b = s_2;
            c = s_3;
            if(a + b > c && b + c > a && c + a > b)
    {
        cout << "Это треугольник!!!" << endl;
        
        if(c * c == a * a + b * b || a * a == c * c + b * b || b * b == a * a + c * c)
        {
            cout << "Прямоугольный" << endl;
        }
        else if(c * c > a * a + b * b || a * a > c * c + b * b || b * b > c * c + a * a )
        {
            cout << "Тупоугольный" << endl;
        }
        else if(c * c < a * a + b * b && a * a < c * c + b * b && b * b < a * a + c * c)
        {
            cout << "Остроугольный" << endl;
        }
        else if(a == b && a == c)
        {
            cout << "Pавносторонний" << endl;
        }
        else if (a == b || a == c || c == b)
        {
            cout << "Равнобедренный" << endl;
        }
    }
    else
    {
        cout << "Is not triangle!!!" << endl;
    }
        }
};
class Ploch
{
  private:
    int a, b, c;
    float p, pol, s;
  public:
  Ploch(int s_1, int s_2, int s_3)
        {
            a = s_1;
            b = s_2;
            c = s_3;
            
        p = a + b + c;
        pol = p / 2;
        cout << "Perimetr = " << p << endl;
        s = pol * (pol - a) * (pol - b) * (pol - c);
        s = pow(s, 0.5);
        cout << "Ploshad = " << s << endl;
        }
};

int main() {
    int x = 0;
    cout << "Что хотите выбрать???" << endl << "1.Калькулятор" << endl << "2.Работа с треугольником" << endl << "3.Площадь и периметр" << endl;
    cin >> x;
    cout << endl << endl;
    if(x == 1)
    {
        int l, k;
        cin >> l;
        cin >> k;
    calculator c1(l, k);
    c1.Sum();
    c1.Raz();
    c1.Mnoz();
    if(k != 0)
        c1.Delen();
    else
        cout << "На ноль делить нельзя!!!" << endl;
    }
    else if(x == 2)
    {   
        int j, h, g;
        cin >> j;
        cin >> h;
        cin >> g;
        Treygolnic c3(j, h, g);
        cout << endl;
    }
    else if(x == 3)
    {
        int j, h, g;
        cin >> j;
        cin >> h;
        cin >> g;
        cout << endl;
        Ploch c4(j, h, g);
    }
    return 0;
}
