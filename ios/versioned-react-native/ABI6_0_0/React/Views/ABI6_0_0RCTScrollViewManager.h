/**
 * Copyright (c) 2015-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import "ABI6_0_0RCTViewManager.h"
#import "ABI6_0_0RCTConvert.h"

@interface ABI6_0_0RCTConvert (UIScrollView)

+ (UIScrollViewKeyboardDismissMode)UIScrollViewKeyboardDismissMode:(id)json;

@end

@interface ABI6_0_0RCTScrollViewManager : ABI6_0_0RCTViewManager

@end
