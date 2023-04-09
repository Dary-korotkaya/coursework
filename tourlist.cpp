#include "tourlist.h"

TourList::TourList()
{
    this->tripList = QVector<Trip>{};
}

void TourList::addTour(Trip newTrip){
    this->tripList.push_back(newTrip);
}

void TourList::deleteTour(Trip deleteTrip){
    for (auto it = this->tripList.begin(); it != this->tripList.end(); ++it) {
            if (it->getName() == deleteTrip.getName()) {
                this->tripList.erase(it);
                break;
            }
    }
}

void TourList::search(){

}

void TourList::sort(){

}
