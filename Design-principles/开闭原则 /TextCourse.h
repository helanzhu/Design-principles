//
//  TextCourse.h
//  Design-principles
//
//  Created by chenqg on 2019/10/25.
//  Copyright © 2019年 helanzhu. All rights reserved.
//

#import "Course.h"

NS_ASSUME_NONNULL_BEGIN

@interface TextCourse : Course

//文字博客地址
@property (nonatomic, copy) NSString *content;

@end

NS_ASSUME_NONNULL_END
