//
//  BinarySearchTree.h
//  Binary Search Tree
//
//  Created by Gabriel Spranger Rojas on 4/5/19.
//  Copyright © 2019 Joke Up. All rights reserved.
//

#ifndef BinarySearchTree_h
#define BinarySearchTree_h

#include "Location.h"

namespace UTEC {
    
    struct Node {
        Location data;
        Node* right;
        Node* left;
    };
    
    class BinarySearchTree {
        Node* root;
    public:
        BinarySearchTree();
        ~BinarySearchTree();
        void insert(Location data);
        void clear();
        bool is_empty();
        Node* get_root();
        Node* search(std::string position_id);
        void print();
    };
    
    void load_locations(BinarySearchTree* linked_list, std::string file_name);
    void print_node(Node* node);
}


#endif /* BinarySearchTree_h */
