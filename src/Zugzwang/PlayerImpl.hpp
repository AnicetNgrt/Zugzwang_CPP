#if !defined(ZUGZWANG_PLAYER_HPP)
#define ZUGZWANG_PLAYER_HPP
#include "Interfaces/Player.hpp"

namespace Zugzwang
{
    class PlayerImpl : Player
    {
    private:
        bool m_isAllowedToPlay;
    public:
        PlayerImpl();
        bool isAllowedToPlay();
        void setIsAllowedToPlay(bool isAllowedToPlay);
        virtual Move PlayerImpl::play();
        virtual bool canPlay();
        virtual void giveCommand(Command* command);
    };
}

#endif // ZUGZWANG_PLAYER_HPP
