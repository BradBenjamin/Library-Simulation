//
// Created by benia on 4/26/2024.
//

#include "LibraryItem.h"
#include <iostream>
using namespace std;

LibraryItem::LibraryItem(string title, float price, float worldbuildinQuality):title(title), price(price), worldbuildingQuality(worldbuildinQuality) {}

float LibraryItem::getPrice() {return price;}

void LibraryItem::setPrice(float newPrice) {price=newPrice;}

float LibraryItem::getWorldBuildingQuality() {return worldbuildingQuality;}

void LibraryItem::setTitle(std::string newTitle) {title=newTitle;}

void LibraryItem::setWorldBuildingQuality(float newQuality) {
    if(newQuality<1 || newQuality>5){
        throw invalid_argument("The rating should be a real nr. between 1 and 5");
    }
    worldbuildingQuality=newQuality;
}
