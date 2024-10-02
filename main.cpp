#include <iostream>
#include <cmath>
#include "Course.h"
using namespace std;
int course_count;
int courses_num;
double credits;

void make_courses(Course course_array[]){
  for(int i=0; i<courses_num; ++i){
    ++course_count;
    string course_name;
    char course_grade;
    cout << "Enter the name of course " << course_count << ": " << endl;
    cin >> course_name;
    course_array[i].set_name(course_name);
    cout << "Enter the grade you got: (Use uppercase letters) " << endl;
    cin >> course_grade;
    while (!(course_grade == 'A' || course_grade == 'B'|| course_grade == 'C'|| course_grade == 'D'|| course_grade == 'E'|| course_grade == 'F')){
      cout << "Invalid Input, try again. " << endl;
      cin >> course_grade;
    }
    course_array[i].set_grade(course_grade);
  }
}

void calculate(Course course_array[]){
  for(int i=0; i<courses_num; ++i){
    if (course_array[i].get_grade()=='A'){
      credits+=4;
      course_array[i].grade_credits=4.0;
    }
    else if (course_array[i].get_grade()=='B'){
      credits+=3;
      course_array[i].grade_credits=3.0;
    }
    else if (course_array[i].get_grade()=='C'){
      credits+=2;
      course_array[i].grade_credits=2.0;
    }
    else if (course_array[i].get_grade()=='D'){
      credits+=1;
      course_array[i].grade_credits=1.0;
    }
    else if (course_array[i].get_grade()=='F'){
      credits+=0;
      course_array[i].grade_credits=0.0;
    }
}
}


void end(Course course_array[]){
  cout << "Here are your course(s): " << endl;
  for(int i=0; i<courses_num; ++i){
    cout << "-----------------------" << endl;
    cout << "Course Name: " << course_array[i].get_name() << endl;
    cout << "Course Grade: " << course_array[i].get_grade() << endl;
    cout << "Course Credits:  " << course_array[i].grade_credits << endl;
    cout << "-----------------------" << endl;
  }
  double GPA = credits/courses_num;
  cout << "Your GPA is: " << GPA << endl;
  cout << "-----------------------" << endl;

}

 
int main() {
  cout << "How many courses have you taken? " << endl;
  cin >> courses_num;
  const int courses_num_const = courses_num;
  Course course_array[courses_num_const];
  make_courses(course_array);
  calculate(course_array);
  end(course_array);
}

