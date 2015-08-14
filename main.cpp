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
    Json::Object obj = rdr.decode(json);
    
    //string k = obj["key"].toString();
    Json::Array ary = obj["aa"];
    
    for (int i = 0; i < ary.size(); i++) {
        std::cout << ary[i].toInt() << std::endl;
    }
    
    return 0;
}
