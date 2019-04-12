//
//  Location.h
//  Binary Search Tree
//
//  Created by Gabriel Spranger Rojas on 4/5/19.
//  Copyright © 2019 Joke Up. All rights reserved.
//

#ifndef Location_h
#define Location_h

#include <string>

class Location {
    int position_id;
    std::string state_code;
    std::string county;
    double latitude;
    double longitude;
    std::string line;
    std::string construction;
public:
    Location(
             int position_id,
             std::string state_code,
             std::string county,
             double latitude,
             double longitude,
             std::string line,
             std::string construction);
    
    // Declare los metodos que crea necesario
    
    // Cree que sea necesario agregar destructor, justifique
    
};

#endif /* Location_h */
