#if !defined(ZUGZWANG_INTERFACES_TURN)
#define ZUGZWANG_INTERFACES_TURN
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

#endif // ZUGZWANG_INTERFACES_TURN
