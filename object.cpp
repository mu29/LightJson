//
//  object.cpp
//  lightjson
//
//  Created by 정인중 on 2015. 8. 13..
//  Copyright (c) 2015년 InJung Chung. All rights reserved.
//

#include "object.h"
using namespace Json;

ObjectValue::ObjectValue() {
    count = 0;
}

Value& ObjectValue::operator=(const Value& other) {
    return *this;
}

Value& ObjectValue::operator[](const string& key) {
    //map<string, Value>::iterator iter = table.find(key);
    return table[key];
}