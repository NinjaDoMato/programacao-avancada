#include"Matriz.h"

int main() {

    Matriz m1(3, 3);
    Matriz m2(3, 3);
    Matriz m3(3, 3);

    Matriz res(3, 3);

    cout << "Matriz 1: " <<endl;
    cin >> m1;

    cout << "Matriz 2: " <<endl;
    cin >> m2;

    cout << "Matriz 3: " <<endl;
    cin >> m3;

    cout << "Equação 1: m1 + m2 + 3 * m3 " << endl;
    cout << "Matriz resultado: " << endl;
    res =  3 * m3;
    cout << res;


    cout << "Equação 2: m1 * (3 * m2) + 5 * m3 " << endl;
    cout << "Matriz resultado: " << endl;
    res = m1 * (3 * m2) + 5 * m3;
    cout << res;

    cout << "Equação 3: m1 - m1 + m2 * 3 + 3 * m3 " << endl;
    cout << "Matriz resultado: " << endl;
    res = m1 - m1 + m2 * 3 + 3 * m3;
    cout << res;
    return 0;
}