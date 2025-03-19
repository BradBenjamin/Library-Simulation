//
// Created by benia on 4/26/2024.
//

#include "Volume.h"

Volume::Volume(unsigned int publicationYear, std::string title, float price, float worldbuildingQuality)
: LibraryItem(title, price, worldbuildingQuality), publicationYear(publicationYear){}

void Volume::display() const {
    cout << "Volume details: " << endl;
    cout << "Title: " << title << ", Price: " << price << ", WBQuality: " << worldbuildingQuality << ", P. Year: "
         << publicationYear<<endl;
}

Volume::Volume(const string &title, float price, float worldbuildingQuality) : LibraryItem(title, price,
                                                                                           worldbuildingQuality) {}


