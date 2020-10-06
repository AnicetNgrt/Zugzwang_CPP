#include "Moves.hpp"
using namespace Zugzwang;

Move::Move(Game& game, Player& author) : m_author(author), Command(game) {}

bool Move::canExecute() {
    return true && Command::canExecute();
}