
#include <iostream>
#include <iomanip>

using namespace std;

const int ROW_COUNT = 13;
const int SEAT_COUNT = 6;
const int FIRST_CLASS_START = 1;
const int FIRST_CLASS_STOP = 2;
const int BUSINESS_CLASS_START = 3;
const int BUSINESS_CLASS_STOP = 7;
const int ECONOMY_CLASS_START = 8;
const int ECONOMY_CLASS_STOP = 13;

void printSeatingPlan(char assignArray[ROW_COUNT][SEAT_COUNT], char letterArray[], int spacesCount);
void initializeLetterArray(char letterArray[]);
void initializeSeatingPlan(char assignArray[ROW_COUNT][SEAT_COUNT]);
string getMenuOption();
string getSpaces(int);
void assignDesiredSeat(char assignArray[ROW_COUNT][SEAT_COUNT], char letterArray[]);
string assignSeat(int, char, char assignArray[ROW_COUNT][SEAT_COUNT], char letterArray[]);
void displayRowOptions(int startRow, int stopRow, char assignArray[ROW_COUNT][SEAT_COUNT]);
bool rowIsGood(int selectedRow, int startRow, int stopRow);
int getRow(int seatClass, char assignArray[ROW_COUNT][SEAT_COUNT]);
void displaySeatMenu(char assignArray[ROW_COUNT][SEAT_COUNT], char letterArray[], int selectedRow);
void displaySeatAssignment(string assignedSeat);
char getSeatFromIndex(int index, char letterArray[]);
int getSeatIndex(char seat, char letterArray[]);
bool rowIsFull(char assignArray[ROW_COUNT][SEAT_COUNT], int row);
bool classIsFull(char assignArray[ROW_COUNT][SEAT_COUNT], int startRowIndex, int stopRowIndex);
void printUsedRows(char assignArray[ROW_COUNT][SEAT_COUNT]);


int main() {
  int rowNumbers[ROW_COUNT];
  int spacesCount = 5;
  char seatAssignments[ROW_COUNT][SEAT_COUNT];
  char seatLetters[SEAT_COUNT];
  bool repeat = true;
  initializeLetterArray(seatLetters);
  initializeSeatingPlan(seatAssignments);
  do{
    string menuOption = getMenuOption();
    if(menuOption[0] == 'Y' || menuOption[0] == 'y'){
      assignDesiredSeat(seatAssignments, seatLetters);
    } 
    /*else if(menuOption[0] == 'S' || menuOption[0] == 's'){
      printSeatingPlan(seatAssignments, seatLetters, spacesCount);
    }
    */ 

    else {
      repeat = false;
    }
  } while(repeat);

  printUsedRows(seatAssignments);
  
  return 0;
}

void printUsedRows(char assignArray[ROW_COUNT][SEAT_COUNT]){
  bool atLeastOneSeatTaken = false;
  for(int row=0; row<ROW_COUNT; row++){
    atLeastOneSeatTaken = false;
    for(int seat=0; seat<SEAT_COUNT; seat++){
      if(assignArray[row][seat] == 'X'){
        atLeastOneSeatTaken = true;
        break;
      }
    }
    if(atLeastOneSeatTaken){
      cout << "\nRow " << to_string(row+1);
      for(int seat=0; seat<SEAT_COUNT; seat++){
        cout << " " << assignArray[row][seat];
      }
      cout << endl;
    }
  }
}

void initializeLetterArray(char letterArray[]){
  for(int seat=0; seat<SEAT_COUNT; seat++){
      switch(seat){
        case 1:
          letterArray[seat] = 'B';
        break;
        case 2:
          letterArray[seat] = 'C';
        break;
        case 3:
          letterArray[seat] = 'D';
        break;
        case 4:
          letterArray[seat] = 'E';
        break;
        case 5:
          letterArray[seat] = 'F';
        break;
        default:
          letterArray[seat] = 'A';
      }      
  }
}

void initializeSeatingPlan(char assignArray[ROW_COUNT][SEAT_COUNT]){
  for(int i=0; i<ROW_COUNT; i++){
    for(int j=0; j<SEAT_COUNT; j++){
      assignArray[i][j] = '*';
    }
  }
}

