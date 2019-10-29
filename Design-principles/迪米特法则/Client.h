//
//  Client.h
//  Design-principles
//
//  Created by chenqg on 2019/10/29.
//  Copyright © 2019 helanzhu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Car.h"

NS_ASSUME_NONNULL_BEGIN

@interface Client : NSObject

- (NSString *)findCarEngineBrandName:(Car *)car;

@end

NS_ASSUME_NONNULL_END
