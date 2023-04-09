#include "trip.h"
#include <QApplication>
#include <QDateTime>

Trip::Trip(QString newDirection, double newTripPrice,
           int newNumDays, QDateTime newDate, int newPositionsLeft,
           float newRating)
{
    this->direction = newDirection;
    this->tripPrice = newTripPrice;
    this->numDays = newNumDays;
    this->date = newDate;
    this->positionsLeft = newPositionsLeft;
    this->rating = newRating;
}

QString Trip::getName(){
    return this->name;
}
void Trip::setName(QString newName){
    this->name = newName;
}

//Direction
QString Trip::getDirection(){
    return direction;
}
void Trip::setDirection(QString newDirection){
    this->direction = newDirection;
}
//Trip Price
double Trip::getTripPrice(){
    return tripPrice;
}
void Trip::setTripPrice(double newTripPrice){
    this->tripPrice = newTripPrice;
}
//Number of Days
int Trip::getNumDays(){
    return numDays;
}
void Trip::setNumDays(int newNumDays){
    this->numDays = newNumDays;
}
//Date
QDateTime Trip::getDate(){
    return date;
}
void Trip::setDate(QDateTime newDate){
    this->date = newDate;
}
//PositionsLeft
int Trip::getPositionsLeft(){
    return positionsLeft;
}
void Trip::setPositionsLeft(int newPositionsLeft){
    this->positionsLeft = newPositionsLeft;
}
//Rating
float Trip::getRating(){
    return rating;
}
void Trip::setRating(float newRating){
    this->rating = newRating;
}
