#include "Commands.hpp"
#include <assert.h>
using namespace Zugzwang;

Command::Command(Game& game) : m_done(true) {}

bool Command::canExecute()
{
    return !m_done;
}

bool Command::canUndo()
{
    return m_done;
}

void Command::execute()
{
    assert(canExecute());
    m_done = true;
}

void Command::undo()
{
    assert(canUndo());
    m_done = false;
}