//
//  FinancialApartment.h
//  Design-principles
//
//  Created by chenqg on 2019/10/25.
//  Copyright © 2019年 helanzhu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Employee.h"

NS_ASSUME_NONNULL_BEGIN

@interface FinancialApartment : NSObject

//计算薪水
- (double)calculateSalary:(Employee *)employee;

@end

NS_ASSUME_NONNULL_END
