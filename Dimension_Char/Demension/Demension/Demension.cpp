// Demension.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
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

    unsigned int uc = 14;

    std::cout << "uc = " << +uc << std::endl;
    std::cout << "sizeof(uc) = " << sizeof(uc) << std::endl;
    std::cout << "unsigned char max =  " << +std::numeric_limits<unsigned char>::max() << std::endl;
    std::cout << std::endl;

    int i = 888;

    std::cout << "i = " << +i << std::endl;
    std::cout << "sizeof(i) = " << sizeof(i) << std::endl;
    std::cout << "int max =  " << +std::numeric_limits<int>::max() << std::endl;
    std::cout << std::endl;

    signed int si = -100;

    std::cout << "si = " << +si << std::endl;
    std::cout << "sizeof(si) = " << sizeof(si) << std::endl;
    std::cout << "signed int max =  " << +std::numeric_limits<signed int>::max() << std::endl;
    std::cout << std::endl;

    unsigned int ui = 144;

    std::cout << "ui = " << +ui << std::endl;
    std::cout << "sizeof(ui) = " << sizeof(ui) << std::endl;
    std::cout << "unsigned int max =  " << +std::numeric_limits<unsigned int>::max() << std::endl;
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
