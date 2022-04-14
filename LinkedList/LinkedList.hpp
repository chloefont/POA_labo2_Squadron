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

/**
 * A linked list implementation.
 *
 * @tparam T type of the elements in the list
 * @authors Luca Coduri & Chloé Fontaine
 * @date 2022/04/14
 */
template<typename T>
class LinkedList {
public:
   friend class Iterator<T>;

   friend std::ostream &operator<<<T>(std::ostream &os, const LinkedList<T> &list);

   LinkedList();

   LinkedList(const LinkedList &other);

   ~LinkedList();

   /**
    * @brief Add an element to the front of list.
    * 
    * @param value element to add
    */
   void pushFront(T value);

   /**
    * @brief Add an element to the end of the list.
    * 
    * @param value element to add
    */
   void pushBack(T value);

   /**
    * @brief Removes an element from the list.
    * 
    * @param value 
    */
   void remove(T value);

   /**
    * @brief get an element at index.
    * 
    * @throw std::out_of_range if index is out of range
    * @param index 
    * @return T 
    */
   T get(size_t index) const;

   /**
    * @brief Get an iterator of the first element of the list.
    * 
    * @return Iterator<T> 
    */
   Iterator<T> begin() const noexcept;

   /**
    * @brief Get the Size of the list
    * 
    * @return size_t 
    */
   size_t getSize() const;

   /**
    * @brief Get an iterator of the last element + 1 of the list.
    * 
    * @return Iterator<T> 
    */
   Iterator<T> end() const noexcept;

   /**
    * @brief returns true if the list is empty.
    * 
    * @return true if the list is empty.
    */
   bool empty() const noexcept;

   /**
    * @brief Check if the list contains an element.
    * 
    * @param value 
    * @return true if the list contains the value.
    */
   bool isIn(T value);

private:

   /**
    * @brief Node that contains an element of the list and the next node.
    * 
    */
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
   return size == 0;
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
