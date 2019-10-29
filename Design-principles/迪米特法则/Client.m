//
//  Client.m
//  Design-principles
//
//  Created by chenqg on 2019/10/29.
//  Copyright © 2019 helanzhu. All rights reserved.
//

#import "Client.h"

@implementation Client

- (NSString *)findCarEngineBrandName:(Car *)car{
    
    NSString *engineName = [car engineBrandName];
    return engineName;
}


@end
