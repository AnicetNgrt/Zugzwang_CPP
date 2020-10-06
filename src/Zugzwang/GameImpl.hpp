#if !defined(ZUGZWANG_GAME_HPP)
#define ZUGZWANG_GAME_HPP
#include "Interfaces/Game.hpp"
#include "Interfaces/TurnTree.hpp"
#include "Interfaces/Ruleset.hpp"

namespace Zugzwang
{
    class GameImpl : Game
    {
    private:
        TurnTree* m_currentTurn;
    };
} // namespace Zugzwang

#endif // ZUGZWANG_GAME_HPP
