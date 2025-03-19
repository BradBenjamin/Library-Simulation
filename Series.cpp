//
// Created by benia on 4/26/2024.
//

#include "Series.h"
#include "Volume.h"
#include <iostream>
#include <cstring>
int first_time=0;
Series::Series(std::string title): LibraryItem(title, 0, 0){
    if(first_time==0)
    {
        volume_vector[0].setPrice(-1);
        volume_vector[1].setPrice(-1);
        volume_vector[2].setPrice(-1);
        volume_vector[0].setWorldBuildingQuality(1.1);
        volume_vector[1].setWorldBuildingQuality(1.1);
        volume_vector[2].setWorldBuildingQuality(1.1);
        volume_vector[0].setTitle("Empty Slot in series");
        volume_vector[0].setTitle("Empty Slot in series");
        volume_vector[0].setTitle("Empty Slot in series");
        first_time=1;
    }
}

void Series::display() const {
    cout << "Series details: " << endl;
    cout << "Title: " << title << ", Price: " << price << ", WBQuality: " << worldbuildingQuality;
}

void Series::addVolumeToSeries(std::string volume_title, float volume_price, float volume_worldbuiltingQuality) {
    int nr_books=3;
    if(volume_vector[0].getPrice()==-1){nr_books--;}
    if(volume_vector[1].getPrice()==-1){nr_books--;}
    if(volume_vector[2].getPrice()==-1){nr_books--;}
    if(nr_books==3)
        throw length_error("Cannot add more than 3 volumes to the series");
    if(nr_books==2){
        volume_vector[2]=Volume(volume_title, volume_price, volume_worldbuiltingQuality);
        price+=volume_price;
        price*=0.8;
        worldbuildingQuality=(worldbuildingQuality*2+volume_worldbuiltingQuality)/3;
    }
    if(nr_books==1){
        volume_vector[1]=Volume(volume_title, volume_price, volume_worldbuiltingQuality);
        price+=volume_price;
        worldbuildingQuality=(worldbuildingQuality+volume_worldbuiltingQuality)/2;
    }
    if(nr_books==0){
        volume_vector[0]=Volume(volume_title, volume_price, volume_worldbuiltingQuality);
        price+=volume_price;
        worldbuildingQuality=volume_worldbuiltingQuality;
    }

}