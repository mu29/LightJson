//
//  node.cpp
//  lightjson
//
//  Created by 정인중 on 2015. 8. 13..
//  Copyright (c) 2015년 InJung Chung. All rights reserved.
//

#include "node.h"
using namespace lightjson;

Node::Node() {
    key = "";
    value = NULL;
    next = NULL;
}

Node::Node(string key, Value* value) {
    this->key = key;
    this->value = value;
    next = NULL;
}

Node::Node(string key, Value* value, Node* next) {
    this->key = key;
    this->value = value;
    this->next = next;
}

string& Node::getKey() {
    return key;
}

Value& Node::getValue() {
    return *value;
}