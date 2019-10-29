//
//  Bird.h
//  Design-principles
//
//  Created by chenqg on 2019/10/29.
//  Copyright © 2019 helanzhu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IAnimalProtocol.h"
#import "IBirdProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface Bird : NSObject<IAnimalProtocol,IBirdProtocol>

@end

NS_ASSUME_NONNULL_END
