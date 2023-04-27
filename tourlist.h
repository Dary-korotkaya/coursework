#ifndef TOURLIST_H
#define TOURLIST_H
#include <QList>
#include "trip.h"

class TourList
{
private:
    QList<Trip> tripList;

    void addTour(Trip newTrip);

    void deleteTour(Trip deleteTrip);

    void search(Trip tripList);
    void sort(Trip tripList);

public:
    TourList();

};

#endif // TOURLIST_H
