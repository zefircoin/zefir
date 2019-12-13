// Copyright (c) 2017 The PIVX developers
// Copyright (c) 2017-2018 The HUZU developers
// Copyright (c) 2018 The ZEFIR developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ZEFIR_BLOCKSIGNATURE_H
#define ZEFIR_BLOCKSIGNATURE_H

#include "key.h"
#include "primitives/block.h"
#include "keystore.h"

bool SignBlockWithKey(CBlock& block, const CKey& key);
bool SignBlock(CBlock& block, const CKeyStore& keystore);
bool CheckBlockSignature(const CBlock& block);

#endif //ZEFIR_BLOCKSIGNATURE_H
