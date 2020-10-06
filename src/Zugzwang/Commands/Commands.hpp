#if !defined(ZUGZWANG_COMMANDS_HPP)
#define ZUGZWANG_COMMANDS_HPP
#include "../Game.hpp"

namespace Zugzwang
{
    class Command
    {
    private:
        bool m_done;
    public:
        Command(Game& game);
        virtual bool canExecute();
        virtual bool canUndo();
        virtual void execute();
        virtual void undo();
    };
} // namespace Zugzwang


#endif // ZUGZWANG_COMMANDS_HPP
