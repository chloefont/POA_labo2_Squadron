//
// Created by cfont on 31.03.2022.
//

#include <stdexcept>
#include "LinkedList.h"

template<typename T>
LinkedList<T>::LinkedList() : beforeFirst(nullptr, nullptr), size(0) {}

template<typename T>
void LinkedList<T>::pushFront(T value) {
   Node* newNode = new Node(value);
   newNode->next = beforeFirst.next;
   beforeFirst.next = newNode;
   size++;
}

template<typename T>
void LinkedList<T>::remove(T value) {
   Node current = beforeFirst.next;
   Node previous = beforeFirst;

   while (current != nullptr) {
      if (current.value == value) {
         previous.next = current.next;
      }
      previous = current;
      current = current.next;
   }
   size--;
}

template<typename T>
LinkedList<T>::LinkedList(const LinkedList &other) {
   Node current = other.beforeFirst.next;
   while (current != nullptr) {
      pushFront(current.value);
      current = current.next;
   }
}

template<typename T>
T LinkedList<T>::get(size_t index) const {
   if (index >= size) {
      throw std::out_of_range("Index out of range");
   }

   Node current = beforeFirst.next;
   size_t i = 0;
   while (i < index) {
      current = current.next;
      i++;
   }
   return current.value;
}

template<typename T>
size_t LinkedList<T>::getSize() const {
   return size;
}


