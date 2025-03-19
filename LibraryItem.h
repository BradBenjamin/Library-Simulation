
#ifndef PEXAM_W9_LIBRARYITEM_H
#define PEXAM_W9_LIBRARYITEM_H
#include <iostream>
using namespace std;

class LibraryItem {
protected:
    string title;
    float price;
    float worldbuildingQuality;
public:
    LibraryItem(string title, float price, float worldbuildingQuality);
    LibraryItem()=default;
    ~LibraryItem()=default;
    float getPrice();
    void setPrice(float newPrice);
    float getWorldBuildingQuality();
    void setWorldBuildingQuality(float newQuality);
    void setTitle(string newTitle);
    virtual void display()const=0;


};


#endif //PEXAM_W9_LIBRARYITEM_H
