#if !defined(ZUGZWANG_INTERFACES_MOVE)
#define ZUGZWANG_INTERFACES_MOVE
#include "Command.hpp"

class Player;
class Game;

namespace Zugzwang
{
    struct Move : Command
    {
        Move(Game& game, Player& author);
        virtual bool canExecute();
    };
} // namespace Zugzwang

#endif // ZUGZWANG_INTERFACES_MOVE
