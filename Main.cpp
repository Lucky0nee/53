// Перевантаження чотирьох операторів
// Зверніть увагу, що всі оператори є двійковими, тобто бінарними
#include <iostream>
#include <limits>
using namespace std;

class Digit {
private:
    float dig; // int dig;
public:
    Digit() {
        this->dig = 0.f;
    }

    Digit(float iDig) {
        this->dig = iDig;
    }

    void Show() {
        cout << this->dig << "\n";
    }

    Digit operator+(const Digit& N) {
        //Digit temp;
        //temp.dig = dig + N.dig;
        //return temp;
        return Digit(this->dig + N.dig);
    }

    Digit operator-(const Digit& N) {
        //Digit temp;
        //temp.dig = dig - N.dig;
        //return temp;
        return Digit(this->dig - N.dig);
    }

    Digit operator*(const Digit& N) {
        //Digit temp;
        //temp.dig = dig * N.dig;
        //return temp;
        return Digit(this->dig * N.dig);
    }

    Digit operator%(const Digit& N) {
        if (N.dig != 0.f) {
            //Digit temp;
            //temp.dig = dig % N.dig;
            //return temp;
            return Digit(static_cast<int>(this->dig) % static_cast<int>(N.dig));
        }
        else {
            //Digit temp;
            //temp.dig = std::numeric_limits<int>::infinity();
            cout << "Division by zero! ";
            return N.dig;
        }
    }

    Digit operator/(const Digit& N) {
        if (N.dig != 0.f) {
            //Digit temp;
            //temp.dig = dig % N.dig;
            //return temp;
            return Digit(this->dig / N.dig);
        }
        else {
            //Digit temp;
            //temp.dig = std::numeric_limits<int>::infinity();
            cout << "Division by zero! ";
            return N.dig;
        }
    }
};
int main() {
    Digit A(9), B(-7), C, D;

    cout << "Число A: \n"; A.Show();
    cout << "Число B: \n"; B.Show();
    cout << "Число С: \n"; C.Show();
    cout << "Число D: \n"; D.Show();

    cout << "\nOperator + (A + C): \n";
    C = A + C;
    C.Show();

    cout << "\nOperator - (A - B): \n";
    C = A - B;
    C.Show();

    cout << "\nOperator * (A * B): \n";
    C = A * B;
    C.Show();

    cout << "\nOperator % (A % D): \n";
    //Digit D;
    C = A % D;
    C.Show();

    cout << "\nOperator / (A / D): \n";
    C = A / D;
    C.Show();
}

/*
Розгляньте цей код. Спробуйте його максимально вдосконалити. Підберіть
кращий тип для змінної всередині класу. Передбачте ситуацію ділення на нуль
так, щоб програма не закінчувала роботу аварійно, а видавала відповідне
повідомлення.
Додайте ще один перевантажений оператор до даного класу.
*/
