//
//  Car.m
//  Design-principles
//
//  Created by chenqg on 2019/10/29.
//  Copyright © 2019 helanzhu. All rights reserved.
//

#import "Car.h"
#import "GasEngine.h"

@implementation Car
{
    GasEngine *_engine;
}

- (instancetype)initWithEngine:(GasEngine *)engine{
    
    self = [super init];
    
    if (self) {
        _engine = engine;
    }
    return self;
}


- (NSString *)engineBrandName{
    return _engine.brandName;
}

@end
