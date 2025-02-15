// Dimension.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    //char
    char c = 88;

    std::cout << "c = " << +c << std::endl;
    std::cout << "sizeof(c) = " << sizeof(c) << std::endl;
    std::cout << "char max =  " << +std::numeric_limits<char>::max() << std::endl;
    std::cout << std::endl;

    signed char sc = -10;

    std::cout << "sc = " << +sc << std::endl;
    std::cout << "sizeof(sc) = " << sizeof(sc) << std::endl;
    std::cout << "signed char max =  " << +std::numeric_limits<signed char>::max() << std::endl;
    std::cout << std::endl;

    unsigned char uc = 14;

    std::cout << "uc = " << +uc << std::endl;
    std::cout << "sizeof(uc) = " << sizeof(uc) << std::endl;
    std::cout << "unsigned char max =  " << +std::numeric_limits<unsigned char>::max() << std::endl;
    std::cout << std::endl;

    //short
    short s = 8888;

    std::cout << "s = " << +s << std::endl;
    std::cout << "sizeof(s) = " << sizeof(s) << std::endl;
    std::cout << "short max =  " << +std::numeric_limits<short>::max() << std::endl;
    std::cout << std::endl;

    signed short ss = -1000;

    std::cout << "ss = " << +ss << std::endl;
    std::cout << "sizeof(ss) = " << sizeof(ss) << std::endl;
    std::cout << "signed short max =  " << +std::numeric_limits<signed short>::max() << std::endl;
    std::cout << std::endl;

    unsigned short us = 14646;

    std::cout << "us = " << +us << std::endl;
    std::cout << "sizeof(us) = " << sizeof(us) << std::endl;
    std::cout << "unsigned short max =  " << +std::numeric_limits<unsigned short>::max() << std::endl;
    std::cout << std::endl;

    //int
    int i = 888987;

    std::cout << "i = " << +i << std::endl;
    std::cout << "sizeof(i) = " << sizeof(i) << std::endl;
    std::cout << "int max =  " << +std::numeric_limits<int>::max() << std::endl;
    std::cout << std::endl;

    signed int si = -1004656;

    std::cout << "si = " << +si << std::endl;
    std::cout << "sizeof(si) = " << sizeof(si) << std::endl;
    std::cout << "signed int max =  " << +std::numeric_limits<signed int>::max() << std::endl;
    std::cout << std::endl;

    unsigned int ui = 14499879;

    std::cout << "ui = " << +ui << std::endl;
    std::cout << "sizeof(ui) = " << sizeof(ui) << std::endl;
    std::cout << "unsigned int max =  " << +std::numeric_limits<unsigned int>::max() << std::endl;
    std::cout << std::endl;

    //long
    long l = 8888888;

    std::cout << "l = " << +l << std::endl;
    std::cout << "sizeof(l) = " << sizeof(l) << std::endl;
    std::cout << "long max =  " << +std::numeric_limits<long>::max() << std::endl;
    std::cout << std::endl;

    signed long sl = -100000000;

    std::cout << "sl = " << +sl << std::endl;
    std::cout << "sizeof(sl) = " << sizeof(sl) << std::endl;
    std::cout << "signed long max =  " << +std::numeric_limits<signed long>::max() << std::endl;
    std::cout << std::endl;

    unsigned long ul = 144456654654;

    std::cout << "ul = " << +ul << std::endl;
    std::cout << "sizeof(ul) = " << sizeof(ul) << std::endl;
    std::cout << "unsigned long max =  " << +std::numeric_limits<unsigned long>::max() << std::endl;
    std::cout << std::endl;

    //long long
    long long ll = 88888889879864;

    std::cout << "ll = " << +ll << std::endl;
    std::cout << "sizeof(ll) = " << sizeof(ll) << std::endl;
    std::cout << "long long max =  " << +std::numeric_limits<long long>::max() << std::endl;
    std::cout << std::endl;

    signed long long sll = -10005464654664;

    std::cout << "sll = " << +sll << std::endl;
    std::cout << "sizeof(sll) = " << sizeof(sll) << std::endl;
    std::cout << "signed long long max =  " << +std::numeric_limits<signed long long>::max() << std::endl;
    std::cout << std::endl;

    unsigned long long ull = 140000000999990000;

    std::cout << "ull = " << +ull << std::endl;
    std::cout << "sizeof(ull) = " << sizeof(ull) << std::endl;
    std::cout << "unsigned long long max =  " << +std::numeric_limits<unsigned long long>::max() << std::endl;
    std::cout << std::endl;

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
