#if !defined(ZUGZWANG_TURN_HPP)
#define ZUGZWANG_TURN_HPP
#include <vector>

class Command;

namespace Zugzwang
{
    class Turn
    {
    private:
        std::vector<Command*> todo;
        std::vector<Command*> done;
    public:
        Turn();
        int addTodo(Command* todo);
        void doAll();
        void undoAll();
    };
} // namespace Zugzwang

#endif // ZUGZWANG_TURN_HPP
