//
//  main.cpp
//  lightjson
//
//  Created by 정인중 on 2015. 8. 13..
//  Copyright (c) 2015년 InJung Chung. All rights reserved.
//

#include <iostream>
#include "json.h"
#include "reader.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    
    string json = "{\"key\":\"asdf\", \"aa\":[-123,23,33]}";
    Json::Reader rdr;
    Json::Value obj = rdr.decode(json);
    
    Json::Value obj2 = obj["key"];
    
    return 0;
}
