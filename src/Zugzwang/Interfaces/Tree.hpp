#if !defined(ZUGZWANG_INTERFACES_TREE)
#define ZUGZWANG_INTERFACES_TREE
#include <vector>

namespace Zugzwang
{
    struct Tree
    {
        virtual void setParent(Tree* parent) = 0;
        virtual int addChild(Tree* child) = 0;
        virtual std::vector<Tree*> getChildren() = 0;
        virtual Tree* getChild(int n) = 0;
        virtual Tree* getParent() = 0;
        virtual void removeChild(int n) = 0;
        virtual int childCount() = 0;
    };
} // namespace Zugzwang


#endif // ZUGZWANG_INTERFACES_TREE
