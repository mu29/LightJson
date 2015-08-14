//
//  main.cpp
//  lightjson
//
//  Created by 정인중 on 2015. 8. 13..
//  Copyright (c) 2015년 InJung Chung. All rights reserved.
//

#include <iostream>
#include "json.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    
    Json::Object obj;
    
    Json::Array ary;
    ary.add(1);
    ary.add(3);
    ary.add(2);
    
    for (int i = 0; i < ary.size(); i++) {
        std::cout << ary[i].toInt();
    }
    
    return 0;
}
