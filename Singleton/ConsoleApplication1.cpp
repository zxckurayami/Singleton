// Виконав Іван Єнко
#include <Windows.h>
#include <iostream>

class Singleton {
private:
    // Приватний конструктор, щоб заборонити створення об'єктів ззовні класу
    Singleton() {}

    // Єдиний екземпляр класу
    static Singleton* instance;

public:
    // Метод для отримання єдиного екземпляра класу
    static Singleton* getInstance() {
        if (!instance) {
            instance = new Singleton();
        }
        return instance;
    }

    // Інші методи класу
    void showMessage() {
        std::cout << "Hello from Singleton!" << std::endl;
    }
};

// Ініціалізація static-члена класу
Singleton* Singleton::instance = nullptr;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    // Отримання єдиного екземпляра класу
    Singleton* singletonInstance = Singleton::getInstance();

    // Використання методів класу
    singletonInstance->showMessage();

    return 0;
}
