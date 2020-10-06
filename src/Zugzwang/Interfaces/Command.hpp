#pragma once

class Game;

namespace Zugzwang
{
    struct Command
    {
        Command(Game& game);
        virtual bool canExecute();
        virtual bool canUndo();
        virtual void execute();
        virtual void undo();
    };
} // namespace Zugzwang