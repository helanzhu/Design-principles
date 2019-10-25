//
//  HRApartment.h
//  Design-principles
//
//  Created by chenqg on 2019/10/25.
//  Copyright © 2019年 helanzhu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Employee.h"

NS_ASSUME_NONNULL_BEGIN

@interface HRApartment : NSObject

//今年是否晋升
- (BOOL)promote:(Employee*)employee;

@end

NS_ASSUME_NONNULL_END
