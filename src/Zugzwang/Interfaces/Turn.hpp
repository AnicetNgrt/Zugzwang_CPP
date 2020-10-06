#pragma once

#include <vector>

class Command;

namespace Zugzwang
{
    struct Turn
    {
        Turn();
        int addTodo(Command* todo);
        void doAll();
        void undoAll();
    };
} // namespace Zugzwang