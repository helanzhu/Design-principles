//
//  People.h
//  Design-principles
//
//  Created by chenqg on 2019/10/29.
//  Copyright © 2019 helanzhu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IAnimalProtocol.h"
#import "IPeopleProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface People : NSObject<IAnimalProtocol,IPeopleProtocol>

@end

NS_ASSUME_NONNULL_END
