//
//  main.cpp
//  lightjson
//
//  Created by 정인중 on 2015. 8. 13..
//  Copyright (c) 2015년 InJung Chung. All rights reserved.
//

#include <iostream>
#include "object.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    
    Json::ObjectValue obj;
    obj["1"] = 1;
    
    std::cout << obj["1"].f();
    return 0;
}