void printSeatingPlan(char assignArray[ROW_COUNT][SEAT_COUNT], char letterArray[], int spacesCount){

  cout << "\n      " << getSpaces(spacesCount);
  for(int i=0; i<SEAT_COUNT; i++){
    cout << letterArray[i] << getSpaces(spacesCount);
  }
  cout << "\n";
  for(int i=0; i<ROW_COUNT;i++){
    cout << "Row " << to_string(i+1) << getSpaces(spacesCount);
    if(i<9){
      cout << " ";
    }
    for(int j=0; j<SEAT_COUNT; j++){
      cout << assignArray[i][j] << getSpaces(spacesCount);
    }
    cout << endl;
  }

}

string getSpaces(int count){
  string spaces = "";
  for(int i=0; i<count; i++){
    spaces += " ";
  }
  return spaces;
}

string getMenuOption(){
  string menuOption;
  cout << "\nReserve a seat (Y/y)";
  cout << "\nQuit Program (N/n)";
  cout << "\n \tChoose an option: ";
  cin >> menuOption;
  
  return menuOption;
}

void assignDesiredSeat(char assignArray[ROW_COUNT][SEAT_COUNT], char letterArray[]){
  string seatClass = "";
  int seatClassInt = 0;
  bool badData = false;
  int selectedRow = -1;
  char selectedSeat = ' ';
  string assignedSeat = "";
  do{
    cout << "\nSelect class:";
    if(!classIsFull(assignArray, FIRST_CLASS_START, FIRST_CLASS_STOP)){
      cout << "\n\t1. First Class (F/f)";
    }
    if(!classIsFull(assignArray, BUSINESS_CLASS_START, BUSINESS_CLASS_STOP)){
      cout << "\n\t2. Business Class (B/b)";
    }
    if(!classIsFull(assignArray, ECONOMY_CLASS_START, ECONOMY_CLASS_STOP)){
      cout << "\n\t3. Economy Class (E/e) \n: ";
    }
    cin >> seatClass;
    if(seatClass[0] == 'F' || seatClass[0] == 'f'){
      seatClassInt = 1;
    } else if(seatClass[0] == 'B' || seatClass[0] == 'b'){
      seatClassInt = 2;
    } else if(seatClass[0] == 'E' || seatClass[0] == 'e'){
      seatClassInt = 3;
    }
    if(!cin || seatClassInt < 1 || seatClassInt > 3){
      badData = true;
      cin.clear();
      cin.ignore(100000,'\n');
      cout << "\nYou entered bad data. Please enter a 1, 2, or 3." << endl;
    } else {
      selectedRow = getRow(seatClassInt, assignArray);
      
      
      displaySeatMenu(assignArray, letterArray, selectedRow);
      cin >> selectedSeat;
      if(cin){
        assignedSeat = assignSeat(selectedRow, toupper(selectedSeat), assignArray, letterArray);
  
        
        displaySeatAssignment(assignedSeat);
      }
      badData = false;
      
    }
  } while(badData);
}

bool classIsFull(char assignArray[ROW_COUNT][SEAT_COUNT], int startRowIndex, int stopRowIndex){
  for(int row=startRowIndex; row<=stopRowIndex; row++){
    if(!rowIsFull(assignArray, row-1)){
      return false;
    }
  }
  return true;
}

void displaySeatMenu(char assignArray[ROW_COUNT][SEAT_COUNT], char letterArray[], int selectedRow){
  for(int seat=0; seat<SEAT_COUNT; seat++){
    if(assignArray[selectedRow-1][seat] == '*'){
      cout << "\nSelect Seat - " << getSeatFromIndex(seat, letterArray);
    }
  }
  cout << "\nNo Seat Available - 0";
  cout << endl;
}

string assignSeat(int selectedRow, char selectedSeat, char assignArray[ROW_COUNT][SEAT_COUNT], char letterArray[]){
  string assignedSeat = "seat";
  int seatIndex = getSeatIndex(selectedSeat, letterArray);
  if(seatIndex < 0){
    assignedSeat = "That seat is not available. Try again.";
  } else {
    assignedSeat = to_string(selectedRow) + "-" + selectedSeat;
    assignArray[selectedRow-1][seatIndex] = 'X';
  }
  return assignedSeat;
}

void displaySeatAssignment(string assignedSeat){
  cout << "\n YOUR ASSIGNED SEAT IS:\t" << assignedSeat << endl;
}

