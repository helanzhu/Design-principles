//
//  ChinesePeople.m
//  Design-principles
//
//  Created by chenqg on 2019/10/29.
//  Copyright © 2019 helanzhu. All rights reserved.
//

#import "ChinesePeople.h"

@implementation ChinesePeople

- (void)work{
    [_peopleDelegate work];
    
}

- (void)walk{
    [_animalDelegate walk];
}

- (void)eat{
    [_animalDelegate eat];
}

@end
