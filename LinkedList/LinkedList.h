//
// Created by cfont on 31.03.2022.
//

#ifndef POA_LABO2_SQUADRONS_LINKEDLIST_H
#define POA_LABO2_SQUADRONS_LINKEDLIST_H

#include <cstddef>

template<typename T>
class LinkedList {
public:

   LinkedList();

   LinkedList(const LinkedList& other);

   void pushFront(T value);

   void remove(T value);

   T get(size_t index) const;

   size_t getSize() const;

private:
   struct Node {
      T value;
      Node *next;
   };

   Node beforeFirst;
   size_t size;
};




#endif //POA_LABO2_SQUADRONS_LINKEDLIST_H
