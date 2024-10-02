#include <iostream>
#include <cmath>
using namespace std;

class Course{

    public:

    Course();

    string get_name();

    char get_grade();

    void set_name(string name);
    
    void set_grade(char grade);

    double grade_credits;

    private: 
        string name;
        char grade;
};