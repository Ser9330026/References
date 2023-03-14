// References.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

//Ссылки

#include <iostream>

template <typename T>
    void my_swap(T num1, T num2) {
        T tmp = num1;
        num1 = num2;
        num2 = tmp;
    }   

    template <typename T>
    void p_swap(T* num1, T* num2) {
        T tmp = *num1;
        *num1 = *num2;
        *num2 = tmp;
    }

template <typename T>
    void ref_swap(T &num1, T &num2) {
        T tmp = num1;
        num1 = num2;
        num2 = tmp;
    }

    
        int MX[10][2];

        int& func(int index) {
            return MX[index][1];
        }

int main()
{
    setlocale(LC_ALL, "rus");
    int n, m;
    
    std::cout << "Ввод в массив: \n";
    for (int i = 0; i < 10; i++) {
        std::cout << "Введите " << i + 1 << "-й элемент ->";
        std::cin >> MX[i][0];
        func(i) = MX[i][0];
    }

    std::cout << "Итоговый массив:\n";
    for (int i = 0; i < 10; i++)
        std::cout << MX[i][0] << '\t' << func(i) << '\n';


    /*
    //Ссылки - параметры фукции
    n = 10;
    m = 15;
    std::cout << n << ' ' << m << std::endl;
    //p_swap(&n, &m);//Работает, но неудобная, тк нужно передавать адреса
    ref_swap(n, m);
    std::cout << n << ' ' << m << std::endl*/
    
    //Ссылки
    
    /*n = 10;
    m = 20;
    int &refn = n;//Ссылка, ассоциирующаяся с переменной n. Необходимо сразу инициализировать (поместить переменную)
    std::cout << "refn =" << refn << std::endl;
    refn = m;
    std::cout << "refn =" << refn << std::endl;
    std::cout << "n =" << n << std::endl;

    //ВАЖНО!!! Изучить примечания в слайдах
    // 1. Ссылка всегда направлена на какой-либо объект
    // 2. 

    */

    

}

