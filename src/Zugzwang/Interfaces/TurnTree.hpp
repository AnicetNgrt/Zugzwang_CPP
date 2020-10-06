#pragma once

class Turn;

namespace Zugzwang
{
    struct TurnTree
    {
        virtual void setTurn(Turn* turn) = 0;
        virtual Turn* getTurn() = 0;
    };
} // namespace Zugzwang
