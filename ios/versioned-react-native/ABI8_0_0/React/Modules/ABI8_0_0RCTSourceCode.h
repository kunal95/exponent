/**
 * Copyright (c) 2015-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <Foundation/Foundation.h>

#import "ABI8_0_0RCTBridgeModule.h"

@interface ABI8_0_0RCTSourceCode : NSObject <ABI8_0_0RCTBridgeModule>

@property (nonatomic, copy) NSURL *scriptURL;

@end
