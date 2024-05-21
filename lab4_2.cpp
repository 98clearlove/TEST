#include <iostream>
using namespace std;

class Time {
public:
    Time(int h = 0, int m = 0, int s = 0) : hour(h), minute(m), second(s) { normalize(); }

    void normalize() {
        minute += second / 60;
        second %= 60;
        hour += minute / 60;
        minute %= 60;
        hour %= 24;
        while (second < 0) {
            minute--;
            second += 60;
        }
        while (minute < 0) {
            hour--;
            minute += 60;
        }
        while (hour < 0) {
            hour = 24 - abs(hour);
        }

    }

    friend istream& operator>>(istream& in, Time& t);
    friend ostream& operator<<(ostream& out, const Time& t);


    Time& operator+=(const Time& other) {
        hour += other.hour;
        minute += other.minute;
        second += other.second;
        normalize();
        return *this;
    }

    Time& operator-=(const Time& other) {
        hour -= other.hour;
        minute -= other.minute;
        second -= other.second;
        normalize();
        return *this;
    }

    Time& operator++() {
        ++second;
        normalize();
        return *this;
    }

    Time operator++(int) {
        Time temp = *this;
        ++*this;
        return temp;
    }

    Time& operator--() {
        --second;
        normalize();
        return *this;
    }

    Time operator--(int) {
        Time temp = *this;
        --*this;
        return temp;
    }
    
    bool operator > (Time t) {  //жиди>
        if (hour != t.hour)
            return hour > t.hour;
        if (minute != t.minute)
            return minute > t.minute;
        if (second != t.second)
            second > t.second;
    }

private:
    int hour, minute, second;
};

istream& operator>>(istream& in, Time& t) {
    in >> t.hour >> t.minute >> t.second;
    return in;
}

ostream& operator<<(ostream& out, const Time& t) {
    out << (t.hour < 10 ? "0" : "") << t.hour << ":"
        << (t.minute < 10 ? "0" : "") << t.minute << ":"
        << (t.second < 10 ? "0" : "") << t.second;
    return out;
}




int main() {
    Time time1, time2;
    cin >> time1 >> time2;

    cout << (time1 += (time2++)) << endl;
    cout << (time1 -= time2) << endl;
    cout << (++time2) << endl;
    cout << (time2 += (time1--)) << endl;
    cout << (--time1) << endl;
    cout << (time2 -= time1) << endl;

    return 0;
}
