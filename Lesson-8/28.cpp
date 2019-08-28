#include <iostream>
#include <cstdio>

const int CLASS_SIZE = 6;


class Student {
public:
    int studentID;
    int grades[10];

    void setStudentID(int inID) {
        studentID = inID;
    }

    int getStudentID() {
        return studentID;
    }

    void setGrade(int gradeNumber, int gradeIn) {
        grades[gradeNumber] = gradeIn;
    }

    int *getGrades() {
        return grades;
    }

    int getGrade(int gradeNumber) {
        return grades[gradeNumber];
    }

    void printGrades() {
        std::cout << "StudentID = " << studentID << "\n";
        for (int i = 0; i < 10; i++) {
            std::cout << "\t" << grades[i] << "\n";
        }
    }


    int sortGrades() {
        //sort ascending
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 9 - i; j++) {
                if (grades[j] > grades[j + 1]) {
                    int temp;
                    temp = grades[j];
                    grades[j] = grades[j + 1];
                    grades[j + 1] = temp;
                }
            }
        }
    }

    int getMin() {
        sortGrades();
        //std::cout<<"in class min"<<grades[0];
        return grades[9];
    }

    int getMax() {
        sortGrades();
        //std::cout<<"in class max"<<grades[9];
        return grades[0];
    }

    float getAverageGrade() {
        float sum = 0;
        for (int i = 0; i < 10; i++) {
            sum = sum + grades[i];
        }
        return sum / 10;
    }
};

//********************
class CourseEnrollment {
public:
    Student students[6];
    int courseMinGrade;
    int courseMaxGrade;
    float courseAvgGrade;
    int grades[60];

    void addStudents(Student *studentIn) {
        for (int i = 0; i < 6; i++) {
            students[i] = studentIn[i];
        }
    }

    int *getAllGrades() {
        //int grades[60];
        int k = 0;
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 10; j++) {
                grades[k] = students[i].getGrade(j);
                k = k + 1;
            }
        }
        return grades;
    }

    int *sortAllGrades() {
        for (int i = 0; i < 60; i++) {
            for (int j = 0; j < 59 - i; j++) {
                if (grades[j] > grades[j + 1]) {
                    int temp;
                    temp = grades[j];
                    grades[j] = grades[j + 1];
                    grades[j + 1] = temp;
                }
            }
        }
        return grades;
    }


    int getMinGrade() {
        sortAllGrades();
        return grades[0];
    }

    int getMaxGrade() {
        sortAllGrades();
        return grades[59];
    }

    float getAvgGrade() {
        int sum = 0;
        for (int i = 0; i < 60; i++) {
            sum = sum + grades[i];
        }
        return sum / 60;
    }

    void printAllGrades() {
        for (int i = 0; i < 60; i++) {
            std::cout << "grade=" << grades[i] << "\n";
        }
    }


};


int main_28() {
    Student studentsInClass[CLASS_SIZE];
    CourseEnrollment course1;

    static int studentNumber = 1000;
    int grade;
    int userInput;

    //asign student id to each student
    for (int i = 0; i < CLASS_SIZE; i++) {
        studentsInClass[i].setStudentID(studentNumber);
        studentNumber++;
    }

    //for(int i = 0; i < CLASS_SIZE; i++)
    //{
    //    std::cout<<"student #"<<i<<" has studentID #"<<studentsInClass[i].getStudentID()<<"\n\n";
    //}

    //assign grades to all students
    for (int i = 0; i < CLASS_SIZE; i++) {
        for (int j = 0; j < 10; j++) {
            scanf("%d", &grade);
            studentsInClass[i].setGrade(j, grade);
        }
    }

    //print out all students grades
    for (int i = 0; i < CLASS_SIZE; i++) {
        studentsInClass[i].printGrades();
        std::cout << "\nMin grade = " << studentsInClass[i].getMin() << "\n";
        std::cout << "Max grade = " << studentsInClass[i].getMax() << "\n";
        std::cout << "Grade Average = " << studentsInClass[i].getAverageGrade() << "\n\n";
    }

    course1.addStudents(studentsInClass);

    int *allGrades;
    allGrades = course1.getAllGrades();
    allGrades = course1.sortAllGrades();
    std::cout << "ALLGRADES\n";
    std::cout << "Lowest grade for entire course = " << course1.getMinGrade() << "\n";
    std::cout << "Highest grade for entire course = " << course1.getMaxGrade() << "\n";
    std::cout << "Avg grade for entire course = " << course1.getAvgGrade() << "\n";
    return 0;
}
