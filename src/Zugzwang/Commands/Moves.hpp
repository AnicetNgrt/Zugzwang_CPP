#if !defined(ZUGZWANG_COMMANDS_MOVE_HPP)
#define ZUGZWANG_COMMANDS_MOVE_HPP
#include "Commands.hpp"
#include "../Player.hpp"

namespace Zugzwang
{
    class Move : Command
    {
    private:
        Player& m_author;
    public:
        Move(Game& game, Player& author);
        virtual bool canExecute();
    };
} // namespace Zugzwang::Commands


#endif // ZUGZWANG_COMMANDS_MOVE_HPP
