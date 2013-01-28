/**
 ******************************************************************************
 * Xenia : Xbox 360 Emulator Research Project                                 *
 ******************************************************************************
 * Copyright 2013 Ben Vanik. All rights reserved.                             *
 * Released under the BSD license - see LICENSE in the root for more details. *
 ******************************************************************************
 */

#ifndef XENIA_KERNEL_MODULES_XBOXKRNL_RTL_H_
#define XENIA_KERNEL_MODULES_XBOXKRNL_RTL_H_

#include "kernel/modules/xboxkrnl/kernel_state.h"


namespace xe {
namespace kernel {
namespace xboxkrnl {


void RegisterRtlExports(ExportResolver* export_resolver, KernelState* state);


}  // namespace xboxkrnl
}  // namespace kernel
}  // namespace xe


#endif  // XENIA_KERNEL_MODULES_XBOXKRNL_RTL_H_
