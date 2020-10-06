#pragma once

#include "Move.hpp"

class Command;

namespace Zugzwang
{
    struct Player
    {
        virtual Move play() = 0;
        virtual bool canPlay() = 0;
        virtual void giveCommand(Command* command) = 0;
    };
} // namespace Zugzwang
