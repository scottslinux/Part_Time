#ifndef DAYKEEPER_H
#define DAYKEEPER_H

#include<QDate>
#include<QMap>
#include<QVector>

class DAYKEEPER
{
public:

    struct dailysched
    {
        int eventCount;
        QVector<QString> eventlist;


        dailysched() {}
    };

    QString ActiveMode;

    //      each day has a QDate and a daily schedule of events
    //      listed in the vector

    QMap<QDate,dailysched> Day;
    //    KEY ,  VALUE

    DAYKEEPER();    //constructor
    ~DAYKEEPER();   //Destructor

    void ListEvents();  //iterate through the map and check for events


};







#endif // DAYKEEPER_H
