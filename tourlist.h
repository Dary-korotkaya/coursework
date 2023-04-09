#ifndef TOURLIST_H
#define TOURLIST_H
#include <QVector>
#include "trip.h"

class TourList
{
private:
    QVector<Trip> tripList;

    void addTour(Trip newTrip);

    void deleteTour(Trip deleteTrip);

    void search();
    void sort();

public:
    TourList();

};

#endif // TOURLIST_H
