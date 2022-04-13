//
// Created by cfont on 12.04.2022.
//

#ifndef POA_LABO2_SQUADRONS_ITERATOR_HPP
#define POA_LABO2_SQUADRONS_ITERATOR_HPP

template<typename T>
class LinkedList;

template<typename T>
class Iterator {
private:
   friend class LinkedList<T>;

   using Node = typename LinkedList<T>::Node;

   Node *current;

   Iterator(Node *node) : current(node) {}

public:
   Iterator() : current(nullptr) {}

   Iterator &operator++() {
      current = current->next;
      return *this;
   }

   Iterator operator++(int) {
      auto tmp(*this);
      operator++();
      return tmp;
   }

   bool operator==(const Iterator &i) {
      return current == i.current;
   }

   bool operator!=(const Iterator &i) {
      return !operator==(i);
   }

   T &operator*() {
      return current->value;
   }
};

#endif //POA_LABO2_SQUADRONS_ITERATOR_HPP

