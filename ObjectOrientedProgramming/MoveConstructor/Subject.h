//
// Created by Sebastian on 19/11/2020.
//

#ifndef MOVECONSTRUCTOR_SUBJECT_H
#define MOVECONSTRUCTOR_SUBJECT_H

#include <string>

class Subject {
private:
    std::string *name;
    double *grade;
public:
    //Constructor
    Subject (std::string nameValue, double gradeValue);
    //Copy Constructor
    Subject (const Subject &src);
    //Move Constructor
    Subject (Subject &&src);
    //Destructor
    ~Subject ();
    //Functions
    void displayValues();
    //Getters
    std::string getName () { return *name; };
    double getGrade () { return *grade; };
    //Setters
    void setName (std::string nameValue) { *name = nameValue; };
    void setGrade (double gradeValue) { *grade = gradeValue; };
};


#endif //MOVECONSTRUCTOR_SUBJECT_H
