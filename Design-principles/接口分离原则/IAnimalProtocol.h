//
//  IAnimalProtocol.h
//  Design-principles
//
//  Created by chenqg on 2019/10/29.
//  Copyright © 2019 helanzhu. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol IAnimalProtocol <NSObject>

// 使用接口隔离原则，将该方法放到IPeopleProtocol
//- (void)work;
// 使用接口隔离原则，将该方法放到IBirdProtocol
//- (void)fly;

@required

- (void)eat;

@optional

- (void)walk;

@end

NS_ASSUME_NONNULL_END
