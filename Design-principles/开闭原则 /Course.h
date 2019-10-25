//
//  Course.h
//  Design-principles
//
//  Created by chenqg on 2019/10/25.
//  Copyright © 2019年 helanzhu. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Course : NSObject

//课程名称
@property (nonatomic, copy) NSString *courseName;
//课程介绍
@property (nonatomic, copy) NSString *courseIntoduction;
//课程主讲老师
@property (nonatomic, copy) NSString *teacherName;
//课程内容
//@property (nonatomic, copy) NSString *content;


//新需求 全部写在基类,不好的处理方法

////视频课程
//@property (nonatomic, copy) NSString *videoUrl;
//
////音频课程
//@property (nonatomic, copy) NSString *audioUrl;
//
////直播课程
//@property (nonatomic, copy) NSString *liveUrl;


@end

NS_ASSUME_NONNULL_END
