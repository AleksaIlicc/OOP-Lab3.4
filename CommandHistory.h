#pragma once

#include "Command.h"

class CommandHistory {
    private:
        Command* cmdArr[2019];
        int currentEl;
        void oslobodiPrvo();
    public:
        CommandHistory();
        ~CommandHistory();
        void undo();
        void create(int x);
        void execute();
        void executioner();
};
