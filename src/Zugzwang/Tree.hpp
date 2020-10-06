#if !defined(ZUGZWANG_TREE)
#define ZUGZWANG_TREE
#include <vector>

namespace Zugzwang
{
    class Tree
    {
    private:
        Tree* m_parent;
        std::vector<Tree*> m_children;
    public:
        Tree();
        void setParent(Tree* parent);
        int addChild(Tree* child);
        std::vector<Tree*> getChildren();
        Tree* getChild(int n);
        Tree* getParent();
        void removeChild(int n);
        int childCount();
    };
} // namespace Zugzwang

#endif // ZUGZWANG_TREE