int getRow(int seatClass, char assignArray[ROW_COUNT][SEAT_COUNT]){
  int selectedStart;
  int selectedStop;
  int rowSelected = 0;
  bool badData = false;
  do{
    switch(seatClass){
    case 1:
      selectedStart = FIRST_CLASS_START;
      selectedStop = FIRST_CLASS_STOP;
      break;
    case 2:
      selectedStart = BUSINESS_CLASS_START;
      selectedStop = BUSINESS_CLASS_STOP;
      break;
    case 3:
      selectedStart = ECONOMY_CLASS_START;
      selectedStop = ECONOMY_CLASS_STOP;
      break;
    default:
      selectedStart = 0;
      selectedStop = 0;
  }
  displayRowOptions(selectedStart, selectedStop, assignArray);
  cin >> rowSelected;    
    if(!cin || !rowIsGood(rowSelected, selectedStart, selectedStop)){
      badData = true;
      cin.clear();
      cin.ignore(100000,'\n');
      cout << "\nYou entered bad data. Please enter an integer representing the row." << endl;
    } else {
      badData = false;
    }
  } while(badData);
  
  return rowSelected;
}

void displayRowOptions(int startRow, int stopRow, char assignArray[ROW_COUNT][SEAT_COUNT]){
  bool skipRow = true;
  cout << "\nChoose a row:";
  for(int row = startRow; row <= stopRow; row++){
    if(!rowIsFull(assignArray, row-1)){
      cout << "\n\tRow " << to_string(row);
    }
  }
  cout << endl;
}

bool rowIsFull(char assignArray[ROW_COUNT][SEAT_COUNT], int row){
  for(int seat = 0; seat < SEAT_COUNT; seat++){
    if(assignArray[row][seat] == '*'){
      return false;
    }
  }
  return true;
}

bool rowIsGood(int selectedRow, int startRow, int stopRow){
  return (selectedRow >= startRow && selectedRow <= stopRow);
}

char getSeatFromIndex(int index, char letterArray[]){
  return letterArray[index];
}

int getSeatIndex(char seat, char letterArray[]){
  for(int seatIndex=0; seatIndex<SEAT_COUNT; seatIndex++){
    if(letterArray[seatIndex] == seat){
      return seatIndex;
    }
  }
  return -1;
}

