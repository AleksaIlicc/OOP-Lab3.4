#include <iostream>
#include <string>
#include "Command.h"
#include "CommandDraw.h"
#include "CommandSave.h"
//#include "CommandEdit.h" UZ DODATAK
#include "CommandPrint.h"
#include "CommandHistory.h"
#include <fstream>

using namespace std;

int main()
{
    CommandHistory* history = new CommandHistory();

    for(int i = 0; i < 673; i++) {
        history->create(1);
    }

    for(int i = 0; i < 673; i++) {
        history->create(2);
    }

    for(int i = 0; i < 673; i++) {
        history->create(3);
    }
    
    history->create(1);
    history->create(2);
    history->create(3);

    history->executioner();

    delete history;

    /* NA CASU DODATAK, DODATI NOVU IZVEDENU KLASU KOJA IMA 1 VIRTUAL FUNKCIJU

    Command *cmd1 = new CommandDraw();
    Command *cmd2 = new CommandSave();
    Command *cmd3 = new CommandEdit();

    cmd1->execute();
    cmd2->execute();
    cmd3->execute();

    cmd3->edit("New Title", "New Value");
    cmd3->execute();

    return 0; */
}
