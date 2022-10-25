// ContainersBeginProject.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <vector>

class User
{
    char name[50];
    int age;
};

using namespace std;

int main()
{

    vector<int> v;
    for (int i = 0; i < 15; i++)
    {
        cout << i << ": capacity: " << v.capacity() << " size: " << v.size() << "\n";
        v.push_back(i + 1);
    }
        
    for (int i = 0; i < 10; i++)
        cout << v[i] << " ";

    vector<User> users;
}
