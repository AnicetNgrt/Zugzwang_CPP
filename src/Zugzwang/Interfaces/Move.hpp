#pragma once

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
