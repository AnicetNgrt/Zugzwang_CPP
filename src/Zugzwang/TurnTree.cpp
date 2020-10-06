#include "TurnTree.hpp"
#include <assert.h>
using namespace Zugzwang;

TurnTree::TurnTree() : Tree(), m_turn(nullptr)
{}

void TurnTree::setTurn(Turn* turn)
{
    m_turn = turn;
}

Turn* TurnTree::getTurn()
{
    return m_turn;
}