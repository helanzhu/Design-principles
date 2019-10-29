//
//  ChinesePeople.h
//  Design-principles
//
//  Created by chenqg on 2019/10/29.
//  Copyright © 2019 helanzhu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IAnimalProtocol.h"
#import "IPeopleProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface ChinesePeople : NSObject<IAnimalProtocol,IPeopleProtocol>

@property (nonatomic, weak) id<IAnimalProtocol> animalDelegate;
@property (nonatomic, weak) id<IPeopleProtocol> peopleDelegate;

@end

NS_ASSUME_NONNULL_END
