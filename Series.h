//
// Created by benia on 4/26/2024.
//

#ifndef PEXAM_W9_SERIES_H
#define PEXAM_W9_SERIES_H
#include "LibraryItem.h"
#include "Volume.h"
#include <iostream>
using namespace std;

class Series: public LibraryItem{
protected:
    Volume volume_vector[3];
public:
    Series(string title);
    ~Series()=default;
    void display() const override;
    void addVolumeToSeries(string volume_title, float volume_price, float volume_worldbuildingQuality);
};


#endif //PEXAM_W9_SERIES_H
