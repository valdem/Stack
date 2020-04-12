#include "ListStack.h"



// добавление в хвост
void ListStack:: push(const ValueType& value) {
    pushFront(value);
}
// удаление с хвоста
void ListStack:: pop() {
    removeFront();
}
// посмотреть элемент в хвосте
ValueType& ListStack:: top() {
    return getNode(0)->value;

}
const ValueType& ListStack:: top() const {
    return getNode(0)->value;
}
// проверка на пустоту
bool ListStack:: isEmpty() const {
    if (getNode(0)) {
        if (getNode(0)->value) {
            return false;
        }
        else {
            return true;
        }
    }
    else {
        return false;
    }
}
// размер
size_t ListStack:: size() const {
    return LinkedList::size();
}
