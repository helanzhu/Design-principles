//
//  Employee.h
//  Design-principles
//
//  Created by chenqg on 2019/10/25.
//  Copyright © 2019年 helanzhu. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Employee : NSObject

//员工姓名
@property (nonatomic, copy) NSString *name;
//员工部门
@property (nonatomic, copy) NSString *department;
//员工ID
@property (nonatomic, copy) NSString *employeeID;


////============ 新需求 ============
////计算薪水
//- (double)calculateSalary;
////是否晋升
//- (BOOL)promote;


@end

NS_ASSUME_NONNULL_END