/*
#include <iostream>
#include <iomanip>

using namespace std;

const int ROW_COUNT = 13;
const int SEAT_COUNT = 6;
const int FIRST_CLASS_START = 1;
const int FIRST_CLASS_STOP = 2;
const int BUSINESS_CLASS_START = 3;
const int BUSINESS_CLASS_STOP = 7;
const int ECONOMY_CLASS_START = 8;
const int ECONOMY_CLASS_STOP = 13;

void printSeatingPlan(char assignArray[ROW_COUNT][SEAT_COUNT], char letterArray[], int spacesCount);
void initializeLetterArray(char letterArray[]);
void initializeSeatingPlan(char assignArray[ROW_COUNT][SEAT_COUNT]);
string getMenuOption();
string getSpaces(int);
void assignDesiredSeat(char assignArray[ROW_COUNT][SEAT_COUNT], char letterArray[]);
string assignSeat(int, char, char assignArray[ROW_COUNT][SEAT_COUNT], char letterArray[]);
void displayRowOptions(int startRow, int stopRow, char assignArray[ROW_COUNT][SEAT_COUNT]);
bool rowIsGood(int selectedRow, int startRow, int stopRow);
int getRow(int seatClass, char assignArray[ROW_COUNT][SEAT_COUNT]);
void displaySeatMenu(char assignArray[ROW_COUNT][SEAT_COUNT], char letterArray[], int selectedRow);
void displaySeatAssignment(string assignedSeat);
char getSeatFromIndex(int index, char letterArray[]);
int getSeatIndex(char seat, char letterArray[]);
bool rowIsFull(char assignArray[ROW_COUNT][SEAT_COUNT], int row);
bool classIsFull(char assignArray[ROW_COUNT][SEAT_COUNT], int startRowIndex, int stopRowIndex);


int main() {
  int rowNumbers[ROW_COUNT];
  int spacesCount = 5;
  char seatAssignments[ROW_COUNT][SEAT_COUNT];
  char seatLetters[SEAT_COUNT];
  bool repeat = true;
  initializeLetterArray(seatLetters);
  initializeSeatingPlan(seatAssignments);
  do{
    string menuOption = getMenuOption();
    if(menuOption[0] == 'R' || menuOption[0] == 'r'){
      assignDesiredSeat(seatAssignments, seatLetters);
    } else if(menuOption[0] == 'S' || menuOption[0] == 's'){
      printSeatingPlan(seatAssignments, seatLetters, spacesCount);
    } else {
      repeat = false;
    }
  } while(repeat);
  
  return 0;
}

void initializeLetterArray(char letterArray[]){
  for(int seat=0; seat<SEAT_COUNT; seat++){
      switch(seat){
        case 1:
          letterArray[seat] = 'B';
        break;
        case 2:
          letterArray[seat] = 'C';
        break;
        case 3:
          letterArray[seat] = 'D';
        break;
        case 4:
          letterArray[seat] = 'E';
        break;
        case 5:
          letterArray[seat] = 'F';
        break;
        default:
          letterArray[seat] = 'A';
      }      
  }
}

void initializeSeatingPlan(char assignArray[ROW_COUNT][SEAT_COUNT]){
  for(int i=0; i<ROW_COUNT; i++){
    for(int j=0; j<SEAT_COUNT; j++){
      assignArray[i][j] = '*';
    }
  }
}

void printSeatingPlan(char assignArray[ROW_COUNT][SEAT_COUNT], char letterArray[], int spacesCount){

  cout << "\n      " << getSpaces(spacesCount);
  for(int i=0; i<SEAT_COUNT; i++){
    cout << letterArray[i] << getSpaces(spacesCount);
  }
  cout << "\n";
  for(int i=0; i<ROW_COUNT;i++){
    cout << "Row " << to_string(i+1) << getSpaces(spacesCount);
    if(i<9){
      cout << " ";
    }
    for(int j=0; j<SEAT_COUNT; j++){
      cout << assignArray[i][j] << getSpaces(spacesCount);
    }
    cout << endl;
  }

}

string getSpaces(int count){
  string spaces = "";
  for(int i=0; i<count; i++){
    spaces += " ";
  }
  return spaces;
}

string getMenuOption(){
  string menuOption;
  cout << "\nReserve a seat (R/r)";
  cout << "\nShow available seats (S/s)";
  cout << "\nQuit Program (Q/q)";
  cout << "\n \tChoose an option: ";
  cin >> menuOption;
  
  return menuOption;
}

void assignDesiredSeat(char assignArray[ROW_COUNT][SEAT_COUNT], char letterArray[]){
  int seatClass = 0;
  bool badData = false;
  int selectedRow = -1;
  char selectedSeat = ' ';
  string assignedSeat = "";
  do{
    cout << "\nSelect class:";
    if(!classIsFull(assignArray, FIRST_CLASS_START, FIRST_CLASS_STOP)){
      cout << "\n\t1. First Class";
    }
    if(!classIsFull(assignArray, BUSINESS_CLASS_START, BUSINESS_CLASS_STOP)){
      cout << "\n\t2. Business Class";
    }
    if(!classIsFull(assignArray, ECONOMY_CLASS_START, ECONOMY_CLASS_STOP)){
      cout << "\n\t3. Economy Class \n: ";
    }
    cin >> seatClass;
    
    if(!cin || seatClass < 1 || seatClass > 3){
      badData = true;
      cin.clear();
      cin.ignore(100000,'\n');
      cout << "\nYou entered bad data. Please enter a 1, 2, or 3." << endl;
    } else {
      selectedRow = getRow(seatClass, assignArray);
      
      
      displaySeatMenu(assignArray, letterArray, selectedRow);
      cin >> selectedSeat;
      if(cin){
        assignedSeat = assignSeat(selectedRow, toupper(selectedSeat), assignArray, letterArray);
  
        
        displaySeatAssignment(assignedSeat);
      }
      badData = false;
      
    }
  } while(badData);
}

bool classIsFull(char assignArray[ROW_COUNT][SEAT_COUNT], int startRowIndex, int stopRowIndex){
  for(int row=startRowIndex; row<=stopRowIndex; row++){
    if(!rowIsFull(assignArray, row-1)){
      return false;
    }
  }
  return true;
}

void displaySeatMenu(char assignArray[ROW_COUNT][SEAT_COUNT], char letterArray[], int selectedRow){
  for(int seat=0; seat<SEAT_COUNT; seat++){
    if(assignArray[selectedRow-1][seat] == '*'){
      cout << "\nSelect Seat - " << getSeatFromIndex(seat, letterArray);
    }
  }
  cout << "\nNo Seat Available - 0";
  cout << endl;
}

string assignSeat(int selectedRow, char selectedSeat, char assignArray[ROW_COUNT][SEAT_COUNT], char letterArray[]){
  string assignedSeat = "seat";
  int seatIndex = getSeatIndex(selectedSeat, letterArray);
  if(seatIndex < 0){
    assignedSeat = "That seat is not available. Try again.";
  } else {
    assignedSeat = to_string(selectedRow) + "-" + selectedSeat;
    assignArray[selectedRow-1][seatIndex] = 'X';
  }
  return assignedSeat;
}

void displaySeatAssignment(string assignedSeat){
  cout << "\n YOUR ASSIGNED SEAT IS:\t" << assignedSeat << endl;
}

int getRow(int seatClass, char assignArray[ROW_COUNT][SEAT_COUNT]){
  int selectedStart;
  int selectedStop;
  int rowSelected = 0;
  bool badData = false;
  do{
    switch(seatClass){
    case 1:
      selectedStart = FIRST_CLASS_START;
      selectedStop = FIRST_CLASS_STOP;
      break;
    case 2:
      selectedStart = BUSINESS_CLASS_START;
      selectedStop = BUSINESS_CLASS_STOP;
      break;
    case 3:
      selectedStart = ECONOMY_CLASS_START;
      selectedStop = ECONOMY_CLASS_STOP;
      break;
    default:
      selectedStart = 0;
      selectedStop = 0;
  }
  displayRowOptions(selectedStart, selectedStop, assignArray);
  cin >> rowSelected;    
    if(!cin || !rowIsGood(rowSelected, selectedStart, selectedStop)){
      badData = true;
      cin.clear();
      cin.ignore(100000,'\n');
      cout << "\nYou entered bad data. Please enter an integer representing the row." << endl;
    } else {
      badData = false;
    }
  } while(badData);
  
  return rowSelected;
}

void displayRowOptions(int startRow, int stopRow, char assignArray[ROW_COUNT][SEAT_COUNT]){
  bool skipRow = true;
  cout << "\nChoose a row:";
  for(int row = startRow; row <= stopRow; row++){
    if(!rowIsFull(assignArray, row-1)){
      cout << "\n\tRow " << to_string(row);
    }
  }
  cout << endl;
}

bool rowIsFull(char assignArray[ROW_COUNT][SEAT_COUNT], int row){
  for(int seat = 0; seat < SEAT_COUNT; seat++){
    if(assignArray[row][seat] == '*'){
      return false;
    }
  }
  return true;
}

bool rowIsGood(int selectedRow, int startRow, int stopRow){
  return (selectedRow >= startRow && selectedRow <= stopRow);
}

char getSeatFromIndex(int index, char letterArray[]){
  return letterArray[index];
}

int getSeatIndex(char seat, char letterArray[]){
  for(int seatIndex=0; seatIndex<SEAT_COUNT; seatIndex++){
    if(letterArray[seatIndex] == seat){
      return seatIndex;
    }
  }
  return -1;
}


/*
Instructions
(Airplane Seating Assignment) | Write a program that can be used to assign seats for a commercial airplane. The airplane has 13 rows, with six seats in each row. Rows 1 and 2 are first class, rows 3 through 7 are business class, and rows 8 through 13 are economy class.

Use two parallel arrays:

a one-dimensional array to store the row number of the seats (Row #)
a two-dimensional array of 13 rows and 6 columns to store the seat assignments (*) and seat letters (A-F)
Your program must prompt the user to enter the following information:

Reserve a seat (Yes (Y/y) or No (N/n))
Assign ticket type (first class (F/f), business class (B/b), or economy class (E/e))
Select desired seat (1-13 and A-F)
Your program must contain at least the following functions:

a function to initialize the seat plan.
a function to show the seat assignments.
a function to show the menu to assign a seat.
a function to assign and select your desired seat.
a function for each ticket type that determines if a seat is occupied and if that class is full .
Output the seating plan in the following form:

Seating Plan
Here, * indicates that the seat is available; X indicates that the seat is occupied. Make this a menu-driven program; show the user’s choices and allow the user to make the appropriate choices.

Grading
When you have completed your program, click the Submit button to record your score.
*/