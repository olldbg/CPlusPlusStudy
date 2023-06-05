#pragma once
#include "common.h"

/**
 * General union find class implement
 */
namespace lmj
{

    template <class T>
    class UnionFind
    {

    private:
        std::vector<T> parent;

    public:
        UnionFind(){}

        UnionFind(int size, T initial)
        {
            parent.resize(size);
            iota(parent.begin(), parent.end(), initial);
        }

        T find(T index)
        {
            if (index == parent[index])
            {
                return index;
            }
            parent[index] = find(parent[index]);
            return parent[index];
        }

        void join(T index1, T index2)
        {
            parent[find(index1)] = find(index2);
        }
    };

}