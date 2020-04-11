#pragma once

#include "StackImplementation.h"
#include "LinkedList.h"

// вариант с использованием ранее написанного списка и множественного наследования
// если бы список не был реализован, то было бы наследование только от интерфейса
// множественное наследование можно заменить на композицию
class ListStack : public StackImplementation, public LinkedList
{
    
    
    
    // добавление в хвост
    void push(const ValueType& value);
    // удаление с хвоста
    void pop();
    // посмотреть элемент в хвосте
    ValueType& top();
    const ValueType& top() const;
    // проверка на пустоту
    bool isEmpty() const;
    // размер
    size_t size() const;
    

};
