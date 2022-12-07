#include <iostream>
#include <string.h>
#include "Command.h"

using namespace std;

Command::Command(string title, string value) {
    this->title = title;
    this->value = new char[30];
    strcpy_s(this->value,30,value.c_str());
}

Command::~Command() {
    delete[] this->value;
}

void Command::execute() {
    cout << "Title : " << this->title << endl;
}
