#ifndef TRIP_H
#define TRIP_H
#include <QApplication>

class Trip
{
private:
    int number;
    QString direction;
    double tripPrice;
    float rating;
    QDataStream date; //возможно 2 даты нужно(туда обратно)?

public:
    int GetNumber();

    Trip();
    void SetNumber(int valNum);
};

#endif // TRIP_H
