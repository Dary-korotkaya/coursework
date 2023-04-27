#include "tourlist.h"
#include "types.cpp"


TourList::TourList()
{
    this->tripList = QList<Trip>{};
}

void TourList::addTour(Trip newTrip){
    this->tripList.push_back(newTrip);
}

void TourList::deleteTour(Trip &deleteTrip){    //проверка
    this->tripList.removeAt(deleteTrip);
}

void TourList::search( QString dir , QList sort ){

    //QString dir; Add in main

    for(int i = 0; i < tripList.size(); i++)
        {
        if(tripList.at(i)->getDirection() == dir)
            {
                sort.append(tripList.at(i));
                //do something with object, that has index = i
            }
        }
    if(sort.isEmpty){
        cout << "Поездка не найдена";
    }
    return sort;
}

void TourList::sort( Sort op , QList sort){
    switch (op)
        {
            case Sort::Price:
                for(int i = 1; i < tripList.size(); i++)
                    {
                    if(tripList.at(i)->getPrice() < tripList.at(i-1)->getPrice())
                        {
                            sort.swapItemsAt((tripList.at(i), (tripList.at(i-1));
                        }
                }
                break;

            case Sort::NumDays:
                cout << n1 - n2 << endl;
                break;

            case Sort::Date:
                std::cout << n1 * n2 << endl;
                break;

            case Sort::PositionLeft:
                std::cout << n1 - n2 << std::endl;
                break;

            case Sort::Rating:
                std::cout << n1 * n2 << std::endl;
                break;
                }
}
