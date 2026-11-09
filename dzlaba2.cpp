#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;

int main()
{
    system("chcp 65001 > nul");
    setlocale(LC_ALL, ".UTF8");

    double V1 = 1, t1 = 20;
    double V2 = 2, t2 = 60;
    double V3 = 3, t3 = 40;

    double V = V1 + V2 + V3;
    double t = (V1*t1 + V2*t2 + V3*t3) / V;

    cout << fixed << setprecision(2);

    cout << "РЕШЕНИЕ ЗАДАЧИ №23\n";
    cout << "Первый сосуд: " << V1 << " л, " << t1 << " C\n";
    cout << "Второй сосуд: " << V2 << " л, " << t2 << " C\n";
    cout << "Третий сосуд: " << V3 << " л, " << t3 << " C\n";
    cout << "-------------------------\n";
    cout << "Общий объем: " << V << " л\n";
    cout << "Итоговая температура: " << t << " C\n";

    return 0;
}
