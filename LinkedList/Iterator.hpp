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

   /**
    * @brief Construct a new Iterator object
    * 
    * @param node on wich the iterator is pointing.
    */
   explicit Iterator(Node *node) : current(node) {}

public:
   Iterator() : current(nullptr) {}

   /**
    * @brief Sets this iterator to the next element.
    * 
    * @return Iterator& next iterator.
    */
   Iterator &operator++() {
      current = current->next;
      return *this;
   }

   /**
    * @brief Get a new iterator pointing to the next element.
    * 
    * @return Iterator 
    */
   Iterator operator++(int) {
      auto tmp(*this);
      operator++();
      return tmp;
   }

   /**
    * @brief Check if this iterator is pointing to the same element as the other.
    * 
    * @param i other iterator
    * @return true if the iterators are pointing to the same element.
    */
   bool operator==(const Iterator &i) {
      return current == i.current;
   }

   /**
    * @brief check if this iterator is not pointing to the same element as the other.
    * 
    * @param i other iterator.
    * @return true if the iterators are not pointing to the same element.
    */
   bool operator!=(const Iterator &i) {
      return !operator==(i);
   }

   /**
    * @brief Get the value of the element the iterator is pointing to.
    * 
    * @return T& value of the element the iterator is pointing to.
    */
   T &operator*() {
      return current->value;
   }
};

#endif //POA_LABO2_SQUADRONS_ITERATOR_HPP

