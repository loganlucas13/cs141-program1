/**------------------------------------------
    Program 1: ASCII Flowers
    Prompt for the number of flower layers and display

    Course: CS 141, Fall 2023
    System: Linux_x86_64 and G++
    Author: Logan Lucas, George Maratos, and David Hayes
 ---------------------------------------------**/

#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  // display the prompt to the user
  cout << "Program 1: ASCII Flowers\n"
       << "Choose from the following options:\n"
       << "   1. Display the HELLO graphic\n"
       << "   2. Display The Flower\n"
       << "   3. Exit the program\n"
       << "Your choice -> ";

  // read in the user's choice
  int menu_option;
  cin >> menu_option;

  // handle option to quit
  if (menu_option == 3) {
    exit(0);
  }

  // handle the HELLO graphic choice
  if (menu_option == 1) {
    char frame;
    cout << "Enter your frame character: ";
    cin >> frame;
    // top border
    cout << endl;
    for (int i = 0; i < 2; i++) {
      cout << setfill(frame) << setw(36) << ' ' << endl;
    }
    // message
    cout << setfill(frame) << setw(3) << right << " "
         << "** ** ***** **    **    *****" << setfill(frame) << setw(3) << left
         << " " << endl
         << setfill(frame) << setw(3) << right << " "
         << "** ** ***** **    **    *****" << setfill(frame) << setw(3) << left
         << " " << endl
         << setfill(frame) << setw(3) << right << " "
         << "** ** **    **    **    ** **" << setfill(frame) << setw(3) << left
         << " " << endl
         << setfill(frame) << setw(3) << right << " "
         << "***** ***** **    **    ** **" << setfill(frame) << setw(3) << left
         << " " << endl
         << setfill(frame) << setw(3) << right << " "
         << "***** ***** **    **    ** **" << setfill(frame) << setw(3) << left
         << " " << endl
         << setfill(frame) << setw(3) << right << " "
         << "** ** **    **    **    ** **" << setfill(frame) << setw(3) << left
         << " " << endl
         << setfill(frame) << setw(3) << right << " "
         << "** ** ***** ***** ***** *****" << setfill(frame) << setw(3) << left
         << " " << endl
         << setfill(frame) << setw(3) << right << " "
         << "** ** ***** ***** ***** *****" << setfill(frame) << setw(3) << left
         << " " << endl
         << right;
    // bottom border
    for (int i = 0; i < 2; i++) {
      cout << setfill(frame) << setw(36) << " " << endl;
    }
  }

  // handle the floral pattern TODO for students
  if (menu_option == 2) {
    int sectionCount;
    int spaceCounter = 0;
    int stemCount;

    cout << "Enter number of sections: ";
    cin >> sectionCount;
    cout << endl;

    stemCount = sectionCount;
    for (int i = 1; i <= sectionCount; ++i) {
      cout << setfill(' ') << setw(sectionCount + 3) << "---" << endl;
      spaceCounter = 0;
      if (i != 1) { // excludes the first section
        // the following lines output the lines increasing in length
        for (int j = 3; j < (2 * i) + 1; j += 2) {
          if (j != 3) {
            spaceCounter += 1;
          }
          cout << setfill(' ') << setw(sectionCount - spaceCounter) << "{"
               << setw(j + 1) << setfill(':') << "}" << endl;
        }
      }
      // the next 3 lines output the middle line of each section
      cout << setfill(' ') << setw(sectionCount - (i - 1)) << "{"
           << setfill(':') << setw(i + 1) << "@" << setfill(':') << setw(i + 1)
           << "}" << endl;
      if (i != 1) {
        // the following lines output the lines decreasing in length
        for (int k = (2 * i) - 1; k >= 3; k -= 2) {
          if (k != (2 * i) - 1) {
            spaceCounter -= 1;
          }
          cout << setfill(' ') << setw(sectionCount - spaceCounter) << "{"
               << setw(k + 1) << setfill(':') << "}" << endl;
        }
      }
    }
    cout << setfill(' ') << setw(sectionCount + 3) << "---" << endl;
    // the following lines output the stem
    for (int l = 1; l <= sectionCount; ++l) {
      if (stemCount - 1 >= 0) {
        cout << setfill(' ') << setw(sectionCount + 3) << "|/" << endl;
        cout << setfill(' ') << setw(sectionCount + 2) << "|" << endl;
        stemCount -= 1;
      }
      if (stemCount - 1 >= 0) {
        cout << setfill(' ') << setw(sectionCount + 2) << "\\|" << endl;
        cout << setfill(' ') << setw(sectionCount + 2) << "|" << endl;
        stemCount -= 1;
      }
    }
  }
  return 0;
}