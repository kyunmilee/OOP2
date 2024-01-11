#include <string>
#include "Name.h"

#ifndef STUDENT_H
#define STUDENT_H

class Student {
public:
	Student(Name&, std::string, std::string);
	~Student();

	Student& setName(Name&);
	Student& setRegistrationNumber(std::string);
	Student& setEmail(std::string);

	Name getName() const;
	std::string getRegistrationNumber() const;
	std::string getEmail() const;
	virtual std::string toString() const;
	static unsigned int getCount();
private:
	Name studentName;
	std::string registrationNumber;
	std::string email;
	static unsigned int count;
};

#endif