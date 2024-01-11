#include <string>
#ifndef TIME_H
#define TIME_H

class Time {
public:
    void setTime(int, int, int);
    std::string toUniversalString() const;
    std::string toStandatdString() const;

private:
    unsigned int hour{0};
    unsigned int minute{0};
    unsigned int second{0};
};

#endif