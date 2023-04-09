#ifndef TRIP_H
#define TRIP_H
#include <QApplication>
#include <QDateTime>


class Trip
{
private:
    QString name;
    QString direction;
    double tripPrice;
    int numDays;
    QDateTime date;
    int positionsLeft;
    float rating;



public:

    Trip(QString newDirection, double newTripPrice,
         int newNumDays, QDateTime newDate, int newPositionsLeft,
         float newRating);

    QString getName();
    void setName(QString newName);

    QString getDirection();
    void setDirection(QString newDirection);

    double getTripPrice();
    void setTripPrice(double newTripPrice);

    int getNumDays();
    void setNumDays(int newNumDays);

    QDateTime getDate();
    void setDate(QDateTime newDate);

    int getPositionsLeft();
    void setPositionsLeft(int newPositionsLeft);

    float getRating();
    void setRating(float newRating);


};

#endif // TRIP_H
