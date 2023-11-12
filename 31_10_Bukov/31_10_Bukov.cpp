#include <iostream>
#include <vector>

void task1(int number[], const int size);
void task2(std::vector<std::string> array);
void task3(int number2[], int size2);
void task4(std::vector<int>& array2);
void task5(std::vector<int>& array2);

int main()
{
    setlocale(LC_ALL, "Russian");
    //task1
    const int size = 10;
    int number[size] = { 1, 20, 8, 21, 90, 41, 21, 56, 87, 20 };
    std::cout << "Задание 1: " << std::endl;
    task1(number, size);

    // task2
    std::vector<std::string> array = {"Hello", "", "W orld  ", ""};
    std::cout << "\n\nЗадание 2: " << std::endl;
    task2(array);

    //task3
    const int size2 = 5;
    int number2[size2] = {1, 2, 3, 4, 5};
    std::cout << "\nЗадание 3: " << std::endl;
    task3(number2, size2);

    //task4
    std::vector<int> array2 = { 10, 20, 30, 51, 20, 30, 15, 20, 12 };
    std::cout << "\nЗадание 4: " << std::endl;
    task4(array2);

    //task5
    std::vector<int> array3 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    std::cout << "\nЗадание 5: " << std::endl;
    task5(array3);

}

// Замена 20 на 200
void task1(int number[], const int size)
{
    bool found = false;
    std::cout << "Изначальный массив: "<<std::endl;
    for(int i = 0; i < size; i++)
    {
        std::cout << number[i] << " ";
    }
    // Обнаружение "20" в массиве и замена на "200"
    for (int i = 0; i < size; i++)
    {
        if (number[i] == 20)
        {
            number[i] = 200;
            found = true;
            std::cout << "\n20 найден, измененный массив: " << std::endl;
            for (int j = 0; j < size; j++)
            {
                std::cout << number[j] << " ";
            }
            break;
        }
    }

    if (!found)
    {
        std::cout << "\n20 не найден, новый массив" << std::endl;
    }
}


// Удаление пустых строк
void task2(std::vector<std::string> array)
{
    //вывод изначального массива
    std::cout << "Изначальный массив: ";
    for(const auto& str : array)
    {
        std::cout << str << " ";
    }
    // Удаление пустых строк
    std::vector<std::string> noEmpty;
    for(const auto& i : array)
    {
        if(!i.empty())
        {
            noEmpty.push_back(i);
        }
    }

    // Вывод результата
    std::cout << "\nВывод результата: ";
    for (const auto& str : noEmpty)
    {
        std::cout << str << " ";
    }
    std::cout << std::endl;
}


// Возведение в квадрат
void task3(int number2[], int size2)
{
    std::cout << "Изначальный массив: " << std::endl;
    for (int i = 0; i < size2; i++)
    {
        std::cout << number2[i] << " ";
    }

    std::cout << "\nКвадраты чисел: " << std::endl;
    for (int i = 0; i < size2; i++)
    {
        number2[i] = number2[i] * number2[i];
        std::cout << number2[i] << " ";
    }

    std::cout << std::endl;
}


// Удаление 20
void task4(std::vector<int>& array2)
{
    bool found = false;
    std::cout << "Изначальный массив: " << std::endl;
    for (const auto& i : array2)
    {
        std::cout << i << " ";
    }

    // Обнаружение "20" в массиве и удаление
    auto it = std::remove(array2.begin(), array2.end(), 20); // перемещение всех 20 в конец вектора
    array2.erase(it, array2.end()); // удаление 20 

    std::cout << "\n20 найден, измененный массив: " << std::endl;
    for (const auto& j : array2)
    {
        std::cout << j << " ";
    }

    if (array2.empty())
    {
        std::cout << "\n20 не найден, новый массив" << std::endl;
    }
}


// Вывод списка в обратном порядке
void task5(std::vector<int>& array3)
{
    std::cout << "Изначальный массив: " << std::endl;
    for (const auto& i : array3)
    {
        std::cout << i << " ";
    }
std::cout << "\nИзмененный массив: " << std::endl;
    for (auto i = array3.rbegin(); i != array3.rend(); ++i)
    {
        std::cout << *i << " ";
    }
}
