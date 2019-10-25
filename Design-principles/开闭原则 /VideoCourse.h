//
//  VideoCourse.h
//  Design-principles
//
//  Created by chenqg on 2019/10/25.
//  Copyright © 2019年 helanzhu. All rights reserved.
//

#import "Course.h"

NS_ASSUME_NONNULL_BEGIN

@interface VideoCourse : Course

//视频地址
@property (nonatomic, copy) NSString *videoUrl;

@end

NS_ASSUME_NONNULL_END
