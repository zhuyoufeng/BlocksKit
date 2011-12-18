//
//  A2BlockDelegate+BlocksKit.h
//  BlocksKit
//
//  Created by Zachary Waldowski on 12/17/11.
//  Copyright (c) 2011 Dizzy Technology. All rights reserved.
//

#import "A2BlockDelegate.h"

@interface NSObject (A2BlockDelegateBlocksKit)

+ (void)swizzleDataSourceProperty;
+ (void)swizzleDataSourcePropertyNamed:(NSString *)dataSourceName;
+ (void)swizzleDelegateProperty;
+ (void)swizzleDelegatePropertyNamed:(NSString *)delegateName;

@end

@interface A2DynamicDelegate (BlocksKit)

- (id) realDataSource;
- (id) realDataSourceNamed: (NSString *) dataSourceName;

- (id) realDelegate;
- (id) realDelegateNamed: (NSString *) delegateName;

@end