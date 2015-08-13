//
//  node.h
//  lightjson
//
//  Created by 정인중 on 2015. 8. 13..
//  Copyright (c) 2015년 InJung Chung. All rights reserved.
//

#ifndef __lightjson__node__
#define __lightjson__node__

#include <string>
#include "value.h"
using namespace std;

namespace lightjson {
    class Node {
    private:
        string key;
        Value* value;
        Node* next;
    public:
        Node();
        Node(string, Value*);
        Node(string, Value*, Node*);
        
        string& getKey();
        Value& getValue();
    };
}

#endif /* defined(__lightjson__node__) */
