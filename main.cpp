// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <cassert>
#include <iostream>
#include <cfloat>
#include "extra-task-1.h"

int main()
{
    assert(seconds_difference(1800.0, 3600.0) - 1800.0 < DBL_EPSILON);
    assert(seconds_difference(3600.0, 1800.0) - (-1800.0) < DBL_EPSILON);
    assert(seconds_difference(1800.0, 2160.0) - 360.0 < DBL_EPSILON);
    assert(seconds_difference(1800.0, 1800.0) - 0.0 < DBL_EPSILON);

    assert(hours_difference(1800.0, 3600.0) - 0.5 < DBL_EPSILON);
    assert(hours_difference(3600.0, 1800.0) - 0.5 < DBL_EPSILON);
    assert(hours_difference(1800.0, 2160.0) - 0.1 < DBL_EPSILON);
    assert(hours_difference(1800.0, 1800.0) - 0.0 < DBL_EPSILON);

    assert(to_float_hours(0, 15, 0) - 0.25 < DBL_EPSILON);
    assert(to_float_hours(2, 45, 9) - 2.7525 < DBL_EPSILON);
    assert(to_float_hours(1, 0, 36) - 1.01 < DBL_EPSILON);

    assert(to_24_hour_clock(24) - 0 < DBL_EPSILON);
    assert(to_24_hour_clock(48) - 0 < DBL_EPSILON);
    assert(to_24_hour_clock(25) - 1 < DBL_EPSILON);
    assert(to_24_hour_clock(4) - 4 < DBL_EPSILON);
    assert(to_24_hour_clock(28.5) - 4.5 < DBL_EPSILON);

    assert(get_hours(3800) == 1);
    assert(get_minutes(3800) == 3);
    assert(get_seconds(3800) == 20);

    assert(time_to_utc(+0, 12.0) - 12.0 < DBL_EPSILON);
    assert(time_to_utc(+1, 12.0) - 11.0 < DBL_EPSILON);
    assert(time_to_utc(-1, 12.0) - 13.0 < DBL_EPSILON);
    assert(time_to_utc(-11, 18.0) - 5.0 < DBL_EPSILON);
    assert(time_to_utc(-1, 0.0) - 1.0 < DBL_EPSILON);
    assert(time_to_utc(-1, 23.0) -  0.0 < DBL_EPSILON);

    assert(time_from_utc(+0, 12.0) - 12.0 < DBL_EPSILON);
    assert(time_from_utc(+1, 12.0) - 13.0 < DBL_EPSILON);
    assert(time_from_utc(-1, 12.0) - 11.0 < DBL_EPSILON);
    assert(time_from_utc(+6, 6.0) - 12.0  < DBL_EPSILON);
    assert(time_from_utc(-7, 6.0) - 23.0  < DBL_EPSILON);
    assert(time_from_utc(-1, 0.0) - 23.0  < DBL_EPSILON);
    assert(time_from_utc(-1, 23.0) - 22.0 < DBL_EPSILON);
    assert(time_from_utc(+1, 23.0) - 0.0  < DBL_EPSILON);
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
