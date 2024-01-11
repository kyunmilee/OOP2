#include <string>
#include "Student.h"


#ifndef ALUMNI_H
#define ALUMNI_H
class Alumni: public Student {
public:
    Alumni(Name&, std::string, std::string, std::string);
    
    Alumni& setdegreeNumber(std::string);
    std::string getdegreeNumber() const;

    virtual std::string toString() const override;
private:
    std::string degreeNumber;
};

#endif