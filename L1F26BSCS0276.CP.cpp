//TASK 01
// // Name: [Muhammah Ali Khan]
// Roll No: [L1F26BSCS0276]

#include <iostream>
using namespace std;

int main() {
   // Requirement 2: Print Hello World! on the first line
   cout << "Hello World!" << endl;

   // Requirement 3: Print three lines using only one cout statement and \n
   cout << "University of Central Punjab\nFaculty of Information Technology\nOrientation Day 2026\n";

   // Requirement 4: Print the line Welcome! using endl
   cout << "Welcome!" << endl;

   // Requirement 5: Print numbers and expressions, each on its own line
   cout << 2026 << endl;
   cout << 45 << endl;
   cout << 45 * 3 << endl;
   cout << 1000 + 500 - 250 << endl;

   // Requirement 6: Print Total fee: 54000 using one cout statement from 45000 + 9000
   cout << "Total fee: " << 45000 + 9000 << endl;

   return 0;
}
//Task 02
#include <iostream>
using namespace std;

int main() {
   // Corrected code for Part A
   cout << "Part A (corrected program):" << endl;
   cout << "Orientation Day" << endl;
   cout << "Total students: " << 450 << endl;
   cout << "Seats left: " << 500 - 450 << endl;
   cout << "Have a nice day" << endl;

   cout << endl; // Blank line

   // Part B output
   cout << "Part B:" << endl;

   // Wrong result before fix (prints 156 due to division coming first)
   cout << "Average: " << 60 + 70 + 80 / 3 << " (wrong, before the fix)" << endl;

   // Correct result after fix (prints 70 using brackets)
   cout << "Average: " << (60 + 70 + 80) / 3 << " (correct, after the fix)" << endl;

   // A syntax error is a rule breaking error caught by the compiler
   // A semantic error is a logic error that runs but gives the wrong answer
   // The compiler only catches syntax errors

   return 0;
}
//Task 03
#include <iostream>
using namespace std;
int main() 
{
   // Printing each expression using one cout statement
   cout << "Expression 1: " << 10 + 5 * 2 << endl;
   cout << "Expression 2: " << (10 + 5) * 2 << endl;
   cout << "Expression 3: " << 20 - 5 - 3 << endl;
   cout << "Expression 4: " << 100 / 7 << endl;
   cout << "Expression 5: " << 100 % 7 << endl;
   cout << "Expression 6 (Original): " << 2 * 3 + 8 / 4 - 1 << endl;

   // Requirement 5: Expression 6 with brackets to make the result 8
   cout << "Expression 6 (With brackets): " << 2 * (3 + 8 / 4 - 1) << endl;

   return 0;
}
Task 04
#include <iostream>
using namespace std;
int main() 
{
   // 1. Declare and initialize variables of suitable types
   int rollNo = 1045;
   int semester = 1;
   char section = 'B';
   float cgpa = 3.5;
   double totalFee = 45000;
   double feePaid = 20000;

   // 2. Display all the values with proper labels
   cout << "Roll No: " << rollNo << endl;
   cout << "Semester: " << semester << endl;
   cout << "Section: " << section << endl;
   cout << "CGPA: " << cgpa << endl;
   cout << "Total Fee: " << totalFee << endl;
   cout << "Fee Paid: " << feePaid << endl;

   // 3. Update semester and add second installment (5000) to feePaid
   semester = semester + 1;
   feePaid = feePaid + 5000;

   // Display updated semester and feePaid
   cout << "Semester: " << semester << endl;
   cout << "Fee Paid: " << feePaid << endl;

   // 4. Calculate and display remainingFee and percentage paid
   double remainingFee = totalFee - feePaid;
   double percentagePaid = (feePaid * 100) / totalFee;

   cout << "Remaining Fee: " << remainingFee << endl;
   cout << "Percentage Paid: " << percentagePaid << endl;

   return 0;
}
Task 05
#include <iostream>
using namespace std;

int main() {
   // Task 04 - Admission Form (Variables and Types)

   // 1. Declare and initialize variables of suitable types
   int rollNo = 1045;
   int semester = 1;
   char section = 'B';
   float cgpa = 3.5;
   double totalFee = 45000;
   double feePaid = 20000;

   // 2. Display all the values with proper labels
   cout << "Roll No: " << rollNo << endl;
   cout << "Semester: " << semester << endl;
   cout << "Section: " << section << endl;
   cout << "CGPA: " << cgpa << endl;
   cout << "Total Fee: " << totalFee << endl;
   cout << "Fee Paid: " << feePaid << endl;

   // 3. Update semester and add second installment (5000) to feePaid
   semester = semester + 1;
//    feePaid = feePaid + 5000;

   // Display updated semester and feePaid
   cout << "Semester: " << semester << endl;
   cout << "Fee Paid: " << feePaid << endl;

   // 4. Calculate and display remainingFee and percentage paid
   double remainingFee = totalFee - feePaid;
   double percentagePaid = (feePaid * 100) / totalFee;

   cout << "Remaining Fee: " << remainingFee << endl;
   cout << "Percentage Paid: " << percentagePaid << endl;

   return 0;
}



