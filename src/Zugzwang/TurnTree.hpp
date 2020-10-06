#if !defined(ZUGZWANG_TURNTREE_HPP)
#define ZUGZWANG_TURNTREE_HPP
#include <vector>
#include "Tree.hpp"

class Turn;

namespace Zugzwang
{
    class TurnTree : public Tree
    {
    private:
        Turn* m_turn;
    public:
        TurnTree();
        void setTurn(Turn* turn);
        Turn* getTurn();
    };
} // namespace Zugzwang

#endif // ZUGZWANG_TURNTREE_HPP
