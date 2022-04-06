#include <iostream>
#include <iomanip>
#include <string>
#include "student.h"

// In one of the implementation files
//const string A::RECTANGLE = "rectangle";
const std::string Student::MENU_ITEMS[] = {
      "Add New Student",
      "Remove a Student",
      "Update a Student",
      "Add a Student to a Course",
      "Get Average Grade for a Course",
      "Store Student Assignments and Grades",
      "Quit Application"
    };

/* student structure code */
Student::Student(){
  
}
int Student::getMenuSelection(){
  int menuSelection = -1;
  std::cout << "\n\n***** STUDENT MENU *****";
  int menuSize = sizeof(MENU_ITEMS)/sizeof(MENU_ITEMS[0]);
  for (int itemIndex=0; itemIndex < menuSize; itemIndex++){
    std::cout << "\n\t" << std::to_string(itemIndex+1) << ". " << MENU_ITEMS[itemIndex];
  }
  std::cout << "\n************************";
  std::cout << "\n\n\n Enter Your selection: ";

  std::cin >> menuSelection;
  
  while(!std::cin || menuSelection < 1 || menuSelection > menuSize){
    std::cout << "\nThere was a problem with your selection. Try again: ";
    std::cin.clear();
    std::cin.ignore(100000,'\n');
    std::cin >> menuSelection;
  }
  
  return menuSelection;
}
  
void Student::useMenuSelection(int selection, studentRecord students[]){
  int studentId;
  bool validId;
  std::string validResponse;
  switch(selection){
    case 1:
      addNewStudent();
      break;
    case 2:
      removeStudent(getStudentId());
      break;
    case 3:
      updateStudent(getStudentId(), students);
      break;
    case 4:
      addStudentToCourse(getStudentId(), 0);
      break;
    case 5:
      getCourseAverage(0);
      break;
    case 6:
      storeStudentAssignmentGrades(getStudentId());
      break;
    default:
      std::cout << "Quit!!";
  }
}

int Student::getStudentId(){
  std::cout << "\nEnter student id: ";
  int response;
  std::cin >> response;
  return response;
}
bool Student::studentIdIsValid(int studentId, studentRecord students[]){
  bool validId = false;
  for(int recordIndex=0; recordIndex < NUMBER_OF_STUDENTS;recordIndex++){
    if(students[recordIndex].id == studentId){
      validId = true;
      break;
    }
  }
  return validId;
}

void Student::printRecord(studentRecord record){
  std::cout << "\n";
  std::cout << "\t" << record.name.last << ", " << record.name.first << " " << record.name.middle;
  std::cout << "\n\t\tID:  " << record.id;
  std::cout << "\n\t\tGPA: " << std::fixed << std::setprecision(1) << record.gpa;
  std::cout << "\n\t\tContact Information: ";
  std::cout << "\n\t\t\tEmail: " << record.contactInfo.email;
  std::cout << "\n\t\t\tPhone: " << record.contactInfo.phone;
  std::cout << "\n\t\t\tAddress: " << record.contactInfo.address;
  std::cout << std::endl;
}
void Student::printRecords(studentRecord records[]){
  std::cout << "\nStudent Records:";
  for(int recordIndex=0; recordIndex<NUMBER_OF_STUDENTS; recordIndex++){
    printRecord(records[recordIndex]);
  }
}

void Student::hardcodeStudents(studentRecord students[]){
  students[0].id=1;
  students[0].gpa=4.0;
  students[0].name.first="Will";
  students[0].name.middle="Anita";
  students[0].name.last="Smith";
  students[0].contactInfo.email="wSmith@Oscars.com";
  students[0].contactInfo.address="123 Main, Kilgore, TX 75662";
  students[0].contactInfo.phone = "555-555-5555";
  
  students[1].id=2;
  students[1].gpa=3.5;
  students[1].name.first="Chris";
  students[1].name.middle="the";
  students[1].name.last="Rock";
  students[1].contactInfo.email="Chris@theRock.com";
  students[1].contactInfo.address="321 Main, Kilgore, TX 75662";
  students[1].contactInfo.phone = "555-555-5555";
  
  students[2].id=3;
  students[2].gpa=3.0;
  students[2].name.first="Jada";
  students[2].name.middle="Pinkett";
  students[2].name.last="Smith";
  students[2].contactInfo.email="jSmith@Offended.com";
  students[2].contactInfo.address="123 Main, Kilgore, TX 75662";
  students[2].contactInfo.phone = "555-555-5555";
}

void Student::changeRecordInfo(studentRecord& student){
  student.contactInfo.address = "5467 FM 3456 Longview, TX 75603";
}

void Student::addNewStudent(){
  std::cout << "Add a New Student";
}
void Student::removeStudent(int studentId){
  std::cout << "Remove a Student: " << std::to_string(studentId);
}
void Student::updateStudent(int studentId, studentRecord students[]){
  bool validId = false;
  std::string validResponse;
  //studentId = getStudentId();
  validId = studentIdIsValid(studentId, students);
  validResponse = (validId)?"Valid":"InValid";
  std::cout << "studentId: " << studentId << " " <<  validResponse << std::endl;
}
void Student::addStudentToCourse(int studentId, int courseId){
  std::cout << "Add a Student to a Course";
}
void Student::getCourseAverage(int courseId){
  std::cout << "Get Average Grade for a Course";
}
void Student::storeStudentAssignmentGrades(int studentId){
  std::cout << "Store Student Assignments and Grades";
}

/**/

void Student::runStudentCode(){
  /****************/
  /* Student Code */
  /****************/
  
  studentName name1 = {"first", "middle", "last"};
  studentName name2 = {"fourth", "fifth", "sixth"};
  std::cout << "\n" << name1.first << " " << name1.middle << " " << name1.last;
  std::cout << "\n" << name2.first << " " << name2.middle << " " << name2.last;
  name1 = name2;
  std::cout << "\n" << name1.first << " " << name1.middle << " " << name1.last;
  std::cout << "\n" << name2.first << " " << name2.middle << " " << name2.last;
  /****************/
  // Build  student records
  /****************/
  /* Student Code */
  /****************/
  
    studentRecord students[NUMBER_OF_STUDENTS];
    hardcodeStudents(students);
  
    int menuSelection;
  
  do{
   
    menuSelection = getMenuSelection();
    useMenuSelection(menuSelection, students);
    
    // Display the student records
    //     printRecords(students);
    // Change and display the student record
    //     changeRecordInfo(students[0]);
    //     printRecord(students[0]);
    // Create an array of student records
    // Create a menu for working with the records
    // Add the ability to add new students
    // Add the ability to remove students
    // Add the ability to update a student
    // Add the ability to add students to a course
    // Add the ability to average the students' grades in a course
    // Add the ability to store students' assignments and grades
    //////////////////////////////////////////////
      //menuSelection = getMenuSelection();
    } while (menuSelection != sizeof(MENU_ITEMS)/sizeof(MENU_ITEMS[0]));
    /****************/


  
}







