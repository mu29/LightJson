//
//  json.cpp
//  lightjson
//
//  Created by 정인중 on 2015. 8. 13..
//  Copyright (c) 2015년 InJung Chung. All rights reserved.
//

#include "json.h"
using namespace Json;

Object::Object() {
    
}

Object::Object(const Object& other) {
    table = other.table;
}

Value& Object::operator[](const string& key) {
    return table[key];
}

Object& Object::operator=(const Object& other) {
    table = other.table;
    return *this;
}