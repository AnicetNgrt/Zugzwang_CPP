#if !defined(ZUGZWANG_INTERFACES_COMMAND)
#define ZUGZWANG_INTERFACES_COMMAND

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

#endif // ZUGZWANG_INTERFACES_COMMAND
