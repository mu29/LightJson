//
//  object.h
//  lightjson
//
//  Created by 정인중 on 2015. 8. 13..
//  Copyright (c) 2015년 InJung Chung. All rights reserved.
//

#ifndef __lightjson__object__
#define __lightjson__object__

#include <map>
#include <string>
#include "value.h"
using namespace std;

namespace Json {
    class ObjectValue : public Value {
    private:
        int count;
        map<string, Value> table;
    public:
        ObjectValue();
        
        Value& operator=(const Value& other);
        Value& operator[](const string&);
    };
}

#endif /* defined(__lightjson__object__) */
