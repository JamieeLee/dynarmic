/* This file is part of the dynarmic project.
 * Copyright (c) 2018 MerryMage
 * This software may be used and distributed according to the terms of the GNU
 * General Public License version 2 or any later version.
 */

#include "frontend/A64/translate/impl/impl.h"

namespace Dynarmic::A64 {

bool TranslatorVisitor::HINT([[maybe_unused]] Imm<4> CRm, [[maybe_unused]] Imm<3> op2) {
    return true;
}

bool TranslatorVisitor::NOP() {
    return true;
}

bool TranslatorVisitor::YIELD() {
    return RaiseException(Exception::Yield);
}

bool TranslatorVisitor::WFE() {
    return RaiseException(Exception::WaitForEvent);
}

bool TranslatorVisitor::WFI() {
    return RaiseException(Exception::WaitForInterrupt);
}

bool TranslatorVisitor::SEV() {
    return RaiseException(Exception::SendEvent);
}

bool TranslatorVisitor::SEVL() {
    return RaiseException(Exception::SendEventLocal);
}

} // namespace Dynarmic::A64
