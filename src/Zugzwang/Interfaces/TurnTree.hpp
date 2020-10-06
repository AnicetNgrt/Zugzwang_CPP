#if !defined(ZUGZWANG_INTERFACES_TURNTREE)
#define ZUGZWANG_INTERFACES_TURNTREE

class Turn;

namespace Zugzwang
{
    struct TurnTree
    {
        virtual void setTurn(Turn* turn) = 0;
        virtual Turn* getTurn() = 0;
    };
} // namespace Zugzwang


#endif // ZUGZWANG_INTERFACES_TURNTREE
