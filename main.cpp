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
    
    string json = "{\"key\":\"asdf\", \"aa\":-123}";
    Json::Reader rdr;
    Json::Object obj = rdr.decode(json);
    
    string k = obj["key"].toString();
    int i = obj["aa"].toInt();
    
    std::cout << k << std::endl << i;
    return 0;
}
