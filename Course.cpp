#include <iostream>
#include <cmath>
#include "Course.h"
using namespace std;

Course::Course(){};

string Course::get_name(){
    return name;
}

char Course::get_grade(){
    return grade;
}

void Course::set_name(string name_param){
    name=name_param;
}

void Course::set_grade(char grade_param){
    grade=grade_param;
}

