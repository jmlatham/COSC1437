#ifndef STUDENT_H
#define STUDENT_H
#include <string>

class Student
{
  private:
    static const int NUMBER_OF_STUDENTS = 3;

    struct studentContact{
      std::string email;
      std::string address;
      std::string phone;
    }; 
    
    struct studentName{
      std::string first;
      std::string middle;
      std::string last;
    };
    
    struct studentRecord{
      int id;
      double gpa;
      studentName name;
      studentContact contactInfo;
    };
    
    static const std::string MENU_ITEMS[];

    Student();
    int getMenuSelection();
    void useMenuSelection(int selection, studentRecord students[]);
    int getStudentId();
    bool studentIdIsValid(int studentId, studentRecord students[]);
    void printRecord(studentRecord record);
    void printRecords(studentRecord records[]);
    void hardcodeStudents(studentRecord students[]);
    void changeRecordInfo(studentRecord& student);
    void addNewStudent();
    void removeStudent(int studentId);
    void updateStudent(int studentId, studentRecord students[]);
    void addStudentToCourse(int studentId, int courseId);
    void getCourseAverage(int courseId);
    void storeStudentAssignmentGrades(int studentId);
public:
    void runStudentCode();
};

#endif