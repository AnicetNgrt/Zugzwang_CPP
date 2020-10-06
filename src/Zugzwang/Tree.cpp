#include "Tree.hpp"
#include <assert.h>
using namespace Zugzwang;

Tree::Tree()
    :m_children(std::vector<Tree*>(0)),
    m_parent(nullptr)
{}

void Tree::setParent(Tree* parent)
{
    m_parent = parent;
}

Tree* Tree::getParent()
{
    return m_parent;
}

int Tree::addChild(Tree* child)
{
    m_children.push_back(child);
    return m_children.size();
}

std::vector<Tree*> Tree::getChildren()
{
    return m_children;
}

Tree* Tree::getChild(int n)
{
    assert(n >= 0 && n < m_children.size());
    return m_children.at(n);
}

void Tree::removeChild(int n)
{
    assert(n >= 0 && n < m_children.size());
    // Avoid linear with swap with last and pop_back
    m_children.erase(m_children.begin()+n);
}

int Tree::childCount()
{
    return m_children.size();
}