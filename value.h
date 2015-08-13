//
//  Value.h
//  lightjson
//
//  Created by 정인중 on 2015. 8. 13..
//  Copyright (c) 2015년 InJung Chung. All rights reserved.
//

#ifndef __lightjson__Value__
#define __lightjson__Value__

#include <string>
#include <vector>
using namespace std;

namespace Json {
    class Value {
    private:
        int intData;
        string strData;
    public:
        int type;
        int& operator=(const int& data) {
            type = 1;
            intData = data;
            return intData;
        }
        string& operator=(const string& data) {
            type = 2;
            strData = data;
            return strData;
        }
        bool& operator=(const bool&);
        Value& operator=(const Value&);
        template <typename T>
        vector<T>& operator=(const vector<T>&);
    };
    
    class NullValue : public Value {
    };
    
    class IntValue : public Value {
    public:
        Value& operator=(const Value& other);
    };
    
    class StringValue : public Value {
    public:
        Value& operator=(const Value& other);
    };
    
    class BoolValue : public Value {
    public:
        Value& operator=(const Value& other);
    };
    
    class ArrayValue : public Value {
    public:
        Value& operator=(const Value& other);
    };
}

#endif /* defined(__lightjson__Value__) */
