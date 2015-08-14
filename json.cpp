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

Array::Array() {
    
}

Array::Array(const Array& other) {
    table = other.table;
}

Value& Array::operator[](const int& key) {
    return table.at(key);
}

Array& Array::operator=(const Array& other) {
    table = other.table;
    return *this;
}

void Array::add(const Value& value) {
    table.push_back(value);
    count++;
}

int Array::size() {
    return count;
}

Value::Value() {
    valueType = Type::NIL;
}

Value::Value(bool value) {
    bData = value;
    valueType = Type::BOOL;
}

Value::Value(int value) {
    iData = value;
    valueType = Type::INT;
}

Value::Value(double value) {
    dData = value;
    valueType = Type::DOUBLE;
}

Value::Value(const char* value) {
    sData = value;
    valueType = Type::STRING;
}

Value::Value(string& value) {
    sData = value;
    valueType = Type::STRING;
}

Value::Value(Array& value) {
    aData = value;
    valueType = Type::ARRAY;
}

Value::Value(Object& value) {
    oData = value;
    valueType = Type::OBJECT;
}

Value::Value(const Value& other) {
    switch (other.valueType) {
        case Type::BOOL:
            bData = other.bData;
            break;
        case Type::INT:
            iData = other.iData;
            break;
        case Type::DOUBLE:
            dData = other.dData;
            break;
        case Type::STRING:
            sData = other.sData;
            break;
        case Type::ARRAY:
            aData = other.aData;
            break;
        case Type::OBJECT:
            oData = other.oData;
            break;
        case Type::NIL:
            break;
    }
    valueType = other.valueType;
}

Value::operator bool() const {
    return bData;
}

Value::operator int() const {
    return iData;
}

Value::operator double() const {
    return dData;
}

Value::operator string() const {
    return sData;
}

Value::operator Array() const {
    return aData;
}

Value::operator Object() const {
    return oData;
}

Value& Value::operator=(const Value& other) {
    switch (other.valueType) {
        case Type::BOOL:
            bData = other.bData;
            break;
        case Type::INT:
            iData = other.iData;
            break;
        case Type::DOUBLE:
            dData = other.dData;
            break;
        case Type::STRING:
            sData = other.sData;
            break;
        case Type::ARRAY:
            aData = other.aData;
            break;
        case Type::OBJECT:
            oData = other.oData;
            break;
        case Type::NIL:
            break;
    }
    valueType = other.valueType;
    
    return *this;
}

double Value::toReal() const {
    return dData;
}
int Value::toInt() const {
    return iData;
}

bool Value::toBool() const {
    return bData;
}

string Value::toString() const {
    return sData;
}