//
//  AudioCourse.h
//  Design-principles
//
//  Created by chenqg on 2019/10/25.
//  Copyright © 2019年 helanzhu. All rights reserved.
//

#import "Course.h"

NS_ASSUME_NONNULL_BEGIN

@interface AudioCourse : Course

//音频地址
@property (nonatomic, copy) NSString *audioUrl;

@end

NS_ASSUME_NONNULL_END
