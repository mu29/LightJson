//
//  json.h
//  lightjson
//
//  Created by 정인중 on 2015. 8. 13..
//  Copyright (c) 2015년 InJung Chung. All rights reserved.
//

#ifndef __lightjson__
#define __lightjson__

#include <string>
#include <map>
#include <vector>
using namespace std;

namespace Json {
    class Value;
    
    enum Type {
        BOOL,
        INT,
        DOUBLE,
        STRING,
        ARRAY,
        OBJECT,
        NIL
    };
    
    class Object {
    private:
        map<string, Value> table;
    public:
        Object();
        Object(const Object&);
        
        Value& operator[](const string&);
        Object& operator=(const Object&);
    };
    
    class Array {
    private:
        int count;
        vector<Value> table;
    public:
        Array();
        Array(const Array&);
        
        Value& operator[](const int&);
        Array& operator=(const Array&);
        void add(const Value&);
        int size();
    };
    
    class Value {
    private:
        bool bData;
        int iData;
        double dData;
        string sData;
        Array aData;
        Object oData;
        
        Type valueType;
    public:
        Value();
        Value(bool);
        Value(int);
        Value(double);
        Value(const char*);
        Value(string&);
        Value(Array&);
        Value(Object&);
        Value(const Value&);
        
        operator bool() const;
        operator int() const;
        operator double() const;
        operator string () const;
        operator Array () const;
        operator Object () const;
        Value& operator=(const Value&);
        
        double toReal() const;
        int toInt() const;
        bool toBool() const;
        string toString() const;
    };
}

#endif /* defined(__lightjson__) */
