//
//  LinkedList.h
//  Binary Search Tree
//
//  Created by Gabriel Spranger Rojas on 4/5/19.
//  Copyright © 2019 Joke Up. All rights reserved.
//

#ifndef LinkedList_h
#define LinkedList_h

#include "Location.h"

namespace UTEC {
    
    struct Node {
        Location data;
        Node* next;
    };
    
    class LinkedList {
        Node* head;
        Node* tail;
    public:
        LinkedList();
        ~LinkedList();
        int size();
        bool is_empty();
        Node* get_head();
        Node* get_tail();
        void add_head(const Location& data);
        void add_tail(const Location& data);
        void print();
        void insert(Node* position, const Location& data);
        Node* search(std::string position_id);
    };
    void load_locations(LinkedList* linked_list, std::string file_name);
}

#endif /* LinkedList_h */
