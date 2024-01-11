#ifndef HOURLYWORKER_H
#define HOURLYWORKER_H

#include "Employee.h"

class HourlyEmployee : public Employee {
public:
    HourlyEmployee(const std::string&, const std::string&, const std::string&,
        double wage, double hours);

    void setWage(double);
    double getWage() const;

    void setHours(double);
    double getHours() const;

    virtual double earnings() const override;
    virtual std::string toString() const override;

private:
    double wage;
    double hour;
};

#endif