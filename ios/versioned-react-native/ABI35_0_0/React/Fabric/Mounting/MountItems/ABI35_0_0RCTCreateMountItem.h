/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <UIKit/UIKit.h>

#import <ReactABI35_0_0/core/ReactABI35_0_0Primitives.h>
#import <ReactABI35_0_0/ABI35_0_0RCTMountItemProtocol.h>
#import <ReactABI35_0_0/ABI35_0_0RCTPrimitives.h>

NS_ASSUME_NONNULL_BEGIN

@class ABI35_0_0RCTComponentViewRegistry;

/**
 * Creates a ready-to-mount component view.
 */
@interface ABI35_0_0RCTCreateMountItem : NSObject <ABI35_0_0RCTMountItemProtocol>

- (instancetype)initWithComponentHandle:(facebook::ReactABI35_0_0::ComponentHandle)componentHandle
                                    tag:(ReactABI35_0_0Tag)tag;

@end

NS_ASSUME_NONNULL_END
