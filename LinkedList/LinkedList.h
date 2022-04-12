//
// Created by cfont on 31.03.2022.
//

#ifndef POA_LABO2_SQUADRONS_LINKEDLIST_H
#define POA_LABO2_SQUADRONS_LINKEDLIST_H

#include <cstddef>
#include <stdexcept>
#include "Iterator.h"

template<typename T>
class LinkedList {
public:
   friend class Iterator<T>;

   LinkedList();

   LinkedList(const LinkedList& other);

   void insert_after(Iterator<T> position, T valeur);

   void pushFront(T value);

   void remove(T value);

   T get(size_t index) const;

   Iterator<T> begin() noexcept;

   size_t getSize() const;

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

//template<typename T>
//void insert_after(Iterator<T> position, T valeur) {
//   Node *courant = position.m;
//   value_type object = value_type(valeur);
//
//   auto NouveauMaillon = new(std::nothrow) Maillon{value_type(object),
//                                                   courant->suivant};
//   if (NouveauMaillon == NULL) return delete NouveauMaillon;
//   courant->suivant = NouveauMaillon;
//}

template<typename T>
void LinkedList<T>::pushFront(T value) {
   Node* newNode = new Node{value, beforeFirst.next};
   beforeFirst.next = newNode;
   size++;
}

template<typename T>
void LinkedList<T>::remove(T value) {
   Node* current = beforeFirst.next;
   Node previous = beforeFirst;

   while (current != nullptr) {
      if (current->value == value) {
         previous.next = current->next;
      }
      previous = current;
      current = current->next;
   }
   size--;
}

template<typename T>
LinkedList<T>::LinkedList(const LinkedList &other) {
   Node current = other.beforeFirst.next;
   while (&current != nullptr) {
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

template<typename T>
Iterator<T> LinkedList<T>::begin() noexcept {
   return Iterator<T>(beforeFirst.next);
}


#endif //POA_LABO2_SQUADRONS_LINKEDLIST_H
