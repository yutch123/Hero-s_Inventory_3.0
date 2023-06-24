// Программа Hero's_Inventory_3.0
// Демонстрирует работу с итераторами

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> inventory;
    inventory.push_back("sword"); // элементы вектора
    inventory.push_back("armor");
    inventory.push_back("sheild");
    vector<string>::iterator myIterator; // Объявление итератора для вектора 
    vector<string>::const_iterator iter;
    cout << "Your items:\n";
    for (iter = inventory.begin(); iter != inventory.end(); ++iter)
    {
        cout << *iter << endl;
    }
    cout << "\nYou trade your sword for a battle axe.\n";
    myIterator = inventory.begin(); // заменяем объект sword на battle axe
    *myIterator = "battle axe";
    cout << "\nYour items:\n";
    for (iter = inventory.begin(); iter != inventory.end(); ++iter)
    {
        cout << *iter << endl;
    }
    cout << "\nThe item name " << *myIterator << " has";
    cout << (*myIterator).size() << " letters in it.\n"; // некрасивый способ отображения количество символов в объекте battleaxe
    cout << "\nThe item name " << *myIterator << " has";
    cout << myIterator->size() << " letters in it.\n"; // более красивый спопсоб отображения элементов в объекте battleaxe
    cout << "\nYou recover a crossbow from a slain enemy."; 
    inventory.insert(inventory.begin(), "crossbow"); // добавление нового элемента в последовательности (начало) 
    cout << "\nYour items:\n";
    for (iter = inventory.begin(); iter != inventory.end(); ++iter)
    {
        cout << *iter << endl;
    }
    cout << "\nYour armor is desrtoyed in a fience battle. ";
    inventory.erase((inventory.begin() + 2)); // удаление элемента из начала + 2 позиции вправо то есть 3 элемент
    cout << "\nYour items:\n";
    for (iter = inventory.begin(); iter != inventory.end(); ++iter)
    {
        cout << *iter << endl;
    }
    return 0;
}



