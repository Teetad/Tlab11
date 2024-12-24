#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    string grade;
    int random_num = rand() % 9;
    if (random_num == 0) grade = "A";
    if (random_num == 1) grade = "B+";
    if (random_num == 2) grade = "B";
    if (random_num == 3) grade = "C+";
    if (random_num == 4) grade = "C";
    if (random_num == 5) grade = "D+";
    if (random_num == 6) grade = "D";
    if (random_num == 7) grade = "F";
    if (random_num == 8) grade = "W";
    cout << "You will get " << grade <<" in this 261102.";


}