//
//  Project.m
//  Design-principles
//
//  Created by chenqg on 2019/10/29.
//  Copyright © 2019 helanzhu. All rights reserved.
//

#import "Project.h"
#import "FrondEndDeveloper.h"
#import "BackEndDeveloper.h"

@implementation Project
{
    NSArray <id <DeveloperProtocol>> *_developers;
}

- (instancetype)initWithDevelopers:(NSArray<id<DeveloperProtocol>> *)developers{
    if (self = [super init]) {
        _developers = developers;
    }
    return self;
}

- (void)startDeveloping{
    
    [_developers enumerateObjectsUsingBlock:^(id<DeveloperProtocol>  _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
        [obj writeCode];
    }];
}


@end
