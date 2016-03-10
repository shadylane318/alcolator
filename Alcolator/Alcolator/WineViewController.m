//
//  WineViewController.m
//  Alcolator
//
//  Created by Daniel Rodas on 3/9/16.
//  Copyright © 2016 Bloc. All rights reserved.
//

#import "WineViewController.h"

@interface WineViewController ()

@end

@implementation WineViewController

- (float)ouncesInOneGlass {
    return 5;
}

- (float)alcoholPercentage {
    return 0.13;
}

- (NSString *)alcoholName {
    return @"wine";
}

- (NSString *)unitsOfAlcohol {
    return @"Wine glasses";
}

@end
