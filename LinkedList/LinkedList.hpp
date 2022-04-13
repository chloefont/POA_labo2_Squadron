//
// Created by cfont on 31.03.2022.
//

#ifndef POA_LABO2_SQUADRONS_LINKEDLIST_HPP
#define POA_LABO2_SQUADRONS_LINKEDLIST_HPP

#include <cstddef>
#include <stdexcept>
#include "iostream"
#include "Iterator.hpp"

template<typename T>
std::ostream &operator<<(std::ostream &os, const LinkedList<T> &list);

template<typename T>
class LinkedList {
public:
   friend class Iterator<T>;

   friend std::ostream &operator<<<T>(std::ostream &os, const LinkedList<T> &list);

   LinkedList();

   LinkedList(const LinkedList &other);

   ~LinkedList();

   void pushFront(T value);

   void pushBack(T value);

   void remove(T value);

   T get(size_t index) const;

   Iterator<T> begin() const noexcept;

   size_t getSize() const;

   Iterator<T> end() const noexcept;

   bool empty() const noexcept;

   bool isIn(T value);

private:
   struct Node {
      T value;
      Node *next;
   };

   Node beforeFirst;
   size_t size;
};

template<typename T>
LinkedList<T>::LinkedList() : beforeFirst{T(), nullptr}, size(0) {}

template<typename T>
void LinkedList<T>::pushFront(T value) {
   Node *newNode = new Node{value, beforeFirst.next};
   beforeFirst.next = newNode;
   size++;
}



template<typename T>
void LinkedList<T>::remove(T value) {
   Node *current = beforeFirst.next;
   Node *previous = &beforeFirst;

   while (current != nullptr) {
      if (current->value == value) {
         previous->next = current->next;
         Node* tmp = current;
         current = tmp->next;
         delete tmp;
         size--;
      } else {
         previous = current;
         current = current->next;
      }
   }
}

template<typename T>
LinkedList<T>::LinkedList(const LinkedList &other) : beforeFirst{T(), nullptr}, size(0) {
   Node *current = other.beforeFirst.next;
   while (current != nullptr) {
      pushBack(current->value);
      current = current->next;
   }
}

template<typename T>
T LinkedList<T>::get(size_t index) const {
   if (index >= size) {
      throw std::out_of_range("Index out of bounds");
   }

   Node *current = beforeFirst.next;
   size_t i = 0;
   while (i < index) {
      current = current->next;
      i++;
   }
   return current->value;
}

template<typename T>
size_t LinkedList<T>::getSize() const {
   return size;
}

template<typename T>
Iterator<T> LinkedList<T>::begin() const noexcept {
   return Iterator<T>(beforeFirst.next);
}

template<typename T>
std::ostream &operator<<(std::ostream &os, const LinkedList<T> &list) {
   auto current = list.beforeFirst.next;
   while (current != nullptr) {
      os << current->value << std::endl;
      current = current->next;
   }
   return os;
}

template<typename T>
Iterator<T> LinkedList<T>::end() const noexcept {
   Node *current = beforeFirst.next;
   if (current == nullptr) {
      return Iterator<T>(nullptr);
   }

   while (current->next != nullptr) {
      current = current->next;
   }
   Iterator<T> it = (Iterator<T>) current;
   return ++it;
}

template<typename T>
bool LinkedList<T>::empty() const noexcept {
   return begin() == end();
}

template<typename T>
LinkedList<T>::~LinkedList() {
   Node *current = beforeFirst.next;

   while (current != nullptr) {
      Node *tmp = current;
      current = current->next;
      delete tmp;
   }
}

template<typename T>
void LinkedList<T>::pushBack(T value) {
   Node* newNode = new Node{value, nullptr};

   Node* current = &beforeFirst;

   while (current->next != nullptr) {
      current = current->next;
   }

   current->next = newNode;
   size++;
}

template<typename T>
bool LinkedList<T>::isIn(T value) {
   Node *current = &beforeFirst;

   while (current->next != nullptr) {
      if (current->next->value == value) {
         return true;
      }
      current = current->next;
   }
   return false;
}


#endif //POA_LABO2_SQUADRONS_LINKEDLIST_HPP
