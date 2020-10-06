#if !defined(ZUGZWANG_INTERFACES_GAME)
#define ZUGZWANG_INTERFACES_GAME

class Ruleset;

namespace Zugzwang
{   
    /* @Interface */
    struct Game
    {
        virtual void start() = 0;
        virtual void playTurn() = 0;
        virtual bool isFinished() = 0;
    };
} // namespace Zugzwang


#endif // ZUGZWANG_INTERFACES_GAME
