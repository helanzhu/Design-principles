//
//  Project.h
//  Design-principles
//
//  Created by chenqg on 2019/10/29.
//  Copyright © 2019 helanzhu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DeveloperProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface Project : NSObject

- (instancetype)initWithDevelopers:(NSArray<id <DeveloperProtocol>>*)developers;

- (void)startDeveloping;

@end

NS_ASSUME_NONNULL_END
