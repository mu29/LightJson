//
//  object.h
//  lightjson
//
//  Created by 정인중 on 2015. 8. 13..
//  Copyright (c) 2015년 InJung Chung. All rights reserved.
//

#ifndef __lightjson__object__
#define __lightjson__object__

#include "node.h"
namespace lightjson {
    class ObjectValue : public Value {
    private:
        Node* head;
    public:
        ObjectValue();
    };
}

#endif /* defined(__lightjson__object__) */
