#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "DayKeeper.h"
#include <QDate>
#include <QMap>
#include <QDebug>


DAYKEEPER DayKeeper;    //create a daykeeper object


//****************************************************************
MainWindow::MainWindow(QWidget *parent) //constructor for mainwindow
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);



}
//****************************************************************

MainWindow::~MainWindow()
{
    delete ui;
}
//****************************************************************

void MainWindow::on_calendarWidget_selectionChanged()
{
    //only when changing from one date to another
    qDebug()<<"Changed selection on the calendar\n";
}

//****************************************************************
void MainWindow::on_calendarWidget_clicked(const QDate &date)
{
    QDate selected_day;

    selected_day=date;
    QString formattedDate=date.toString("MMM dd, yyyy");



    qDebug()<<"Clicked on "<<formattedDate<<Qt::endl;

    // Example: Highlight the current date with a different color
    QDate today = date;
    QTextCharFormat format;

    QColor daycolor;

    if (DayKeeper.ActiveMode=="REGULAR")
    {
        daycolor=QColor{0,0,255,255};
    }
    if (DayKeeper.ActiveMode=="REDUCED")
    {
        daycolor=QColor{0,155,100,255};
    }
    if (DayKeeper.ActiveMode=="ERASING")
    {
        daycolor=QColor{0,0,0,0};
    }



    format.setBackground(daycolor); // Set background color
    if(DayKeeper.ActiveMode=="ERASING")
        format.setForeground(Qt::black);  // Set text color
        else
            format.setForeground(Qt::white);  // Set text color

    format.setFontWeight(QFont::Bold);

    ui->calendarWidget->setDateTextFormat(today, format);

    DayKeeper.Day[date].eventCount=rand()%100;





}

//****************************************************************
void MainWindow::on_print_button_pressed()
{   //      Temporarily using this function to display the contents of the MAP DayKeeper
    //      iterating the MAP structure
    for(QMap<QDate,DAYKEEPER::dailysched>::Iterator it=DayKeeper.Day.begin();it !=DayKeeper.Day.end();++it)
    {
        ui->ResultBox->append(it.key().toString());
        ui->ResultBox->append(QString::number(it->eventCount));




    }


}

//****************************************************************



void MainWindow::on_sched_reg_button_clicked()
{
    DayKeeper.ActiveMode="REGULAR";
    ui->indicatorLabel->setText(DayKeeper.ActiveMode);
}

//****************************************************************

void MainWindow::on_sched_red_button_clicked()
{
    DayKeeper.ActiveMode="REDUCED";
    ui->indicatorLabel->setText(DayKeeper.ActiveMode);
}

//****************************************************************

void MainWindow::on_erase_button_clicked()
{
    DayKeeper.ActiveMode="ERASING";
    ui->indicatorLabel->setText(DayKeeper.ActiveMode);
}


