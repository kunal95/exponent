// Copyright 2015-present 650 Industries. All rights reserved.

#import "ABI10_0_0RCTBridgeModule.h"

@interface ABI10_0_0EXConstants : NSObject <ABI10_0_0RCTBridgeModule>

- (instancetype)initWithProperties: (NSDictionary *)props;

+ (NSString *)getExponentClientVersion;

@end
