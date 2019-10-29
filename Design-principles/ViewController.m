//
//  ViewController.m
//  Design-principles
//
//  Created by chenqg on 2019/10/25.
//  Copyright © 2019年 helanzhu. All rights reserved.
//

#import "ViewController.h"
#import "People.h"
#import "ChinesePeople.h"

@interface ViewController ()

@end

@implementation ViewController


void ispTest(){
    ChinesePeople *chinesePeople = [[ChinesePeople alloc]init];
    People *people = [[People alloc]init];
    
    chinesePeople.animalDelegate = people;
    chinesePeople.peopleDelegate = people;
    
    [chinesePeople work];
    [chinesePeople eat];
    [chinesePeople walk];
    
}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
//   接口隔离
//    ispTest();
}


@end
