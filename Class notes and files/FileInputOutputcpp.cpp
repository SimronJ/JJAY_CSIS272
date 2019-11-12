#include <string>
#include <iostream>
#include <fstream> // ifstream, ofstream
#include <cstdlib> // exit() 
#include <iomanip> // setprecision()
using namespace std;

// function prototypes
void course_enrollment(ifstream&);
void percent_enrolled(ifstream&);
void over_enrolled(ifstream&);

int main(){

  ifstream infile("courses.txt", ios::in);
  // !infile -- "courses.txt" couldn't be opened
  if (!infile){ 
    cout << "Could not open input file\n";
    exit(EXIT_FAILURE); // end program
  }
  cout << "File opened successfully\n";

  // set up file for later output
  ofstream report_enroll("enrollment.txt", ios::out);
  // !outfile -- "enrollment.txt" couldn't be opened
  if (!report_enroll){
    cout << "Could not open output file\n";
    exit(EXIT_FAILURE); // end program
  }
  // output to file
  report_enroll << "ENROLLMENT REPORT\n\n";
  report_enroll.close();

  int course, capacity, enrollment, total_enroll = 0, total_capacity = 0;
  // while a row of data from the file can be read
  while (infile >> course >> capacity >> enrollment){
    // add that row's numbers to the running totals
    total_enroll += enrollment;
    total_capacity += capacity;
  }

  // display menu of function options to user 
  int choice;
  do {
    cout << "\n1. Find enrollment for course";
    cout << "\n2. Find enrollment percentage";
    cout << "\n3. Find over-enrolled";
    cout << "\n0 to exit";
    // add more functions later
    cout << "\nEnter selection: ";
    cin >> choice;
    if (choice == 1){
      course_enrollment(infile); // call function
    }
    else if (choice == 2){
      percent_enrolled(infile); //call function
    }
    else if (choice == 3){
      over_enrolled(infile);
    }

  } while (choice != 0);


} // end main

// over enrolled 
void over_enrolled(ifstream& infile){
  // make sure we are at beginning of file
  infile.clear(); // clear EOF condition
  infile.seekg(0, infile.beg); // move to beginning

  int course, capacity, enrolled;

  // open file for writing 
  // ios::app will append to end of file 
  // instead of overwriting
  ofstream outfile("enrollment.txt", ios::app);

  while (infile >> course >> capacity >> enrolled){
    // if enrollment is greater than room capacity 
    if (enrolled > capacity){
      // if file couldn't be opened
      if (!outfile){
        // output to screen with cout 
        cout << course << " " << capacity << " " << enrolled << " Over by " << enrolled - capacity << "\n"; 
      }
      else{
        // otherwise output to file 
        outfile << course << " " << capacity << " " << enrolled << " Over by " << enrolled - capacity << "\n";       
      }
    }
  }
  // close file 
  outfile.close();

}

// percent enrolled
void percent_enrolled(ifstream& infile){
  // make sure we are beginning of file
  infile.clear(); // clear EOF condition
  infile.seekg(0, infile.beg); // move to beginning

  int course, capacity, enrollment;

  // open file for writing 
  // ios::app will append to end of file 
  // instead of overwriting
  ofstream outfile("enrollment.txt", ios::app);

  while (infile >> course >> capacity >> enrollment){
    // if file couldn't be opened, output to screen 
    if (!outfile){
      cout << course << " " << capacity << " " << enrollment << " " << fixed << setprecision(2) << static_cast<double>(enrollment) / capacity << "\n";
    }
    else {
      // otherwise output to file 
      outfile << course << " " << capacity << " " << enrollment << " " << fixed << setprecision(2) << static_cast<double>(enrollment) / capacity << "\n";     
    }
  }
  // close file
  outfile.close();
}



void course_enrollment(ifstream& infile){
  // make sure we are at beginning of file 
  infile.clear(); // clear EOF condition
  infile.seekg(0, infile.beg); // move to beginning

  int search_course, course, enrollment, capacity, total = 0;
  
  // let user enter the course they want to search for 
  cout << "Enter course: ";
  cin >> search_course;

  // go through all records 
  while (infile >> course >> capacity >> enrollment) {
    // if the current course record matches the user's 
    if (course == search_course){
      // add the enrollment into the total
      total += enrollment;
    }
  }

  // open file for writing 
  // ios::app will append to end of file 
  // instead of overwriting
  ofstream outfile("enrollment.txt", ios::app);
 
  if (!outfile){
    // if file couldn't be opened, output to screen
    cout << "Enrollment for course " << search_course << " is " << total << "\n";
  }
  else {
    // otherwise output to the file
    outfile << "Enrollment for course " << search_course << " is " << total << "\n";
  }

  // close file
  outfile.close();
}