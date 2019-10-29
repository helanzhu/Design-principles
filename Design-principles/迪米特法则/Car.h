//
//  Car.h
//  Design-principles
//
//  Created by chenqg on 2019/10/29.
//  Copyright © 2019 helanzhu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GasEngine.h"

NS_ASSUME_NONNULL_BEGIN

@interface Car : NSObject

- (instancetype)initWithEngine:(GasEngine *)engine;

- (NSString *)engineBrandName;

@end

NS_ASSUME_NONNULL_END
