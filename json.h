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
        vector<Value> table;
    };
    
    class Value {
    private:
        int iData;
        double dData;
        string sData;
        Array aData;
        Object oData;
    };
}

#endif /* defined(__lightjson__) */
