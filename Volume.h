//
// Created by benia on 4/26/2024.
//

#ifndef PEXAM_W9_VOLUME_H
#define PEXAM_W9_VOLUME_H
#include "LibraryItem.h"
#include <iostream>
using namespace std;

class Volume: public LibraryItem {
protected:
    unsigned int publicationYear;
public:
    Volume(unsigned int publicationYear, string title, float price, float worldbuildingQuality);

    Volume()=default;
    Volume(const string &title, float price, float worldbuildingQuality);
    ~Volume()=default;
    void display() const override;
};


#endif //PEXAM_W9_VOLUME_H
