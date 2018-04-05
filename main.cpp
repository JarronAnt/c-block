#include "defns.h"

Block::Block(int idx, Transaction d, size_t prevHash){
    index = idx;
    data = d;
    prevHash = prevHash;
    hash = genHash();
}
