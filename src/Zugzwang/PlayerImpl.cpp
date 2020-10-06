#include "PlayerImpl.hpp"
using namespace Zugzwang;

PlayerImpl::PlayerImpl() : m_isAllowedToPlay(false)
{}

bool PlayerImpl::isAllowedToPlay() {
    return isAllowedToPlay;
}

void PlayerImpl::setIsAllowedToPlay(bool isAllowedToPlay) {
    m_isAllowedToPlay = isAllowedToPlay;
}

Move PlayerImpl::play()
{}

bool PlayerImpl::canPlay()
{}

void PlayerImpl::giveCommand(Command* command) 
{}
