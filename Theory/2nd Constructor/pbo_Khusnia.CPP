#include<iostream>
#include<iomanip>
#include<conio.h>

using namespace std;

class Time
{
    private :
        int hour;
        int minute;
        int second;
    public :
        //constructor with default value 0
        Time(int h = 0, int m  = 0, int s = 0);
        //setter function
        void setTime(int h, int m, int s);
        //print description of object in hh:mm:ss
        void print();
        //compare two time object
        bool equals(Time);
        //add two time object
        Time add(Time);
};

Time :: Time(int h, int m, int s)
{
    hour = h;
    minute = m;
    second = s;
}

void Time :: setTime(int h, int m, int s)
{
    while(s>=60)
    {
        s-=60;
        m++;
    }
    second = s;
    while(m>=60)
    {
        m-=60;
        h++;
    }
    minute = m;
    hour = h;
}

void Time :: print()
{
    cout << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << minute << ":" << setw(2) << setfill('0') << second << "\n";
}

bool Time :: equals(Time otherTime)
{
    if(hour == otherTime.hour && minute == otherTime.minute && second == otherTime.second)
        return true;
    else
        return false;
}

Time Time :: add(Time otherTime)
{
	Time temp;
	temp.hour = hour + otherTime.hour;
	temp.minute = minute + otherTime.minute; 
	temp.second = second + otherTime.second;
	return temp; 
}

int main()
{
    Time t1(12, 28, 34);
    t1.print();  // 12:28:34
    Time t2;  //object created with default value
    t2.print();  // 00:00:00
    t2.setTime(11, 85, 214); //set the new time in object
    t2.print();  // 12:28:34
    if(t1.equals(t2))
        cout << "Two objects are equals\n";
    else
        cout << "Two objects are not equals\n";
        
    Time t3(13, 01, 00);
    t3.print(); // 13:01:00
    Time t4 = t1.add(t3); // add object t1 and t3
    t4.print(); // 25:29:34
    getch();
}
